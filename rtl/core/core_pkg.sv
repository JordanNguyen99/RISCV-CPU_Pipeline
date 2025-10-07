package CORE_PKG;
  typedef struct packed {
    logic [31:0] pc, instr;
  } IF_ID_t;

  typedef struct packed {
    logic [31:0] pc, rs1_val, rs2_val, imm;
    logic [4:0]  rs1, rs2, rd;
    logic [3:0]  alu_op;
    logic        mem_read, mem_write, reg_write, wb_sel_mem;
  } ID_EX_t;

  typedef struct packed {
    logic [31:0] alu_res, rs2_fwd;
    logic [4:0]  rd;
    logic        mem_read, mem_write, reg_write, wb_sel_mem;
  } EX_MEM_t;

  typedef struct packed {
    logic [31:0] mem_rdata, alu_res;
    logic [4:0]  rd;
    logic        reg_write, wb_sel_mem;
  } MEM_WB_t;
endpackage
