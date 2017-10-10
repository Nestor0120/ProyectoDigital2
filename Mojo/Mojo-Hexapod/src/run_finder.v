module run_finder (
    input clk,
    input rst,

    // Image input signals
    input end_frame_in,
    input end_line_in,
    input new_pixel,
    input pixel,

    // Run outputs
    output reg [10:0] run_start,
    output reg [10:0] run_end,
    output reg new_run,
    output reg end_line_out,
    output reg end_frame_out
  );

  reg [10:0] row_d, row_q, col_d, col_q;
  reg [10:0] start_d, start_q;
  reg found_start_d, found_start_q;

  always @* begin
    row_d = row_q;
    col_d = col_q;
    found_start_d = found_start_q;
    start_d = start_q;

    run_start = 10'bx;
    run_end = 10'bx;
    new_run = 1'b0;
    end_line_out = 1'b0;
    end_frame_out = 1'b0;

    if (new_pixel) begin
      col_d = col_q + 1'b1;
      if (found_start_q) begin
        if (!pixel) begin
          run_start = start_q;
          run_end = col_q;
          new_run = 1'b1;
          found_start_d = 1'b0;
        end
      end else begin
        if (pixel) begin
          found_start_d = 1'b1;
          start_d = col_q;
        end
      end
    end

    if (end_line_in) begin
      col_d = 10'd0;
      row_d = row_q + 1'b1;
      found_start_d = 1'b0;
      if (found_start_q) begin
        run_start = start_q;
        run_end = col_q;
        new_run = 1'b1;
      end
      end_line_out = 1'b1;
    end

    if (end_frame_in) begin
      col_d = 10'd0;
      row_d = 10'd0;
      end_frame_out = 1'b1;
      found_start_d = 1'b0;
    end
  end

  always @(posedge clk) begin
    if (rst) begin
      row_q <= 10'd0;
      col_q <= 10'd0;
      found_start_q <= 1'b0;
    end else begin
      row_q <= row_d;
      col_q <= col_d;
      found_start_q <= found_start_d;
    end
    start_q <= start_d;
  end

endmodule