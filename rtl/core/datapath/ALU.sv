`default_nettype none
module alu (
  input  logic [3:0]  op,       // simple ALU op
  input  logic [31:0] a,
  input  logic [31:0] b,
  output logic [31:0] y
);
  localparam [3:0] ALU_ADD=4'd0, ALU_SUB=4'd1, ALU_AND=4'd2, ALU_OR=4'd3,
                   ALU_XOR=4'd4, ALU_SLL=4'd5, ALU_SRL=4'd6, ALU_SRA=4'd7,
                   ALU_PASS=4'd15;

  always_comb begin
    unique case(op)
      ALU_ADD: y = a + b;
      ALU_SUB: y = a - b;
      ALU_AND: y = a & b;
      ALU_OR : y = a | b;
      ALU_XOR: y = a ^ b;
      ALU_SLL: y = a << b[4:0];
      ALU_SRL: y = a >> b[4:0];
      ALU_SRA: y = $signed(a) >>> b[4:0];
      default: y = b; // pass-through
    endcase
  end
endmodule
