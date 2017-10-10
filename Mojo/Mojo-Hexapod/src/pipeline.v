module pipeline #(
  parameter LENGTH = 1,
  parameter WIDTH = 1
)(
  input clk,
  input rst,
  input enable,
  input [WIDTH-1:0] in,
  output [WIDTH-1:0] out
);

reg [WIDTH-1:0] pipe_d [LENGTH-1:0];
reg [WIDTH-1:0] pipe_q [LENGTH-1:0];

integer i;

assign out = pipe_q[LENGTH-1];

always @(*) begin
  if (enable)
    pipe_d[0] = in;
  else 
    pipe_d[0] = pipe_q[0];
    
  for (i = 1; i < LENGTH; i = i + 1) begin
    if (enable)
      pipe_d[i] = pipe_q[i-1];
    else
      pipe_d[i] = pipe_q[i];
  end
end

always @(posedge clk) begin
  for (i = 0; i < LENGTH; i = i + 1) begin
    if (rst) 
      pipe_q[i] <= 1'd0;
    else
      pipe_q[i] <= pipe_d[i];
  end
end

endmodule