`default_nettype none
module MEM_WB_Reg (
  input  logic        clk,
  input  logic        rst,
  input  logic        en,           // ~stall_mem
  input  logic        flush,        // kill writeback if needed

  // From MEM
  input  logic [31:0] mem_rdata_i,
  input  logic [31:0] alu_res_i,
  input  logic [4:0]  rd_i,

  // Control
  input  logic        reg_write_i,
  input  logic        wb_sel_mem_i,

  // To WB
  output logic [31:0] mem_rdata_o,
  output logic [31:0] alu_res_o,
  output logic [4:0]  rd_o,
  output logic        reg_write_o,
  output logic        wb_sel_mem_o
);
  always_ff @(posedge clk) begin
    if (rst || flush) begin
      mem_rdata_o  <= '0;
      alu_res_o    <= '0;
      rd_o         <= '0;
      reg_write_o  <= 1'b0;
      wb_sel_mem_o <= 1'b0;
    end else if (en) begin
      mem_rdata_o  <= mem_rdata_i;
      alu_res_o    <= alu_res_i;
      rd_o         <= rd_i;
      reg_write_o  <= reg_write_i;
      wb_sel_mem_o <= wb_sel_mem_i;
    end
  end
endmodule
