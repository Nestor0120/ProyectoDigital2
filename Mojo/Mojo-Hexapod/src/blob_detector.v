module blob_detector #(
    parameter RUNS_ADDR = 0,
    parameter MIN_SIZE = 1000
  )(
    input clk,
    input rst,

    // SDRAM interface
    output reg [22:0] addr,
    output reg rw,
    output reg [31:0] data_in,
    input [31:0] data_out,
    input busy,
    output reg in_valid,
    input out_valid,

    // Frame capture interface
    input empty,
    input [22:0] fifo_out,
    output reg rd_en,
    output reg done,
    output [4:0] state
  );

  assign state = state_q;

  localparam STATE_SIZE = 5;
  localparam START = 0,
             INIT_RAM = 1,
             FIND_RUN = 2,
             FIND_OVERLAPPING_RUN = 3,
             UPDATE_PROPERTIES = 4,
             FIND_OVERLAPPING_OBJ = 5,
             CREATE_OBJ_1 = 6,
             CREATE_OBJ_2 = 7,
             UPDATE_OBJ_1 = 8,
             UPDATE_OBJ_2 = 9,
             MERGE_OBJ_1 = 10,
             MERGE_OBJ_2 = 11,
             REMOVE_FINISHED_OBJ = 12,
             UPDATE_FREE_LIST = 13,
             WRITE_MASS = 14,
             WRITE_X_BOUNDS = 15,
             WRITE_Y_BOUNDS = 16,
             WRITE_GX = 17,
             WRITE_GY = 18,
             WRITE_NUM_OBJ = 19;

  reg [STATE_SIZE-1:0] state_d, state_q;

  wire [10:0] ram_run_start, ram_run_end; 
  wire [9:0] ram_run_label;
  reg [9:0] ram_run_write_addr, ram_run_read_addr;
  reg ram_run_flip_d, ram_run_flip_q;
  reg ram_run_wea;

  reg [10:0] run_start, run_end;
  reg [9:0] run_label;

  run_ram run_ram (
    .clka(clk), // input clka
    .wea(ram_run_wea), // input [0 : 0] wea
    .addra({ram_run_flip_q, ram_run_write_addr}), // input [10 : 0] addra
    .dina({run_start, run_end, run_label}), // input [31 : 0] dina
    .clkb(clk), // input clkb
    .addrb({~ram_run_flip_q, ram_run_read_addr}), // input [10 : 0] addrb
    .doutb({ram_run_start, ram_run_end, ram_run_label}) // output [31 : 0] doutb
  );

  reg [10:0] next_obj_ptr_d, next_obj_ptr_q;

  reg [10:0] saved_obj_ptr_d, saved_obj_ptr_q;
  reg saved_feature_valid_d, saved_feature_valid_q;
  reg [20:0] saved_feature_mass_d;
  reg [10:0] saved_feature_min_x_d, saved_feature_max_x_d;
  reg [10:0] saved_feature_min_y_d, saved_feature_max_y_d;
  reg [29:0] saved_feature_grav_x_d, saved_feature_grav_y_d;
  reg [20:0] saved_feature_mass_q;
  reg [10:0] saved_feature_min_x_q, saved_feature_max_x_q;
  reg [10:0] saved_feature_min_y_q, saved_feature_max_y_q;
  reg [29:0] saved_feature_grav_x_q, saved_feature_grav_y_q;

  wire ram_feature_valid;
  wire ram_feature_updated;
  wire [10:0] ram_feature_ptr;
  wire [20:0] ram_feature_mass;
  wire [10:0] ram_feature_min_x, ram_feature_max_x;
  wire [10:0] ram_feature_min_y, ram_feature_max_y;
  wire [29:0] ram_feature_grav_x, ram_feature_grav_y;

  reg feature_valid;
  reg feature_updated;
  reg [10:0] feature_ptr;
  reg [20:0] feature_mass, obj_mass;
  reg [10:0] feature_min_x, feature_max_x;
  reg [10:0] feature_min_y, feature_max_y;
  reg [29:0] feature_grav_x, feature_grav_y;

  reg [9:0] ram_feature_write_addr, ram_feature_read_addr;
  reg ram_feature_wea;

  feature_ram feature_ram (
    .clka(clk), // input clka
    .wea(ram_feature_wea), // input [0 : 0] wea
    .addra(ram_feature_write_addr), // input [9 : 0] addra
    .dina({feature_valid, feature_updated,
           feature_ptr, feature_mass,
           feature_min_x, feature_max_x,
           feature_min_y, feature_max_y,
           feature_grav_x, feature_grav_y}), // input [137 : 0] dina
    .clkb(clk), // input clkb
    .addrb(ram_feature_read_addr), // input [9 : 0] addrb
    .doutb({ram_feature_valid, ram_feature_updated,
            ram_feature_ptr, ram_feature_mass,
            ram_feature_min_x, ram_feature_max_x,
            ram_feature_min_y, ram_feature_max_y,
            ram_feature_grav_x, ram_feature_grav_y}) // output [137 : 0] doutb
  );

  reg [9:0] run_ctr_d, run_ctr_q;
  reg [9:0] ctr_d, ctr_q;
  reg [10:0] free_prt_d, free_prt_q;
  reg [10:0] used_prt_d, used_prt_q;

  reg [10:0] start_d, start_q;
  reg [10:0] end_d, end_q;

  reg end_frame_d, end_frame_q;

  reg [10:0] row_d, row_q;

  reg [10:0] label_d, label_q;

  reg [17:0] obj_ctr_d, obj_ctr_q;

  reg p1, p2;

  reg frame_d, frame_q;

  always @* begin
    rd_en = 1'b0;

    addr = 23'bx;
    rw = 1'bx;
    data_in = 32'bx;
    in_valid = 1'b0;
    row_d = row_q;

    ram_run_write_addr = 9'bx;
    ram_run_read_addr = 9'bx;
    ram_run_wea = 1'b0;
    run_start = 10'bx;
    run_end = 10'bx;
    run_label = 9'bx;

    feature_valid = 1'bx;
    feature_updated = 1'bx;
    feature_ptr = 10'bx;
    feature_mass = 19'bx;
    feature_min_x = 10'bx;
    feature_max_x = 10'bx;
    feature_min_y = 10'bx;
    feature_max_y = 10'bx;
    feature_grav_x = 28'bx;
    feature_grav_y = 28'bx;
    ram_feature_write_addr = 9'bx;
    ram_feature_read_addr = 9'bx;
    ram_feature_wea = 1'b0;

    next_obj_ptr_d = next_obj_ptr_q;
    saved_obj_ptr_d = saved_obj_ptr_q;
    saved_feature_valid_d = saved_feature_valid_q;
    saved_feature_mass_d = saved_feature_mass_q;
    saved_feature_min_x_d = saved_feature_min_x_q;
    saved_feature_max_x_d = saved_feature_max_x_q;
    saved_feature_min_y_d = saved_feature_min_y_q;
    saved_feature_max_y_d = saved_feature_max_y_q;
    saved_feature_grav_x_d = saved_feature_grav_x_q;
    saved_feature_grav_y_d = saved_feature_grav_y_q;

    free_prt_d = free_prt_q;
    used_prt_d = used_prt_q;

    start_d = start_q;
    end_d = end_q;
    label_d = label_q;

    end_frame_d = end_frame_q;

    state_d = state_q;
    ram_run_flip_d = ram_run_flip_q;
    ctr_d = ctr_q;
    run_ctr_d = run_ctr_q;

    obj_ctr_d = obj_ctr_q;

    done = 1'b0;

    case (state_q)
      START: begin
        state_d = INIT_RAM;
        ctr_d = 9'd0;
        free_prt_d = 10'd0;
        used_prt_d = 11'h400; // none
        run_ctr_d = 9'd0;
        obj_ctr_d = 17'd0;
        ram_run_flip_d = 1'b0;
        row_d = 10'd0;
        end_frame_d = 1'b0;
      end
      INIT_RAM: begin
        ctr_d = ctr_q + 1'b1;
        feature_updated = 1'b0;
        feature_ptr = ctr_q + 1'b1;
        ram_feature_wea = 1'b1;
        ram_feature_write_addr = ctr_q;
        if (&ctr_q) begin
          state_d = FIND_RUN;
          row_d = 10'd0;

          // write the previous row to have no runs
          run_start = 11'h7FF;
          run_end = 11'h7FF;
          ram_run_write_addr = 9'd0;
          ram_run_wea = 1'b1;
          ram_run_flip_d = ~ram_run_flip_q;
        end
      end
      FIND_RUN: begin
        if (!empty) begin
          rd_en = 1'b1;
          if (fifo_out[22]) begin // event
            row_d = row_q + 1'b1;

            if (fifo_out[0]) begin // new frame
              row_d = 10'd0;
              end_frame_d = 1'b1;
            end 

            state_d = REMOVE_FINISHED_OBJ; // remove un-updated objects
            ram_feature_read_addr = used_prt_q; // read used objects
            label_d = used_prt_q;
            saved_obj_ptr_d = 11'h400;

          end else begin // run
            start_d = fifo_out[21:11];
            end_d = fifo_out[10:0];
            label_d = 11'h400;
            state_d = FIND_OVERLAPPING_RUN;
            ram_run_read_addr = 9'd0;
            ctr_d = 9'd1;
          end
        end
      end
      FIND_OVERLAPPING_RUN: begin
        ram_run_read_addr = ctr_q;
        ctr_d = ctr_q + 1'b1;
        if ((ram_run_start == 11'h7FF) || (ram_run_start > end_q + 1'b1)) begin // no more runs
          if (label_q[10]) begin
            // create new object
            label_d = free_prt_q;
            state_d = CREATE_OBJ_1;
            ram_feature_read_addr = free_prt_q;

            // write run to RAM
            run_label = free_prt_q; 
            run_start = start_q;
            run_end = end_q;
            ram_run_write_addr = run_ctr_q;
            run_ctr_d = run_ctr_q + 1'b1;
            ram_run_wea = 1'b1;
          end else begin 
            state_d = FIND_RUN;
          end
        end else begin // valid run
          // check for overlap
          if ((((ram_run_start + 1'b1) >= start_q) && (ram_run_start <= (end_q + 1'b1))) ||
              (((ram_run_end   + 1'b1) >= start_q) && (ram_run_end   <= (end_q + 1'b1)))) begin
            if (label_q[10]) begin // no label
              label_d = {1'b0, ram_run_label}; // set label

              // write run to RAM
              run_label = ram_run_label; 
              run_start = start_q;
              run_end = end_q;
              ram_run_write_addr = run_ctr_q;
              run_ctr_d = run_ctr_q + 1'b1;
              ram_run_wea = 1'b1;

              // keep ctr the same to not miss a run
              ctr_d = ctr_q;

              // update features
              ram_feature_read_addr = ram_run_label;
              state_d = UPDATE_OBJ_1;
            end else begin // already have label
              if (label_q[9:0] != ram_run_label) begin // objects are different
                // keep ctr the same to not miss a run
                ctr_d = ctr_q;

                // merge objects
                ram_feature_read_addr = ram_run_label;
                saved_obj_ptr_d = ram_run_label;
                state_d = MERGE_OBJ_1;
              end
            end
          end
        end
      end
      CREATE_OBJ_1: begin
        state_d = CREATE_OBJ_2;
        ram_feature_read_addr = free_prt_q;

        // write new object
        obj_mass = end_q - start_q + 1'b1;
        saved_obj_ptr_d = used_prt_q;
        saved_feature_mass_d = obj_mass;
        saved_feature_max_y_d = row_q;
        saved_feature_min_y_d = row_q;
        saved_feature_min_x_d = start_q;
        saved_feature_max_x_d = end_q;
        saved_feature_grav_x_d = end_q + start_q;
        saved_feature_grav_y_d = row_q;
      end
      CREATE_OBJ_2: begin
        state_d = FIND_RUN;

        // write new object
        feature_updated = 1'b1;
        feature_valid = 1'b1;
        feature_ptr = saved_obj_ptr_q;
        feature_mass = saved_feature_mass_q;
        feature_max_y = saved_feature_max_y_q;
        feature_min_y = saved_feature_min_y_q;
        feature_min_x = saved_feature_min_x_q;
        feature_max_x = saved_feature_max_x_q;
        feature_grav_x = (saved_feature_mass_q[10:0] * saved_feature_grav_x_q[11:0]) >> 1;
        feature_grav_y = saved_feature_mass_q[10:0] * saved_feature_grav_y_q[10:0];
        ram_feature_wea = 1'b1;
        // write to beginning of free list
        ram_feature_write_addr = free_prt_q;
        // point to the next free spot
        free_prt_d = ram_feature_ptr;
        // point used prt to new object
        used_prt_d = free_prt_q;
      end
      UPDATE_OBJ_1: begin
        if (ram_feature_valid) begin // valid object
          ram_feature_read_addr = label_q[9:0];
          state_d = UPDATE_OBJ_2;
          // write new object
          obj_mass = end_q - start_q + 1'b1;
          saved_obj_ptr_d = ram_feature_ptr;
          saved_feature_mass_d = obj_mass;
          saved_feature_max_y_d = row_q;
          saved_feature_min_y_d = ram_feature_min_y;
          saved_feature_min_x_d = start_q < ram_feature_min_x ? start_q : ram_feature_min_x;
          saved_feature_max_x_d = end_q > ram_feature_max_x ? end_q : ram_feature_max_x;
          saved_feature_grav_x_d = end_q + start_q;
          saved_feature_grav_y_d = row_q;
          
        end else begin // pointer object
          label_d = ram_feature_min_x;
          ram_feature_read_addr = ram_feature_min_x;
          // update prt object
          feature_valid = 1'b0;
          feature_updated = 1'b1;
          feature_ptr = ram_feature_ptr;
          feature_min_x = ram_feature_min_x;
          ram_feature_write_addr = label_q[9:0];
          ram_feature_wea = 1'b1;
        end
      end
      UPDATE_OBJ_2: begin
        feature_updated = 1'b1;
        feature_valid = 1'b1;
        feature_ptr = saved_obj_ptr_q;
        feature_mass = saved_feature_mass_q + ram_feature_mass;
        feature_max_y = saved_feature_max_y_q;
        feature_min_y = saved_feature_min_y_q;
        feature_max_x = saved_feature_max_x_q;
        feature_min_x = saved_feature_min_x_q;
        feature_grav_x = ram_feature_grav_x + ((saved_feature_mass_q[10:0] * saved_feature_grav_x_q[11:0]) >> 1);
        feature_grav_y = ram_feature_grav_y + saved_feature_mass_q[10:0] * saved_feature_grav_y_q[10:0];
        ram_feature_wea = 1'b1;
        ram_feature_write_addr = label_q[9:0];
        ram_run_read_addr = ctr_q;
        ctr_d = ctr_q + 1'b1;
        state_d = FIND_OVERLAPPING_RUN;
      end
      MERGE_OBJ_1: begin
        if (ram_feature_valid) begin
          // save properties of object
          saved_feature_min_x_d = ram_feature_min_x;
          saved_feature_max_x_d = ram_feature_max_x;
          saved_feature_min_y_d = ram_feature_min_y;
          saved_feature_max_y_d = ram_feature_max_y;
          saved_feature_mass_d = ram_feature_mass;
          saved_feature_grav_x_d = ram_feature_grav_x;
          saved_feature_grav_y_d = ram_feature_grav_y;
          // update merging object to point to main object
          feature_valid = 1'b0;
          feature_updated = 1'b1;
          feature_ptr = ram_feature_ptr;
          feature_min_x = label_q; // min x is pointer to new object
          ram_feature_write_addr = saved_obj_ptr_q;
          ram_feature_wea = 1'b1;
          // read main object to merge properties
          ram_feature_read_addr = label_q[9:0];
          state_d = MERGE_OBJ_2;
        end else begin
          if (label_q[9:0] != ram_feature_min_x) begin
            saved_obj_ptr_d = ram_feature_min_x;
            ram_feature_read_addr = ram_feature_min_x;
            // update prt object
            feature_valid = 1'b0;
            feature_updated = 1'b1;
            feature_ptr = ram_feature_ptr;
            feature_min_x = label_q;
            ram_feature_write_addr = saved_obj_ptr_q;
            ram_feature_wea = 1'b1;
          end else begin
            ram_run_read_addr = ctr_q;
            ctr_d = ctr_q + 1'b1;
            state_d = FIND_OVERLAPPING_RUN;
          end
        end
      end
      MERGE_OBJ_2: begin
        ram_run_read_addr = ctr_q;
        ctr_d = ctr_q + 1'b1;
        state_d = FIND_OVERLAPPING_RUN;
        // write new object
        feature_updated = 1'b1;
        feature_valid = 1'b1;
        feature_ptr = ram_feature_ptr;
        feature_mass = ram_feature_mass + saved_feature_mass_q;
        feature_max_y = ram_feature_max_y > saved_feature_max_y_q ? ram_feature_max_y : saved_feature_max_y_q;
        feature_min_y = ram_feature_min_y < saved_feature_min_y_q ? ram_feature_min_y : saved_feature_min_y_q;
        feature_max_x = ram_feature_max_x > saved_feature_max_x_q ? ram_feature_max_x : saved_feature_max_x_q;
        feature_min_x = ram_feature_min_x < saved_feature_min_x_q ? ram_feature_min_x : saved_feature_min_x_q;
        feature_grav_x = ram_feature_grav_x + saved_feature_grav_x_q;
        feature_grav_y = ram_feature_grav_y + saved_feature_grav_y_q;
        ram_feature_wea = 1'b1;
        ram_feature_write_addr = label_q[9:0];
      end
      REMOVE_FINISHED_OBJ: begin
        if (label_q[10]) begin // no more objects
          state_d = FIND_RUN;
          if (end_frame_q)
            state_d = WRITE_NUM_OBJ;

          // write end run to RAM
          run_start = 11'h7FF;
          run_end = 11'h7FF;
          ram_run_write_addr = run_ctr_q;
          run_ctr_d = 9'd0;
          ram_run_wea = 1'b1;
          // flip rows
          ram_run_flip_d = ~ram_run_flip_q;
        end else begin
          if (ram_feature_updated && !end_frame_q) begin // object not done
            // save properties of object
            saved_obj_ptr_d = label_q; // pointer to prev used obj
            saved_feature_valid_d = ram_feature_valid;
            saved_feature_min_x_d = ram_feature_min_x;
            saved_feature_max_x_d = ram_feature_max_x;
            saved_feature_min_y_d = ram_feature_min_y;
            saved_feature_max_y_d = ram_feature_max_y;
            saved_feature_mass_d = ram_feature_mass;
            saved_feature_grav_x_d = ram_feature_grav_x;
            saved_feature_grav_y_d = ram_feature_grav_y;
            // update object
            feature_updated = 1'b0;
            feature_valid = ram_feature_valid;
            feature_ptr = ram_feature_ptr;
            feature_mass = ram_feature_mass;
            feature_max_y = ram_feature_max_y;
            feature_min_y = ram_feature_min_y;
            feature_min_x = ram_feature_min_x;
            feature_max_x = ram_feature_max_x;
            feature_grav_x = ram_feature_grav_x;
            feature_grav_y = ram_feature_grav_y;
            ram_feature_write_addr = label_q[9:0];
            ram_feature_wea = 1'b1;
            // prepare next read
            label_d = ram_feature_ptr;
            ram_feature_read_addr = ram_feature_ptr[9:0];
          end else begin // remove object
            if (saved_obj_ptr_q[10]) begin // removing first object in chain
              used_prt_d = ram_feature_ptr;
            end else begin
              // update previous object to point to next object
              feature_updated = 1'b0;
              feature_valid = saved_feature_valid_q;
              feature_ptr = ram_feature_ptr;
              feature_mass = saved_feature_mass_q;
              feature_max_y = saved_feature_max_y_q;
              feature_min_y = saved_feature_min_y_q;
              feature_min_x = saved_feature_min_x_q;
              feature_max_x = saved_feature_max_x_q;
              feature_grav_x = saved_feature_grav_x_q;
              feature_grav_y = saved_feature_grav_y_q;
              ram_feature_write_addr = saved_obj_ptr_q[9:0];
              ram_feature_wea = 1'b1;
            end

            next_obj_ptr_d = ram_feature_ptr; // pointer to next used obj
            if (ram_feature_valid && ram_feature_mass > MIN_SIZE) begin
              state_d = WRITE_MASS;
              ram_feature_read_addr = label_q[9:0];
            end else begin
              state_d = UPDATE_FREE_LIST;
            end
          end
        end
      end
      UPDATE_FREE_LIST: begin
        feature_ptr = free_prt_q;
        ram_feature_write_addr = label_q[9:0];
        ram_feature_wea = 1'b1;
        free_prt_d = label_q[9:0];
        label_d = next_obj_ptr_q;
        state_d = REMOVE_FINISHED_OBJ;
        ram_feature_read_addr = next_obj_ptr_q[9:0];
      end
      WRITE_MASS: begin
        ram_feature_read_addr = label_q[9:0];
        if (!busy) begin
          addr = (obj_ctr_q << 2) + obj_ctr_q + RUNS_ADDR + 1;
          rw = 1'b1; // write
          data_in = ram_feature_mass;
          in_valid = 1'b1;
          state_d = WRITE_X_BOUNDS;
        end
      end
      WRITE_X_BOUNDS: begin
        ram_feature_read_addr = label_q[9:0];
        if (!busy) begin
          addr = (obj_ctr_q << 2) + obj_ctr_q + 1 + RUNS_ADDR + 1;
          rw = 1'b1; // write
          data_in = {5'd0, ram_feature_max_x, 5'd0, ram_feature_min_x};
          in_valid = 1'b1;
          state_d = WRITE_Y_BOUNDS;
        end
      end
      WRITE_Y_BOUNDS: begin
        ram_feature_read_addr = label_q[9:0];
        if (!busy) begin
          addr = (obj_ctr_q << 2) + obj_ctr_q + 2 + RUNS_ADDR + 1;
          rw = 1'b1; // write
          data_in = {5'd0, ram_feature_max_y, 5'd0, ram_feature_min_y};
          in_valid = 1'b1;
          state_d = WRITE_GX;
        end
      end
      WRITE_GX: begin
        ram_feature_read_addr = label_q[9:0];
        if (!busy) begin
          addr = (obj_ctr_q << 2) + obj_ctr_q + 3 + RUNS_ADDR + 1;
          rw = 1'b1; // write
          data_in = ram_feature_grav_x;
          in_valid = 1'b1;
          state_d = WRITE_GY;
        end
      end
      WRITE_GY: begin
        ram_feature_read_addr = label_q[9:0];
        if (!busy) begin
          addr = (obj_ctr_q << 2) + obj_ctr_q + 4 + RUNS_ADDR + 1;
          rw = 1'b1; // write
          data_in = ram_feature_grav_y;
          in_valid = 1'b1;
          state_d = UPDATE_FREE_LIST;
          obj_ctr_d = obj_ctr_q + 1'b1;
        end
      end
      WRITE_NUM_OBJ: begin
        if (!busy) begin
          addr = RUNS_ADDR;
          rw = 1'b1; // write
          data_in = obj_ctr_q;
          in_valid = 1'b1;
          state_d = START;
          done = 1'b1;
        end
      end
    endcase
  end

  always @(posedge clk) begin
    if (rst) begin
      state_q <= START;
    end else begin
      state_q <= state_d;
    end

    ram_run_flip_q <= ram_run_flip_d;
    ctr_q <= ctr_d;
    run_ctr_q <= run_ctr_d;
    free_prt_q <= free_prt_d;
    used_prt_q <= used_prt_d;
    start_q <= start_d;
    end_q <= end_d;
    label_q <= label_d;
    obj_ctr_q <= obj_ctr_d;
    end_frame_q <= end_frame_d;
    row_q <= row_d;

    next_obj_ptr_q <= next_obj_ptr_d;
    saved_obj_ptr_q <= saved_obj_ptr_d;
    saved_feature_valid_q <= saved_feature_valid_d;
    saved_feature_mass_q <= saved_feature_mass_d;
    saved_feature_min_x_q <= saved_feature_min_x_d;
    saved_feature_max_x_q <= saved_feature_max_x_d;
    saved_feature_min_y_q <= saved_feature_min_y_d;
    saved_feature_max_y_q <= saved_feature_max_y_d;
    saved_feature_grav_x_q <= saved_feature_grav_x_d;
    saved_feature_grav_y_q <= saved_feature_grav_y_d;
  end

endmodule

