`default_nettype none
module ID_EX_Reg (
  input  logic        clk,
  input  logic        rst,
  input  logic        en,          // ~stall_id
  input  logic        flush,       // flush on control hazard

  // From ID
  input  logic [31:0] pc_i,
  input  logic [31:0] rs1_val_i,
  input  logic [31:0] rs2_val_i,
  input  logic [31:0] imm_i,
  input  logic [4:0]  rs1_i,
  input  logic [4:0]  rs2_i,
  input  logic [4:0]  rd_i,
  input  logic [6:0]  opcode_i,
  input  logic [2:0]  funct3_i,
  input  logic [6:0]  funct7_i,

  // Control (from Control_Unit in ID)
  input  logic        alu_src_b_imm_i,
  input  logic [3:0]  alu_op_i,
  input  logic        mem_read_i,
  input  logic        mem_write_i,
  input  logic [3:0]  byte_en_i,       // for stores
  input  logic        reg_write_i,
  input  logic        wb_sel_mem_i,    // 1: MEM, 0: ALU
  input  logic        branch_i,
  input  logic        jal_i,
  input  logic        jalr_i,

  // To EX
  output logic [31:0] pc_o,
  output logic [31:0] rs1_val_o,
  output logic [31:0] rs2_val_o,
  output logic [31:0] imm_o,
  output logic [4:0]  rs1_o,
  output logic [4:0]  rs2_o,
  output logic [4:0]  rd_o,
  output logic [6:0]  opcode_o,
  output logic [2:0]  funct3_o,
  output logic [6:0]  funct7_o,
  output logic        alu_src_b_imm_o,
  output logic [3:0]  alu_op_o,
  output logic        mem_read_o,
  output logic        mem_write_o,
  output logic [3:0]  byte_en_o,
  output logic        reg_write_o,
  output logic        wb_sel_mem_o,
  output logic        branch_o,
  output logic        jal_o,
  output logic        jalr_o
);
  // On flush: zero control signals (safe no-ops), data don’t matter
  function automatic logic zero_or(input logic sig);
    return 1'b0;
  endfunction

  always_ff @(posedge clk) begin
    if (rst || flush) begin
      pc_o            <= '0;
      rs1_val_o       <= '0;
      rs2_val_o       <= '0;
      imm_o           <= '0;
      rs1_o           <= '0;
      rs2_o           <= '0;
      rd_o            <= '0;
      opcode_o        <= '0;
      funct3_o        <= '0;
      funct7_o        <= '0;
      alu_src_b_imm_o <= 1'b0;
      alu_op_o        <= '0;
      mem_read_o      <= 1'b0;
      mem_write_o     <= 1'b0;
      byte_en_o       <= '0;
      reg_write_o     <= 1'b0;
      wb_sel_mem_o    <= 1'b0;
      branch_o        <= 1'b0;
      jal_o           <= 1'b0;
      jalr_o          <= 1'b0;
    end else if (en) begin
      pc_o            <= pc_i;
      rs1_val_o       <= rs1_val_i;
      rs2_val_o       <= rs2_val_i;
      imm_o           <= imm_i;
      rs1_o           <= rs1_i;
      rs2_o           <= rs2_i;
      rd_o            <= rd_i;
      opcode_o        <= opcode_i;
      funct3_o        <= funct3_i;
      funct7_o        <= funct7_i;
      alu_src_b_imm_o <= alu_src_b_imm_i;
      alu_op_o        <= alu_op_i;
      mem_read_o      <= mem_read_i;
      mem_write_o     <= mem_write_i;
      byte_en_o       <= byte_en_i;
      reg_write_o     <= reg_write_i;
      wb_sel_mem_o    <= wb_sel_mem_i;
      branch_o        <= branch_i;
      jal_o           <= jal_i;
      jalr_o          <= jalr_i;
    end
  end
endmodule
