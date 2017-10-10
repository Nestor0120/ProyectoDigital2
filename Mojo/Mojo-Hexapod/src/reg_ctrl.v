module reg_ctrl (
        input clk,
        input rst,
        input [5:0] reg_addr,
        input write,
        input new_req,
        input [7:0] write_value,
        output [7:0] read_value,

        // SDRAM interface
        output [22:0] addr,
        output rw,
        output [31:0] data_in,
        input [31:0] data_out,
        input busy,
        output in_valid,
        input out_valid,

        // Image capture interface
        input image_captured,
        input blob_done,
        output reg capture_image,

        // Servo interface
        output [4:0] servo_select,
        output [15:0] servo_position,
        output servo_update,

        output [3:0] flags,

        output blob_read
    );

assign blob_read = blob_done_q;

reg [7:0] read_value_d, read_value_q;

reg [22:0] ram_addr_d, ram_addr_q;
reg auto_inc_d, auto_inc_q;
reg [31:0] ram_data_d, ram_data_q;
reg ram_rw_d, ram_rw_q;
reg ram_in_valid_d, ram_in_valid_q;
reg inc_ram_addr_d, inc_ram_addr_q;
reg read_ram_d, read_ram_q;

reg blob_done_d, blob_done_q;

reg [4:0] servo_select_d, servo_select_q;
reg [15:0] servo_position_d, servo_position_q;
reg servo_update_d, servo_update_q;

assign read_value = read_value_q;
assign addr = ram_addr_q;
assign rw = ram_rw_q;
assign data_in = ram_data_q;
assign in_valid = ram_in_valid_q;

assign servo_select = servo_select_q;
assign servo_position = servo_position_q;
assign servo_update = servo_update_q;

assign flags = {3'b0, blob_done_q};

always @* begin
    read_value_d = read_value_q;
    ram_addr_d = ram_addr_q;
    auto_inc_d = auto_inc_q;
    ram_data_d = ram_data_q;
    read_ram_d = read_ram_q;
    ram_rw_d = ram_rw_q;
    ram_in_valid_d = 1'b0;
    capture_image = 1'b0;

    servo_select_d = servo_select_q;
    servo_position_d = servo_position_q;
    servo_update_d = 1'b0;

    blob_done_d = blob_done_q;

    if (inc_ram_addr_q)
        ram_addr_d = ram_addr_q + 1'b1;
    inc_ram_addr_d = 1'b0;

    if (read_ram_q && out_valid) begin
        read_ram_d = 1'b0;
        ram_data_d = data_out;
        read_value_d = data_out[7:0];
    end

    if (new_req) begin
        if (write)
            case (reg_addr)
                6'h00: capture_image = write_value[0];
                6'h01: ram_addr_d[7:0] = write_value;
                6'h02: ram_addr_d[15:8] = write_value;
                6'h03: {auto_inc_d, ram_addr_d[22:16]} = write_value;
                6'h04: ram_data_d[7:0] = write_value;
                6'h05: ram_data_d[15:8] = write_value;
                6'h06: ram_data_d[23:16] = write_value;
                6'h07: begin
                    ram_data_d[31:24] = write_value;
                    inc_ram_addr_d = auto_inc_q;
                    ram_rw_d = 1'b1; //write
                    ram_in_valid_d = 1'b1;
                end
                6'h08: servo_select_d = write_value[4:0];
                6'h09: servo_position_d[7:0] = write_value;
                6'h0A: begin
                    servo_position_d[15:8] = write_value;
                    servo_update_d = 1'b1;
                end
            endcase
        else //read
            case (reg_addr)
                6'h00: begin
                    read_value_d = {6'b0, blob_done_q, image_captured};
                    blob_done_d = 1'b0;
                end
                6'h01: read_value_d = ram_addr_d[7:0];
                6'h02: read_value_d = ram_addr_d[15:8];
                6'h03: read_value_d = {auto_inc_d, ram_addr_d[22:16]};
                6'h04: begin
                    read_value_d = ram_data_d[7:0];
                    read_ram_d = 1'b1;
                    inc_ram_addr_d = auto_inc_q;
                    ram_rw_d = 1'b0;
                    ram_in_valid_d = 1'b1;
                end
                6'h05: read_value_d = ram_data_d[15:8];
                6'h06: read_value_d = ram_data_d[23:16];
                6'h07: read_value_d = ram_data_d[31:24];
                6'h08: read_value_d = {3'b000, servo_select_q};
                6'h09: read_value_d = servo_position_q[7:0];
                6'h0A: read_value_d = servo_position_q[15:0];
            endcase
    end

    if (blob_done)
        blob_done_d = 1'b1;

end

always @(posedge clk) begin
    if (rst) begin
        blob_done_q <= 1'b0;
    end else begin
        blob_done_q <= blob_done_d;
    end
    ram_addr_q <= ram_addr_d;
    auto_inc_q <= auto_inc_d;
    ram_data_q <= ram_data_d;
    ram_rw_q <= ram_rw_d;
    ram_in_valid_q <= ram_in_valid_d;
    read_value_q <= read_value_d;
    inc_ram_addr_q <= inc_ram_addr_d;
    read_ram_q <= read_ram_d;
    servo_update_q <= servo_update_d;
    servo_position_q <= servo_position_d;
    servo_select_q <= servo_select_d;
end

endmodule