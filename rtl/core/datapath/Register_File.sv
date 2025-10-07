//-------------------------------------------------------------
// Register_File.sv
// 32 x 32-bit RISC-V general-purpose register file
// • x0 is hardwired to 0
// • Asynchronous read, synchronous write
//-------------------------------------------------------------
`default_nettype none
module Register_File (
  input  logic        clk,
  input  logic        we,           // Write enable
  input  logic [4:0]  wa,           // Write address
  input  logic [31:0] wd,           // Write data
  input  logic [4:0]  ra1,          // Read address 1
  input  logic [4:0]  ra2,          // Read address 2
  output logic [31:0] rd1,          // Read data 1
  output logic [31:0] rd2           // Read data 2
);
  // 32 general-purpose registers
  logic [31:0] regfile [31:0];

  // Write: synchronous, x0 is always 0
  always_ff @(posedge clk) begin
    if (we && (wa != 5'd0))
      regfile[wa] <= wd;
  end

  // Read: asynchronous, x0 always reads 0
  assign rd1 = (ra1 == 5'd0) ? 32'd0 : regfile[ra1];
  assign rd2 = (ra2 == 5'd0) ? 32'd0 : regfile[ra2];

endmodule : Register_File
