module servo_controller (
        input clk,
        input rst,
        input [4:0] select,
        input [15:0] position,
        input in_valid,
        output [23:0] pwm
    );

    wire [20:0] ctr;
    reg [23:0] update;

    //convert position to unsigned by inverting MSB
    wire [15:0] u_position = {~position[15], position[14:0]};
    counter #(.CTR_LEN(21)) servo_counter (
        .clk(clk),
        .rst(rst),
        .ctr(ctr));

    always @(*) begin
        update = 24'b0;
        if (in_valid) begin
            update[select] = 1'b1;
        end
    end

    servo #(.OFFSET(629)) s1   (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[0]),  .pwm(pwm[0]));
    servo #(.OFFSET(676)) s2   (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[1]),  .pwm(pwm[1]));
    servo #(.OFFSET(668)) s3   (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[2]),  .pwm(pwm[2]));
    servo #(.OFFSET(660)) s4   (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[3]),  .pwm(pwm[3]));
    servo #(.OFFSET(660)) s5   (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[4]),  .pwm(pwm[4]));
    servo #(.OFFSET(640)) s6   (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[5]),  .pwm(pwm[5]));
    servo #(.OFFSET(613)) s7   (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[6]),  .pwm(pwm[6]));
    servo #(.OFFSET(613)) s8   (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[7]),  .pwm(pwm[7]));

    servo #(.OFFSET(644)) s9   (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[8]),  .pwm(pwm[8]));
    servo #(.OFFSET(644)) s10  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[9]),  .pwm(pwm[9]));
    servo #(.OFFSET(636)) s11  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[10]), .pwm(pwm[10]));
    servo #(.OFFSET(644)) s12  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[11]), .pwm(pwm[11]));
    servo #(.OFFSET(652)) s13  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[12]), .pwm(pwm[12]));
    servo #(.OFFSET(652)) s14  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[13]), .pwm(pwm[13]));
    servo #(.OFFSET(621)) s15  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[14]), .pwm(pwm[14]));
    servo #(.OFFSET(660)) s16  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[15]), .pwm(pwm[15]));

    servo #(.OFFSET(660)) s17  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[16]), .pwm(pwm[16]));
    servo #(.OFFSET(715)) s18  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[17]), .pwm(pwm[17]));
    servo #(.OFFSET(624)) s19  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[18]), .pwm(pwm[18]));
    servo #(.OFFSET(605)) s20  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[19]), .pwm(pwm[19]));
    servo #(.OFFSET(676)) s21  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[20]), .pwm(pwm[20]));
    servo #(.OFFSET(711)) s22  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[21]), .pwm(pwm[21]));
    servo #(.OFFSET(668)) s23  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[22]), .pwm(pwm[22]));
    servo #(.OFFSET(676)) s24  (.clk(clk), .rst(rst), .ctr(ctr), .position(u_position), .update(update[23]), .pwm(pwm[23]));

endmodule