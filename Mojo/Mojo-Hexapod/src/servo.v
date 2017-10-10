module servo #(
		parameter OFFSET = 660,
		parameter CTR_LEN = 21
	)(
		input clk,
		input rst,
		input [CTR_LEN-1:0] ctr,
		input [15:0] position,
		input update,
		output pwm
	);

	reg pwm_d, pwm_q;
	reg [15:0] buf_d, buf_q = 16'd32768;
	reg [15:0] position_d, position_q = 16'd32768;

	assign pwm = pwm_q;

	always @(*) begin
		position_d = position_q;
		buf_d = buf_q;

		if (update)
			buf_d = position;

		if (&ctr)
			position_d = buf_q;

		if (position_q + (OFFSET << 6) > ctr[CTR_LEN-1:CTR_LEN-20])
			pwm_d = 1'b1;
		else
			pwm_d = 1'b0;
	end

	always @(posedge clk) begin
		pwm_q <= pwm_d;
		position_q <= position_d;
		if (rst)
			buf_q <= 16'd32768;
		else
			buf_q <= buf_d;
	end

endmodule