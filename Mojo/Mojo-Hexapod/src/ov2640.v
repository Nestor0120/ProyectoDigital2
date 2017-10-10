module ov2640 (
    input clk,
    input rst,
    input cam_clk,

    // SCCB interface
    output scl,
    inout sda,

    // Main interface
    output xclk,
    input pclk,
    input href,
    input vsync,
    input [7:0] data,
    output rst_cm,

    // Data output
    output end_frame,
    output end_line,
    output new_pixel,
    output [15:0] pixel
  );

  assign rst_cm = 1'b1; // active low

  // This is used to drive the camera clock
  ODDR2 #(
    .DDR_ALIGNMENT("NONE"),
    .INIT(1'b0),
    .SRTYPE("SYNC")
  ) ODDR2_inst (
    .Q(xclk), // 1-bit DDR output data
    .C0(cam_clk), // 1-bit clock input
    .C1(~cam_clk), // 1-bit clock input
    .CE(1'b1), // 1-bit clock enable input
    .D0(1'b1), // 1-bit data input (associated with C0)
    .D1(1'b0), // 1-bit data input (associated with C1)
    .R(1'b0), // 1-bit reset input
    .S(1'b0) // 1-bit set input
  );

  localparam REG_COUNT = 9'd197;

  localparam STATE_SIZE = 3;
  localparam WAIT_RESET = 0,
         RESET_CAMERA = 1,
         WAIT_SETUP = 2,
         PROG_CAMERA = 3,
         DONE = 4;

  reg [STATE_SIZE-1:0] state_d, state_q;

  wire [7:0] reg_addr, reg_value;
  wire busy, ack;

  reg [7:0] rom_addr_d, rom_addr_q;
  reg write;
  reg [17:0] cam_dly_d, cam_dly_q;

  reg end_frame_d, end_frame_q;
  reg end_line_d, end_line_q;
  reg new_pixel_d, new_pixel_q;
  reg [15:0] pixel_d, pixel_q;
  reg href_d, href_q;
  reg vsync_d, vsync_q;
  reg byte_ct_d, byte_ct_q;

  assign pixel = pixel_q;
  assign end_frame = end_frame_q;
  assign end_line = end_line_q;
  assign new_pixel = new_pixel_q;

  reg rd_en;
  wire href_fifo, vsync_fifo;
  wire [7:0] data_fifo;
  wire empty;

  camera_fifo camera_fifo (
    .rst(rst), // input rst
    .wr_clk(pclk), // input wr_clk
    .rd_clk(clk), // input rd_clk
    .din({vsync,href,data}), // input [9 : 0] din
    .wr_en(1'b1), // input wr_en
    .rd_en(rd_en), // input rd_en
    .dout({vsync_fifo,href_fifo,data_fifo}), // output [9 : 0] dout
    .full(), // output full
    .empty(empty) // output empty
  );

  sccb sccb (
      .clk(clk),
      .rst(rst),
      .scl(scl),
      .sda(sda),
      .addr(reg_addr),
      .value(reg_value),
      .write(write),
      .ack(ack),
      .busy(busy)
    );

  ov2640_reg reg_rom (
      .clk(clk),
      .addr(rom_addr_q),
      .reg_addr(reg_addr),
      .value(reg_value)
    );

  // Camera initalization block
  always @(*) begin
    //xclk_ctr_d = xclk_ctr_q + 1'b1;
    rom_addr_d = rom_addr_q;
    write = 1'b0;
    cam_dly_d = 17'd0;
    state_d = state_q;

    case (state_q)
      WAIT_RESET: begin
        cam_dly_d = cam_dly_q + 1'b1;
        if (&cam_dly_q) //maxed
          state_d = RESET_CAMERA;
      end
      RESET_CAMERA: begin
        if (!busy) begin
          if (rom_addr_q != 2) begin
            rom_addr_d = rom_addr_q + 1'b1;
            write = 1'b1;
          end else begin
            state_d = WAIT_SETUP;
          end
        end
      end
      WAIT_SETUP: begin
        cam_dly_d = cam_dly_q + 1'b1;
        if (&cam_dly_q) //maxed
          state_d = PROG_CAMERA;
      end
      PROG_CAMERA: begin
        if (!busy) begin
          if (rom_addr_q != REG_COUNT) begin
            rom_addr_d = rom_addr_q + 1'b1;
            write = 1'b1;
          end else begin
            state_d = DONE;
          end
        end
      end
      DONE: begin
        // do nothing
      end
      default: state_d = WAIT_RESET;
    endcase

    href_d = href_q;
    vsync_d = vsync_q;

    end_frame_d = 1'b0;
    end_line_d = 1'b0;
    new_pixel_d = 1'b0;
    pixel_d = pixel_q;
    byte_ct_d = byte_ct_q;

    rd_en = 1'b0;

    if (!empty) begin
      rd_en = 1'b1;
      // Data capture
      href_d = href_fifo;
      vsync_d = vsync_fifo;

      if ({vsync_q,vsync_fifo} == 2'b10)
        end_frame_d = 1'b1;

      if ({href_q,href_fifo} == 2'b10)
        end_line_d = 1'b1;

      if (!vsync_fifo || !href_fifo)
        byte_ct_d = 1'b0;

      if (href_fifo && vsync_fifo) begin
        pixel_d = {pixel_q[7:0], data_fifo};
        byte_ct_d = ~byte_ct_q;
        if (byte_ct_q)
          new_pixel_d = 1'b1;
      end
    end
  end

  always @(posedge clk) begin
    if (rst) begin
      rom_addr_q <= 8'h00;
      cam_dly_q <= 1'b0;
      state_q <= WAIT_RESET;
    end else begin
      rom_addr_q <= rom_addr_d;
      cam_dly_q <= cam_dly_d;
      state_q <= state_d;
    end

     // xclk_ctr_q <= xclk_ctr_d;

    end_frame_q <= end_frame_d;
    end_line_q <= end_line_d;
    new_pixel_q <= new_pixel_d;
    pixel_q <= pixel_d;
    href_q <= href_d;
    vsync_q <= vsync_d;
    byte_ct_q <= byte_ct_d;
  end

endmodule
