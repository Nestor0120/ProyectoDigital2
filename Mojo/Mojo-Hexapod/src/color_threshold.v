module color_threshold (
    input clk,
    input rst,

    // Image input signals
    input end_frame_in,
    input end_line_in,
    input new_pixel_in,
    input [15:0] pixel_in,

    // Data output
    output end_frame_out,
    output end_line_out,
    output new_pixel_out,
    output pixel_out
  );

  wire end_frame, end_line, new_pixel, pixel;

  pipeline #(.LENGTH(19), .WIDTH(2)) pixel_pipe (
    .clk(clk),
    .rst(rst),
    .enable(1'b1),
    .in({end_frame_in, end_line_in}),
    .out({end_frame, end_line})
  );

  pipeline #(.LENGTH(1), .WIDTH(4)) out_pipe (
    .clk(clk),
    .rst(rst),
    .enable(1'b1),
    .in({end_frame, end_line, new_pixel, pixel}),
    .out({end_frame_out, end_line_out, new_pixel_out, pixel_out})
  );

  wire [7:0] h,s;
  wire [5:0] v;

  rgb_to_hsv color_converter (
      .clk(clk),
      .rst(rst),
      .r(pixel_in[15:11]),
      .g(pixel_in[10:5]),
      .b(pixel_in[4:0]),
      .h(h),
      .s(s),
      .v(v),
      .in_valid(new_pixel_in),
      .out_valid(new_pixel)
    );

  assign pixel = (h < 5 || h > 245) && s > 115 && s < 210 && v > 30;

endmodule