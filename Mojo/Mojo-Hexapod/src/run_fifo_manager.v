module run_fifo_manager (
    input clk,
    input rst,

    // Run input
    input [10:0] run_start,
    input [10:0] run_end,
    input new_run,
    input end_line,
    input end_frame,

    // Blob output
    output empty,
    output [22:0] dout,
    input rd_en
  );

  wire full;
  reg wr_en;
  reg [22:0] din;

  reg end_frame_d, end_frame_q;
  reg end_line_d, end_line_q;

  run_fifo run_fifo (
    .clk(clk), // input clk
    .srst(rst), // input srst
    .din(din), // input [20 : 0] din
    .wr_en(wr_en), // input wr_en
    .rd_en(rd_en), // input rd_en
    .dout(dout), // output [20 : 0] dout
    .full(full), // output full
    .empty(empty) // output empty
  );

  always @* begin
    wr_en = 1'b0;
    din = 21'bx;
    end_frame_d = end_frame_q;
    end_line_d = end_line_q;

    if (new_run) begin
      din = {1'b0, run_start, run_end};
      wr_en = 1'b1;
      if (end_line)
        end_line_d = 1'b1;
      if (end_frame)
        end_frame_d = 1'b1;
    end else if (end_line || end_line_q) begin
      din = {1'b1, 22'd0};
      wr_en = 1'b1;
      end_line_d = 1'b0;
      if (end_frame)
        end_frame_d = 1'b1;
    end else if (end_frame || end_frame_q) begin
      din = {1'b1, 22'd1};
      wr_en = 1'b1;
      end_frame_d = 1'b0;
    end
  end

  always @(posedge clk) begin
    if (rst) begin
      end_frame_q <= 1'b0;
      end_line_q <= 1'b0;
    end else begin
      end_frame_q <= end_frame_d;
      end_line_q <= end_line_d;
    end
  end

endmodule