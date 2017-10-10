`timescale 1ns / 1ps

module rgb_to_hsv_tb ();
    reg clk, rst;
    reg [4:0] r,b;
    reg [5:0] g;
    wire [7:0] h;
    wire [5:0] s,v;
    wire out_valid;
    reg in_valid;

    initial begin
        clk = 1'b0;
        rst = 1'b1;
        repeat(4) #5 clk = ~clk;
        rst = 1'b0;
        forever #5 clk = ~clk; // generate a clock
    end

    rgb_to_hsv DUT(
        .clk(clk),
        .rst(rst),
        .r(r),
        .g(g),
        .b(b),
        .h(h),
        .s(s),
        .v(v),
        .in_valid(in_valid),
        .out_valid(out_valid)
    );

    initial begin
        r = 0;
        g = 0;
        b = 0;
        in_valid = 0;
        @(negedge rst);
        repeat (3) @(posedge clk);
        r = 15;
        g = 0;
        b = 0;
        in_valid = 1;
        @(posedge clk);
        in_valid = 0;
        repeat(20) @(posedge clk);
        r = 15;
        g = 25;
        b = 0;
        in_valid = 1;
        @(posedge clk);
        in_valid = 0;
        repeat(20) @(posedge clk);
        r = 15;
        g = 0;
        b = 10;
        in_valid = 1;
        @(posedge clk);
        in_valid = 0;
        repeat(20) @(posedge clk);
        $finish();

    end

endmodule