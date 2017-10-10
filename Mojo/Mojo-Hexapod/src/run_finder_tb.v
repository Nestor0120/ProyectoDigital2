module run_finder_tb();
  reg clk, rst;

  initial begin
    clk = 1'b0;
    rst = 1'b1;
    repeat(4) #5 clk = ~clk;
    rst = 1'b0;
    forever #5 clk = ~clk; // generate a clock
  end

  reg end_frame_in, end_line_in, new_pixel, pixel;
  wire [9:0] run_start, run_end;
  wire new_run, end_line_out, end_frame_out;

  run_finder run_finder (
      .clk(clk),
      .rst(rst),
      .end_frame_in(end_frame_in),
      .end_line_in(end_line_in),
      .new_pixel(new_pixel),
      .pixel(pixel),
      .run_start(run_start),
      .run_end(run_end),
      .new_run(new_run),
      .end_line_out(end_line_out),
      .end_frame_out(end_frame_out)
    );

  wire empty;
  reg rd_en;
  wire [9:0] fifo_start, fifo_end;
  wire cmd;

  run_fifo_manager run_fifo_manager (
      .clk(clk),
      .rst(rst),
      .run_start(run_start),
      .run_end(run_end),
      .new_run(new_run),
      .end_line(end_line_out),
      .end_frame(end_frame_out),
      .empty(empty),
      .dout({cmd, fifo_start, fifo_end}),
      .rd_en(rd_en)
    );

  always @* begin
    if (!empty) begin
      @(posedge clk);
      rd_en = 1;
      @(posedge clk);
      rd_en = 0;
    end
  end


  initial begin
    rd_en = 0;
    new_pixel = 0;
    end_frame_in = 0;
    end_line_in = 0;
    @(negedge rst);
    repeat(5) begin
      repeat(3) @(posedge clk);
      new_pixel = 1;
      pixel = 0;
      repeat(5) @(posedge clk);
      pixel = 1;
      repeat(14) @(posedge clk);
      pixel = 0;
      repeat(5) @(posedge clk);
      pixel = 1;
      repeat(5) @(posedge clk);
      pixel = 0;
      repeat(5) @(posedge clk);
      new_pixel = 0;
      repeat(5) @(posedge clk);
      end_line_in = 1;
      @(posedge clk);
      end_line_in = 0;
    end
    repeat(5) @(posedge clk);
    end_frame_in = 1;
    @(posedge clk);
    end_frame_in = 0;
    repeat(5) @(posedge clk);
    $finish();

  end

endmodule