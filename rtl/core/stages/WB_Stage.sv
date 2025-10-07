`default_nettype none
module WB_Stage (
  input  logic [31:0] alu_res_i,
  input  logic [31:0] mem_rdata_i,
  input  logic        mem_to_reg_i, // 1: from mem, 0: from ALU
  output logic [31:0] wb_data_o
);
  // Placeholder: In future this will write back to reg file
  // For now, do nothing — just compile cleanly
endmodule : WB_Stage
