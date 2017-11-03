module ov2640 (
    input clk,
    input rst,
//  input cam_clk,

// Main interface
    output reg  xclk,
    output pwdn, // pendiente uso
    output frex, // pendiente uso
    output rst_cm,


    input strobe,
    input pclk,
    input href,
    input vsync,
    input [7:0] data
 );

assign rst_cm = rst;
reg [2:0]cnt;
always@(posedge clk) 
begin
if (rst) 
	xclk=0;
	cnt=0;
else 
cnt =cnt +1;
 if (cnt==2) begin
	xclk= ~xclk;
	cnt=0
 end 
end

assign pwdn = 1'b1;
assign frex = 1'b1;

endmodule


