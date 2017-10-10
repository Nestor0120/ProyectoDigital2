module ov2640_TB;

reg clk;
reg reset;
ov2640 uut(.clk(clk),.rst(reset));

initial begin
reset<=0;
clk<=0;
end
always #(2) clk <= ~clk;

initial begin: TEST_CASE
     $dumpfile("ov2640_TB.vcd");
     $dumpvars(-1, uut);
     #(200) $finish;
   end

endmodule //

