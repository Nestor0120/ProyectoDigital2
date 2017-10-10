module blob_detector_tb ();
  reg clk, rst;
  wire [22:0] addr;
  wire rw;
  wire [31:0] data_in;
  reg [31:0] data_out;
  reg busy;
  reg out_valid;
  wire in_valid;
  wire done;
  reg empty;
  reg [22:0] fifo_out;
  wire rd_en;

  initial begin
    clk = 1'b0;
    rst = 1'b1;
    repeat(4) #5 clk = ~clk;
    rst = 1'b0;
    forever #5 clk = ~clk; // generate a clock
  end

  blob_detector #(.MIN_SIZE(0),.RUNS_ADDR(0)) DUT (
      .clk(clk),
      .rst(rst),
      .addr(addr),
      .rw(rw),
      .data_in(data_in),
      .data_out(data_out),
      .busy(busy),
      .in_valid(in_valid),
      .out_valid(out_valid),
      .done(done),
      .empty(empty),
      .fifo_out(fifo_out),
      .rd_en(rd_en)
    );
/*
  image_rom_tb image_rom_tb (
      .addr(addr),
      .value(data_out)
    );
*/
  initial begin
    //data_out = 0;
    busy = 0;
    out_valid = 0;
  end

  initial begin
    empty = 1;
    @(negedge rst);
    repeat(3) @(posedge clk);
    empty = 0;
    @(posedge rd_en);
    fifo_out = {1'b0, 11'd5, 11'd15};
    @(posedge rd_en);
    fifo_out = {1'b1, 11'd0, 11'd0}; // new row
    @(posedge rd_en);
    fifo_out = {1'b0, 11'd5, 11'd15};
    @(posedge rd_en);
    fifo_out = {1'b1, 11'd0, 11'd0}; // new row
    @(posedge rd_en);
    fifo_out = {1'b0, 11'd5, 11'd15};
     @(posedge rd_en);
    fifo_out = {1'b1, 11'd0, 11'd0}; // new row
    @(posedge rd_en);
    fifo_out = {1'b1, 11'd0, 11'd1}; // end frame
    //@(posedge rd_en);
    @(posedge clk);
    empty = 1;
    repeat(20) @(posedge clk);
    $finish();
  end


endmodule