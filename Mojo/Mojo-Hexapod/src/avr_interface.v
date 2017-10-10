module avr_interface #(
    parameter CLK_RATE = 50000000,
    parameter SERIAL_BAUD_RATE = 500000
    )(
    input clk,
    input rst,

    // cclk, or configuration clock is used when the FPGA is begin configured.
    // The AVR will hold cclk high when it has finished initializing.
    // It is important not to drive the lines connecting to the AVR
    // until cclk is high for a short period of time to avoid contention.
    input cclk,
    // signal the rest of the chip we are ready
    output ready,

    // AVR SPI Signals
    output spi_miso,
    input spi_mosi,
    input spi_sck,
    input spi_ss,

    // AVR Serial Signals
    output tx,
    input rx,

    // Serial Interface
    output [7:0] rx_data,
    input [7:0] tx_data,
    input new_tx_data,
    output tx_busy,

    // Register interface signals
    output [5:0] reg_addr,
    output write,
    output new_req,
    output [7:0] write_value,
    input [7:0] read_value
);

wire n_rdy = !ready;
wire spi_done;
wire [7:0] spi_dout;
wire frame_start, frame_end;

wire tx_m;
wire spi_miso_m;

localparam STATE_SIZE = 2;
localparam IDLE = 0,
           ADDR = 1,
           WRITE = 2,
           READ = 3;

reg [STATE_SIZE-1:0] state_d, state_q;

reg [7:0] write_value_d, write_value_q;
reg write_d, write_q;
reg auto_inc_d, auto_inc_q;
reg [5:0] reg_addr_d, reg_addr_q;
reg new_req_d, new_req_q;
reg first_write_d, first_write_q;

assign reg_addr = reg_addr_q;
assign write = write_q;
assign new_req = new_req_q;
assign write_value = write_value_q;

// these signals connect to the AVR and should be Z when the AVR isn't ready
assign spi_miso = ready && !spi_ss ? spi_miso_m : 1'bZ;
assign tx = ready ? tx_m : 1'bZ;

// cclk_detector is used to detect when cclk is high signaling when
// the AVR is ready
cclk_detector #(.CLK_RATE(CLK_RATE)) cclk_detector (
    .clk(clk),
    .rst(rst),
    .cclk(cclk),
    .ready(ready)
);

spi_slave spi_slave (
    .clk(clk),
    .rst(n_rdy),
    .ss(spi_ss),
    .mosi(spi_mosi),
    .miso(spi_miso_m),
    .sck(spi_sck),
    .done(spi_done),
    .din(read_value),
    .dout(spi_dout),
    .frame_start(frame_start),
    .frame_end(frame_end)
);

// CLK_PER_BIT is the number of cycles each 'bit' lasts for
// rtoi converts a 'real' number to an 'integer'
parameter CLK_PER_BIT = $rtoi($ceil(CLK_RATE/SERIAL_BAUD_RATE));

serial_rx #(.CLK_PER_BIT(CLK_PER_BIT)) serial_rx (
    .clk(clk),
    .rst(n_rdy),
    .rx(rx),
    .data(rx_data),
    .new_data(new_rx_data)
);

serial_tx #(.CLK_PER_BIT(CLK_PER_BIT)) serial_tx (
    .clk(clk),
    .rst(n_rdy),
    .tx(tx_m),
    .block(tx_block),
    .busy(tx_busy),
    .data(tx_data),
    .new_data(new_tx_data)
);


always @(*) begin
    write_value_d = write_value_q;
    write_d = write_q;
    auto_inc_d = auto_inc_q;
    reg_addr_d = reg_addr_q;
    new_req_d = 1'b0;
    state_d = state_q;
    first_write_d = first_write_q;

    case (state_q)
        IDLE: begin
            if (frame_start)
                state_d = ADDR;
        end
        ADDR: begin
            if (spi_done) begin
                first_write_d = 1'b1;
                {write_d, auto_inc_d, reg_addr_d} = spi_dout;
                if (spi_dout[7]) begin
                    state_d = WRITE;
                end else begin
                    state_d = READ;
                    new_req_d = 1'b1;
                end
            end
        end
        WRITE: begin
            if (spi_done) begin
                first_write_d = 1'b0;
                if (auto_inc_q && !first_write_q)
                    reg_addr_d = reg_addr_q + 1'b1;
                new_req_d = 1'b1;
                write_value_d = spi_dout;
            end
        end
        READ: begin
            if (spi_done) begin
                if (auto_inc_q)
                    reg_addr_d = reg_addr_q + 1'b1;
                new_req_d = 1'b1;
            end
        end
        default: state_d = IDLE;
    endcase

    if (frame_end)
        state_d = IDLE;

end

always @(posedge clk) begin
    if (n_rdy) begin
        state_q <= IDLE;
    end else begin
        state_q <= state_d;
    end

    write_value_q <= write_value_d;
    write_q <= write_d;
    auto_inc_q <= auto_inc_d;
    reg_addr_q <= reg_addr_d;
    new_req_q <= new_req_d;
    first_write_q <= first_write_d;
end

endmodule
