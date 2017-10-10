module mojo_top(
        input clk,
        input rst_n,
        input cclk,
        output[7:0] led,
        output spi_miso,
        input spi_ss,
        input spi_mosi,
        input spi_sck,
        output [3:0] avr_flags,
        input avr_tx,
        output avr_rx,
        input avr_rx_busy,
        output sdram_clk,
        output sdram_cle,
        output sdram_dqm,
        output sdram_cs,
        output sdram_we,
        output sdram_cas,
        output sdram_ras,
        output [1:0] sdram_ba,
        output [12:0] sdram_a,
        inout [7:0] sdram_dq,

        output sccb_scl,
        inout sccb_sda,
        output camera_xclk,
        input camera_pclk,
        input camera_href,
        input camera_vsync,
        output camera_rst,
        input [7:0] camera_data,
        output laser,
        output [7:0] servo_a,
        output [7:0] servo_b,
        output [7:0] servo_c,
        output [2:0] servo_en
    );

    wire fclk, cam_clk;
    wire rst = ~rst_n;

    wire [22:0] addr;
    wire rw;
    wire [31:0] data_in, data_out;
    wire busy;
    wire in_valid, out_valid;

    localparam RAM_DEVICES = 2;

    wire [22:0] bus_addr [RAM_DEVICES-1:0];
    wire [RAM_DEVICES-1:0] bus_rw;
    wire [31:0] bus_data_in [RAM_DEVICES-1:0], bus_data_out [RAM_DEVICES-1:0];
    wire [RAM_DEVICES-1:0] bus_busy;
    wire [RAM_DEVICES-1:0] bus_in_valid, bus_out_valid;
    wire [RAM_DEVICES-1:0] activity;

    wire [7:0] tx_data, rx_data;
    wire new_tx_data, new_rx_data, tx_busy;

    wire [23:0] pwm;
    wire [4:0] servo_select;
    wire [15:0] servo_position;
    wire servo_update;

    wire [5:0] reg_addr;
    wire reg_write, reg_new_req;
    wire [7:0] reg_write_value, reg_read_value;

    wire blob_done;
    wire blob_read;
    wire [4:0] blob_state;

    wire avr_ready;
    wire [3:0] flags;
    assign avr_flags = avr_ready ? flags : 4'bz;

    assign servo_en = 3'b111;
    assign servo_a = pwm[7:0];
    assign servo_b = pwm[15:8];
    assign servo_c = pwm[23:16];

    assign led[7:4] = blob_state;
    assign laser = 1'b0;

   // assign led[3] = color_busy;
    assign led[3:0] = {blob_read, fifo_empty, flip_flags};


    reg [1:0] flip_flags;

    always @(posedge fclk) begin
        if (blob_done)
            flip_flags[0] = ~flip_flags[0];
        if (cam_end_frame)
            flip_flags[1] = ~flip_flags[1];
    end

    sdram_clk_gen clkram_clk_gen (
            .clk_in(clk),
            .clk_out(fclk),
            .clk10_out(cam_clk)
        );

    avr_interface #(.CLK_RATE(100000000), .SERIAL_BAUD_RATE(500000)) avr_interface (
            .clk(fclk),
            .rst(rst),
            .cclk(cclk),
            .ready(avr_ready),
            .spi_miso(spi_miso),
            .spi_mosi(spi_mosi),
            .spi_sck(spi_sck),
            .spi_ss(spi_ss),
            .tx(avr_rx),
            .rx(avr_tx),
            .reg_addr(reg_addr),
            .write(reg_write),
            .new_req(reg_new_req),
            .write_value(reg_write_value),
            .read_value(reg_read_value)
        );

    reg_ctrl reg_ctrl (
            .clk(fclk),
            .rst(rst),
            .reg_addr(reg_addr),
            .write(reg_write),
            .new_req(reg_new_req),
            .write_value(reg_write_value),
            .read_value(reg_read_value),
            .addr(bus_addr[0]),
            .rw(bus_rw[0]),
            .data_in(bus_data_in[0]),
            .data_out(bus_data_out[0]),
            .busy(bus_busy[0]),
            .in_valid(bus_in_valid[0]),
            .out_valid(bus_out_valid[0]),
            .capture_image(capture_image),
            .image_captured(1'b0),
            .blob_done(blob_done),
            .servo_select(servo_select),
            .servo_position(servo_position),
            .servo_update(servo_update),
            .flags(flags),
            .blob_read(blob_read)
        );

    sdram sdram (
            .clk(fclk),
            .rst(rst),
            .sdram_clk(sdram_clk),
            .sdram_cle(sdram_cle),
            .sdram_cs(sdram_cs),
            .sdram_cas(sdram_cas),
            .sdram_ras(sdram_ras),
            .sdram_we(sdram_we),
            .sdram_dqm(sdram_dqm),
            .sdram_ba(sdram_ba),
            .sdram_a(sdram_a),
            .sdram_dq(sdram_dq),
            .addr(addr),
            .rw(rw),
            .data_in(data_in),
            .data_out(data_out),
            .busy(busy),
            .in_valid(in_valid),
            .out_valid(out_valid)
        );

    ram_bus #(.DEVICES(RAM_DEVICES)) ram_bus (
            .clk(fclk),
            .rst(rst),
            .addr(addr),
            .rw(rw),
            .data_in(data_in),
            .data_out(data_out),
            .busy(busy),
            .in_valid(in_valid),
            .out_valid(out_valid),
            .bus_addr({bus_addr[1],bus_addr[0]}),
            .bus_rw(bus_rw),
            .bus_data_in({bus_data_in[1],bus_data_in[0]}),
            .bus_data_out({bus_data_out[1],bus_data_out[0]}),
            .bus_busy(bus_busy),
            .bus_in_valid(bus_in_valid),
            .bus_out_valid(bus_out_valid),
            .act(activity)
        );

    wire cam_end_frame, cam_end_line, cam_new_pixel;
    wire [15:0] cam_pixel;

    ov2640 camera (
            .clk(fclk),
            .rst(rst),
            .cam_clk(cam_clk),
            .scl(sccb_scl),
            .sda(sccb_sda),
            .xclk(camera_xclk),
            .pclk(camera_pclk),
            .href(camera_href),
            .vsync(camera_vsync),
            .data(camera_data),
            .rst_cm(camera_rst),
            .end_frame(cam_end_frame),
            .end_line(cam_end_line),
            .new_pixel(cam_new_pixel),
            .pixel(cam_pixel)
        );

    wire color_end_frame, color_end_line, color_new_pixel, color_pixel;

    color_threshold color_threshold (
            .clk(fclk),
            .rst(rst),
            .end_frame_in(cam_end_frame),
            .end_line_in(cam_end_line),
            .new_pixel_in(cam_new_pixel),
            .pixel_in(cam_pixel),
            .end_frame_out(color_end_frame),
            .end_line_out(color_end_line),
            .new_pixel_out(color_new_pixel),
            .pixel_out(color_pixel)
        );

    wire [10:0] run_start, run_end;
    wire new_run, finder_end_line, finder_end_frame;

    run_finder run_finder (
            .clk(fclk),
            .rst(rst),
            .end_frame_in(color_end_frame),
            .end_line_in(color_end_line),
            .new_pixel(color_new_pixel),
            .pixel(color_pixel),
            .run_start(run_start),
            .run_end(run_end),
            .new_run(new_run),
            .end_line_out(finder_end_line),
            .end_frame_out(finder_end_frame)
        );

    wire fifo_empty, fifo_rd_en;
    wire [22:0] fifo_dout;

    run_fifo_manager run_fifo_manager (
            .clk(fclk),
            .rst(rst),
            .run_start(run_start),
            .run_end(run_end),
            .new_run(new_run),
            .end_line(finder_end_line),
            .end_frame(finder_end_frame),
            .empty(fifo_empty),
            .dout(fifo_dout),
            .rd_en(fifo_rd_en)
        );


    blob_detector #(
            .RUNS_ADDR(0)
        ) blob_detector (
            .clk(fclk),
            .rst(rst),
            .addr(bus_addr[1]),
            .rw(bus_rw[1]),
            .data_in(bus_data_in[1]),
            .data_out(bus_data_out[1]),
            .busy(bus_busy[1]),
            .in_valid(bus_in_valid[1]),
            .out_valid(bus_out_valid[1]),
            .empty(fifo_empty),
            .fifo_out(fifo_dout),
            .rd_en(fifo_rd_en),
            .done(blob_done),
            .state(blob_state)
        );

    servo_controller servo_controller (
            .clk(fclk),
            .rst(rst),
            .select(servo_select),
            .position(servo_position),
            .in_valid(servo_update),
            .pwm(pwm)
        );
endmodule