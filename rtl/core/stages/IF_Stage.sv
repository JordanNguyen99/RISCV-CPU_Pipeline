`default_nettype none
module IF_Stage (
  input  logic        clk,
  input  logic        rst,
  output logic [31:0] pc_o,
  output logic [31:0] instr_o
);
  // keep your previous logic; if you later add stall/flush/pc_next, expand ports.
  logic [31:0] pc_q;
  assign pc_o = pc_q;

  always_ff @(posedge clk) begin
    if (rst) pc_q <= 32'd0;
    else     pc_q <= pc_q + 32'd4;
  end

  // temp NOP or hook to Instruction_Memory
  assign instr_o = 32'h00000013;
endmodule
