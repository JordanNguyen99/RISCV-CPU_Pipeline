`default_nettype none
module EX_MEM_Reg (
  input  logic        clk,
  input  logic        rst,
  input  logic        en,          // ~stall_ex
  input  logic        flush,       // rare, but useful on kill

  // From EX
  input  logic [31:0] alu_res_i,
  input  logic [31:0] rs2_fwd_i,       // store data after forwarding
  input  logic [4:0]  rd_i,

  // Control (from ID_EX)
  input  logic        mem_read_i,
  input  logic        mem_write_i,
  input  logic [3:0]  byte_en_i,
  input  logic        reg_write_i,
  input  logic        wb_sel_mem_i,

  // To MEM
  output logic [31:0] alu_res_o,
  output logic [31:0] rs2_fwd_o,
  output logic [4:0]  rd_o,
  output logic        mem_read_o,
  output logic        mem_write_o,
  output logic [3:0]  byte_en_o,
  output logic        reg_write_o,
  output logic        wb_sel_mem_o
);
  always_ff @(posedge clk) begin
    if (rst || flush) begin
      alu_res_o    <= '0;
      rs2_fwd_o    <= '0;
      rd_o         <= '0;
      mem_read_o   <= 1'b0;
      mem_write_o  <= 1'b0;
      byte_en_o    <= '0;
      reg_write_o  <= 1'b0;
      wb_sel_mem_o <= 1'b0;
    end else if (en) begin
      alu_res_o    <= alu_res_i;
      rs2_fwd_o    <= rs2_fwd_i;
      rd_o         <= rd_i;
      mem_read_o   <= mem_read_i;
      mem_write_o  <= mem_write_i;
      byte_en_o    <= byte_en_i;
      reg_write_o  <= reg_write_i;
      wb_sel_mem_o <= wb_sel_mem_i;
    end
  end
endmodule
