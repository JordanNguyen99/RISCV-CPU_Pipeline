`default_nettype none
module ID_Stage (
  input  logic        clk,
  input  logic        rst,
  input  logic [31:0] instr_i,
  input  logic [31:0] pc_i,

  // Register specifiers (decoded)
  output logic [4:0]  rs1_o,
  output logic [4:0]  rs2_o,
  output logic [4:0]  rd_o,

  // Values read from regfile (for EX)
  output logic [31:0] rs1_val_o,
  output logic [31:0] rs2_val_o,

  // Temporary ALU op (placeholder until Control_Unit)
  output logic [31:0] alu_op_o
);
  // Decode fields
  assign rs1_o = instr_i[19:15];
  assign rs2_o = instr_i[24:20];
  assign rd_o  = instr_i[11:7];

  // --- Register file read (assumes: async read, sync write)
  // Replace with your reg file module name/ports if different.
  logic we_dummy = 1'b0;        // no writes from ID stage (WB writes later)
  logic [4:0]  wa_dummy = '0;
  logic [31:0] wd_dummy = '0;

  Register_File u_regfile (
    .clk   (clk),
    .we    (we_dummy),
    .wa    (wa_dummy),
    .wd    (wd_dummy),
    .ra1   (rs1_o),
    .ra2   (rs2_o),
    .rd1   (rs1_val_o),
    .rd2   (rs2_val_o)
  );

  // --- Minimal ALU op stub (wire up real Control_Unit later)
  assign alu_op_o = 32'h0;

endmodule
