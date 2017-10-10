module counter #(parameter CTR_LEN = 16)(
    input clk,
    input rst,
    output [CTR_LEN-1:0] ctr
);

reg[CTR_LEN-1:0] ctr_d, ctr_q;

assign ctr = ctr_q;

always @(*) begin
    ctr_d = ctr_q + 1'b1;
end

always @(posedge clk) begin
    if (rst) begin
        ctr_q <= 1'b0;
    end else begin
        ctr_q <= ctr_d;
    end
end

endmodule