module sccb_tb ();
    reg clk, rst, write;
    reg [7:0] addr, value;
    wire scl, ack, busy, sda;

    initial begin
        clk = 1'b0;
        rst = 1'b1;
        repeat(4) #5 clk = ~clk;
        rst = 1'b0;
        forever #5 clk = ~clk; // generate a clock
    end

    sccb #(.CLK_DIV_SIZE(4)) DUT  (
        .clk(clk),
        .rst(rst),
        .sda(sda),
        .scl(scl),
        .addr(addr),
        .value(value),
        .write(write),
        .ack(ack),
        .busy(busy)
    );

    initial begin
        write = 1'b0;
        addr = 8'h00;
        value = 8'h00;
        repeat(6) @(posedge clk);
        write = 1'b1;
        addr = 8'hAB;
        value = 8'hCD;
        @(posedge clk);
        write = 1'b0;
    end

endmodule