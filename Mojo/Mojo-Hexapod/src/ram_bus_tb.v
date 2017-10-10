module ram_bus_tb ();
  reg clk, rst;

  localparam DEVS = 3;

  initial begin
    clk = 1'b0;
    rst = 1'b1;
    repeat(4) #5 clk = ~clk;
    rst = 1'b0;
    forever #5 clk = ~clk; // generate a clock
  end

  wire [22:0] ram_addr;
  wire ram_rw;
  wire [31:0] ram_data_in;
  reg [31:0] ram_data_out;
  reg ram_busy;
  wire ram_in_valid;
  reg ram_out_valid;

  reg [23*DEVS-1:0] bus_addr;
  reg [DEVS-1:0] bus_rw;
  reg [32*DEVS-1:0] bus_data_in;
  wire [32*DEVS-1:0] bus_data_out;
  wire [DEVS-1:0] bus_busy;
  reg [DEVS-1:0] bus_in_valid;
  wire [DEVS-1:0] bus_out_valid;
  wire [DEVS-1:0] act;

  ram_bus #(.DEVICES(DEVS)) DUT (
      .clk(clk),
      .rst(rst),
      .addr(ram_addr),
      .rw(ram_rw),
      .data_in(ram_data_in),
      .data_out(ram_data_out),
      .busy(ram_busy),
      .in_valid(ram_in_valid),
      .out_valid(ram_out_valid),

      .bus_addr(bus_addr),
      .bus_rw(bus_rw),
      .bus_data_in(bus_data_in),
      .bus_data_out(bus_data_out),
      .bus_busy(bus_busy),
      .bus_in_valid(bus_in_valid),
      .bus_out_valid(bus_out_valid),
      .act(act)
    );

  always @* begin
    

    if (ram_in_valid) begin
      @(posedge clk);
      ram_busy = 1;
      if (ram_rw) begin
        repeat (5) @(posedge clk);
      end else begin
        repeat (9) @(posedge clk);
        ram_out_valid = 1;
        ram_data_out = 32'hABCDEF01;
      end
      ram_busy = 0;
    end
  end

  initial begin
    ram_data_out = 32'bx;
    ram_busy = 0;
    ram_out_valid = 0;

    bus_addr = 0;
    bus_rw = 0;
    bus_data_in = 0;
    bus_in_valid = 0;
    @(negedge rst);
    repeat(3) @(posedge clk);
    bus_in_valid = 3'b111;
    bus_data_in = {32'h5, 32'h4, 32'h3};
    bus_rw = {1'b1, 1'b1, 1'b1};
    bus_addr = {23'hA, 23'hB, 23'hC};
    @(posedge clk);
    bus_in_valid = 0;
    bus_data_in = 1'bx;
    bus_rw = 1'bx;
    bus_addr = 1'bx;
    repeat(50) @(posedge clk);
    $finish();
  end

endmodule