//-------------------------------------------------------------
//  top_core
//  Five-stage RISC-V pipeline with hazard-safe registers
//
//  Stage order: IF → ID → EX → MEM → WB
//  This module connects all stage modules and pipeline registers.
//-------------------------------------------------------------
`default_nettype none
import mem_interface_pkg::mem_req_t;
import mem_interface_pkg::mem_resp_t;

module top_core (
  input  logic clk,
  input  logic rst
);

  // =========================================================
  //  IF → ID Pipeline Signals
  // =========================================================
  logic [31:0] if_pc, if_instr;
  logic [31:0] id_pc, id_instr;

  // =========================================================
  //  ID → EX Pipeline Signals
  // =========================================================
  logic [4:0]  id_rs1, id_rs2, id_rd;
  logic [31:0] id_rs1_val, id_rs2_val;
  logic [31:0] id_imm;
  logic [3:0]  id_alu_op;
  logic        id_mem_read, id_mem_write, id_reg_write, id_wb_sel_mem;

  logic [31:0] ex_pc, ex_rs1_val, ex_rs2_val, ex_imm;
  logic [4:0]  ex_rs1, ex_rs2, ex_rd;
  logic [3:0]  ex_alu_op;
  logic        ex_mem_read, ex_mem_write, ex_reg_write, ex_wb_sel_mem;

  // =========================================================
  //  EX → MEM Pipeline Signals
  // =========================================================
  logic [31:0] ex_alu_res;
  logic [31:0] mem_alu_res, mem_rs2_fwd;
  logic [4:0]  mem_rd;
  logic        mem_mem_read, mem_mem_write, mem_reg_write, mem_wb_sel_mem;

  // =========================================================
  //  MEM → WB Pipeline Signals
  // =========================================================
  logic [31:0] mem_rdata, mem_alu_result;
  logic [31:0] wb_mem_rdata, wb_alu_result, wb_data_mux;
  logic [4:0]  wb_rd;
  logic        wb_reg_write, wb_sel_mem;

  // =========================================================
  //  Control (stall/flush signals - placeholder for now)
  // =========================================================
  logic stall_if   = 1'b0;
  logic flush_if   = 1'b0;
  logic stall_id   = 1'b0;
  logic flush_id   = 1'b0;
  logic stall_ex   = 1'b0;
  logic stall_mem  = 1'b0;
  logic flush_ex   = 1'b0;
  logic flush_mem  = 1'b0;

  // =========================================================
  //  IF Stage
  // =========================================================
  IF_Stage if_stage (
    .clk       (clk),
    .rst       (rst),
    .pc_o      (if_pc),
    .instr_o   (if_instr)
  );

  // ---------------- IF/ID Register ----------------
  IF_ID_Reg if_id (
    .clk       (clk),
    .rst       (rst),
    .en        (~stall_if),
    .flush     (flush_if),
    .pc_i      (if_pc),
    .instr_i   (if_instr),
    .pc_o      (id_pc),
    .instr_o   (id_instr)
  );

  // =========================================================
  //  ID Stage
  // =========================================================
  ID_Stage id_stage (
    .clk         (clk),
    .rst         (rst),
    .instr_i     (id_instr),
    .pc_i        (id_pc),
    .rs1_o       (id_rs1),
    .rs2_o       (id_rs2),
    .rd_o        (id_rd),
    .rs1_val_o   (id_rs1_val),
    .rs2_val_o   (id_rs2_val),
    .alu_op_o    (id_alu_op)
  );

  // Control placeholders (to be replaced by Control_Unit)
  assign id_mem_read   = 1'b0;
  assign id_mem_write  = 1'b0;
  assign id_reg_write  = 1'b1;  // assume always write for now
  assign id_wb_sel_mem = 1'b0;  // select ALU result
  assign id_imm        = 32'h0;

  // ---------------- ID/EX Register ----------------
  ID_EX_Reg id_ex (
    .clk              (clk),
    .rst              (rst),
    .en               (~stall_id),
    .flush            (flush_id),
    .pc_i             (id_pc),
    .rs1_val_i        (id_rs1_val),
    .rs2_val_i        (id_rs2_val),
    .imm_i            (id_imm),
    .rs1_i            (id_rs1),
    .rs2_i            (id_rs2),
    .rd_i             (id_rd),
    .opcode_i         (id_instr[6:0]),
    .funct3_i         (id_instr[14:12]),
    .funct7_i         (id_instr[31:25]),
    .alu_src_b_imm_i  (1'b0),
    .alu_op_i         (id_alu_op),
    .mem_read_i       (id_mem_read),
    .mem_write_i      (id_mem_write),
    .byte_en_i        (4'b1111),
    .reg_write_i      (id_reg_write),
    .wb_sel_mem_i     (id_wb_sel_mem),
    .branch_i         (1'b0),
    .jal_i            (1'b0),
    .jalr_i           (1'b0),
    .pc_o             (ex_pc),
    .rs1_val_o        (ex_rs1_val),
    .rs2_val_o        (ex_rs2_val),
    .imm_o            (ex_imm),
    .rs1_o            (ex_rs1),
    .rs2_o            (ex_rs2),
    .rd_o             (ex_rd),
    .opcode_o         (),
    .funct3_o         (),
    .funct7_o         (),
    .alu_src_b_imm_o  (),
    .alu_op_o         (ex_alu_op),
    .mem_read_o       (ex_mem_read),
    .mem_write_o      (ex_mem_write),
    .byte_en_o        (),
    .reg_write_o      (ex_reg_write),
    .wb_sel_mem_o     (ex_wb_sel_mem),
    .branch_o         (),
    .jal_o            (),
    .jalr_o           ()
  );

  // =========================================================
  //  EX Stage
  // =========================================================
  EX_Stage ex_stage_i (
    .clk            (clk),
    .rst            (rst),
    .rs1_val_i      (ex_rs1_val),
    .rs2_val_i      (ex_rs2_val),
    .alu_op_i       (ex_alu_op),
    .alu_result_o   (ex_alu_res)
  );

  // ---------------- EX/MEM Register ----------------
  EX_MEM_Reg ex_mem (
    .clk           (clk),
    .rst           (rst),
    .en            (~stall_ex),
    .flush         (flush_ex),
    .alu_res_i     (ex_alu_res),
    .rs2_fwd_i     (ex_rs2_val),
    .rd_i          (ex_rd),
    .mem_read_i    (ex_mem_read),
    .mem_write_i   (ex_mem_write),
    .byte_en_i     (4'b1111),
    .reg_write_i   (ex_reg_write),
    .wb_sel_mem_i  (ex_wb_sel_mem),
    .alu_res_o     (mem_alu_res),
    .rs2_fwd_o     (mem_rs2_fwd),
    .rd_o          (mem_rd),
    .mem_read_o    (mem_mem_read),
    .mem_write_o   (mem_mem_write),
    .byte_en_o     (),
    .reg_write_o   (mem_reg_write),
    .wb_sel_mem_o  (mem_wb_sel_mem)
  );

  // =========================================================
  //  MEM Stage
  // =========================================================
  mem_req_t  d_req_sig;
  mem_resp_t d_resp_sig;

  MEM_Stage mem_stage_i (
    .d_req_i (d_req_sig),
    .d_resp_o(d_resp_sig)
  );

  Data_Memory data_mem_i (
    .clk (clk),
    .rst (rst),
    .req (d_req_sig),
    .resp(d_resp_sig)
  );

  assign mem_rdata = d_resp_sig.rdata;

  // ---------------- MEM/WB Register ----------------
  MEM_WB_Reg mem_wb (
    .clk           (clk),
    .rst           (rst),
    .en            (~stall_mem),
    .flush         (flush_mem),
    .mem_rdata_i   (mem_rdata),
    .alu_res_i     (mem_alu_res),
    .rd_i          (mem_rd),
    .reg_write_i   (mem_reg_write),
    .wb_sel_mem_i  (mem_wb_sel_mem),
    .mem_rdata_o   (wb_mem_rdata),
    .alu_res_o     (wb_alu_result),
    .rd_o          (wb_rd),
    .reg_write_o   (wb_reg_write),
    .wb_sel_mem_o  (wb_sel_mem)
  );

  // =========================================================
  //  WB Stage
  // =========================================================
  assign wb_data_mux = (wb_sel_mem) ? wb_mem_rdata : wb_alu_result;

  WB_Stage wb_stage_i (
  .alu_res_i    (wb_alu_result),
  .mem_rdata_i  (wb_mem_rdata),
  .mem_to_reg_i (wb_sel_mem),
  .wb_data_o    (wb_data_mux)
);

endmodule : top_core
