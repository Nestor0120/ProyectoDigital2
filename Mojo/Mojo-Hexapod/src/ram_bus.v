module ram_bus #(
    parameter DEVICES = 2
  )(
    input clk,
    input rst,

    // to RAM controller
    output reg [22:0] addr,
    output reg rw,
    output reg [31:0] data_in,
    input [31:0] data_out,
    input busy,
    output reg in_valid,
    input out_valid,

    // bus interface
    input [23*DEVICES-1:0] bus_addr,
    input [DEVICES-1:0] bus_rw,
    input [32*DEVICES-1:0] bus_data_in,
    output reg [32*DEVICES-1:0] bus_data_out,
    output [DEVICES-1:0] bus_busy,
    input [DEVICES-1:0] bus_in_valid,
    output reg [DEVICES-1:0] bus_out_valid,
    output [DEVICES-1:0] act
  );

  localparam STATE_SIZE = 1;
  localparam CMD = 0,
         READ = 1;

  reg [STATE_SIZE-1:0] state_d, state_q;

  reg [DEVICES-1:0] active_device_d, active_device_q;

  reg [22:0] bus_addr_d [DEVICES-1:0], bus_addr_q [DEVICES-1:0];
  reg [DEVICES-1:0] bus_rw_d, bus_rw_q;
  reg [31:0] bus_data_in_d [DEVICES-1:0], bus_data_in_q [DEVICES-1:0];
  reg [DEVICES-1:0] bus_busy_d, bus_busy_q;

  reg [22:0] bus_addr_r [DEVICES-1:0];
  reg [31:0] bus_data_in_r [DEVICES-1:0], bus_data_out_r [DEVICES-1:0];

  assign bus_busy = bus_busy_q;
  assign act = active_device_q;

  integer i;

  always @* begin
    addr = 23'dx;
    rw = 1'bx;
    data_in = 32'bx;
    in_valid = 1'b0;

    state_d = state_q;
    active_device_d = active_device_q;
    bus_rw_d = bus_rw_q;
    bus_busy_d = bus_busy_q;
    for (i = DEVICES-1; i >= 0; i=i-1) begin
      bus_addr_r[i] = bus_addr[i*23+:23];
      bus_data_in_r[i] = bus_data_in[i*32+:32];
      bus_data_out[i*32+:32] = bus_data_out_r[i];

      bus_data_out_r[i] = 32'bx;
      bus_out_valid[i] = 1'b0;
      bus_addr_d[i] = bus_addr_q[i];
      bus_data_in_d[i] = bus_data_in_q[i];

      // capture input
      if (!bus_busy_q[i] && bus_in_valid[i]) begin
        bus_busy_d[i] = 1'b1;
        bus_addr_d[i] = bus_addr_r[i];
        bus_data_in_d[i] = bus_data_in_r[i];
        bus_rw_d[i] = bus_rw[i];
      end

    end
    for (i = DEVICES-1; i >= 0; i=i-1) begin

      // if no active devices, service busy device
      // device 0 has the highest priority
      if (!(|active_device_q)) begin
        if (bus_busy_q[i]) begin
          active_device_d = 1'd0;
          active_device_d[i] = 1'b1;
        end
      end

    end
    for (i = DEVICES-1; i >= 0; i=i-1) begin

      if (active_device_q[i] || active_device_d[i]) begin
        case (state_q)
          CMD: begin
            if (!busy) begin
              in_valid = 1'b1;
              addr = bus_addr_q[i];
              rw = bus_rw_q[i];
              data_in = bus_data_in_q[i];
              bus_busy_d[i] = 1'b0;
              if (!bus_rw_q[i]) begin
                state_d = READ;
              end else begin
                active_device_d = 1'd0;
              end
            end
          end
          READ: begin
            if (out_valid) begin
              bus_data_out_r[i] = data_out;
              bus_out_valid[i] = 1'b1;
              active_device_d = 1'b0;
              state_d = CMD;
            end
          end
          default: state_d = CMD;
        endcase
      end
    end


  end

  always @(posedge clk) begin
    if (rst) begin
      state_q <= CMD;
      bus_busy_q <= 1'b0;
      active_device_q <= 1'b0;
    end else begin
      state_q <= state_d;
      bus_busy_q <= bus_busy_d;
      active_device_q <= active_device_d;
    end

    
    for (i = 0; i < DEVICES; i=i+1) begin
      bus_addr_q[i] <= bus_addr_d[i];
      bus_data_in_q[i] <= bus_data_in_d[i];
    end
    bus_rw_q <= bus_rw_d;
    
  end
endmodule