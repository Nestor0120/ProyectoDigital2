	`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:26:18 09/19/2017
// Design Name:   ov2640
// Module Name:   /home/nestea/Documentos/Mojo-Hexapod/TestCam.v
// Project Name:  Mojo-Hexapod
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ov2640
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestCam;

	// Inputs
	reg clk;
	reg rst;
	reg cam_clk;
	reg pclk;
	reg href;
	reg vsync;
	reg [7:0] data;

	// Outputs
	wire scl;
	wire xclk;
	wire rst_cm;
	wire end_frame;
	wire end_line;
	wire new_pixel;
	wire [15:0] pixel;

	// Bidirs
	wire sda;

	// Instantiate the Unit Under Test (UUT)
	ov2640 uut (
		.clk(clk), 
		.rst(rst), 
		.cam_clk(cam_clk), 
		.scl(scl), 
		.sda(sda), 
		.xclk(xclk), 
		.pclk(pclk), 
		.href(href), 
		.vsync(vsync), 
		.data(data), 
		.rst_cm(rst_cm), 
		.end_frame(end_frame), 
		.end_line(end_line), 
		.new_pixel(new_pixel), 
		.pixel(pixel)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		rst = 1;
		cam_clk = 0;
		pclk = 0;
		href = 0;
		vsync = 0;
		data = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		clk = 0;
		
		#100; 
		
		clk =1;

	end
      
endmodule

