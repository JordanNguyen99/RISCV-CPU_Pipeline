`default_nettype none
module IF_ID_Reg (
  input  logic        clk,
  input  logic        rst,
  input  logic        en,         // ~stall_if
  input  logic        flush,      // branch/jump flush
  input  logic [31:0] pc_i,
  input  logic [31:0] instr_i,
  output logic [31:0] pc_o,
  output logic [31:0] instr_o
);
  always_ff @(posedge clk) begin
    if (rst || flush) begin
      pc_o    <= '0;
      instr_o <= '0;
    end else if (en) begin
      pc_o    <= pc_i;
      instr_o <= instr_i;
    end
  end
endmodule
