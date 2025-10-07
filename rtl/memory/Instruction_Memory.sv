`default_nettype none
import mem_interface_pkg::mem_req_t;
import mem_interface_pkg::mem_resp_t;

module Instruction_Memory (
  input  logic        clk,
  input  logic        rst,
  output mem_req_t    req,       // uniform tie-off
  input  mem_resp_t   resp_in,   // unused
  input  logic [31:0] addr_i,
  output logic [31:0] rdata_o
);
  localparam int DEPTH = 1024;
  logic [31:0] rom [0:DEPTH-1];

  // **** ADD THIS ****
  initial begin
    integer i;
    for (i = 0; i < DEPTH; i++) rom[i] = 32'h00000013; // NOP = ADDI x0,x0,0

    // tiny test program
    rom[0] = 32'h00100093; // addi x1,x0,1
    rom[1] = 32'h00200113; // addi x2,x0,2
    rom[2] = 32'h002081B3; // add  x3,x1,x2
    rom[3] = 32'h00000013; // nop
  end
  // ******************

  always_ff @(posedge clk) begin
    rdata_o <= rom[addr_i[11:2]]; // word-aligned
  end

  assign req = '{valid:1'b0, addr:32'b0, we:1'b0, be:4'b0, wdata:32'b0};
endmodule
