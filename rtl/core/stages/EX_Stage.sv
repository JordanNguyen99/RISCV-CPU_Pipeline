`default_nettype none
module EX_Stage (
  input  logic        clk,
  input  logic        rst,
  input  logic [31:0] rs1_val_i,
  input  logic [31:0] rs2_val_i,
  input  logic [31:0] alu_op_i,      // 32 bits for top_core consistency
  output logic [31:0] alu_result_o
);
  // Simple placeholder ALU behavior for now
  assign alu_result_o = rs1_val_i + rs2_val_i;  // basic addition test
endmodule : EX_Stage
