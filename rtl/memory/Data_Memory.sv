`default_nettype none
import mem_interface_pkg::mem_req_t;
import mem_interface_pkg::mem_resp_t;

module Data_Memory (
  input  logic      clk,
  input  logic      rst,
  input  mem_req_t  req,
  output mem_resp_t resp
);
  localparam int DEPTH = 1024;
  logic [31:0] ram [0:DEPTH-1];
  logic [31:0] rdata_q;

  assign resp.ready  = 1'b1;
  assign resp.rdata  = rdata_q;

  logic rvalid_q;
  assign resp.rvalid = rvalid_q;

  function automatic [31:0] write_mask(input [3:0] be);
    write_mask = { {8{be[3]}}, {8{be[2]}}, {8{be[1]}}, {8{be[0]}} };
  endfunction

  always_ff @(posedge clk) begin
    rvalid_q <= req.valid & ~req.we;
    if (req.valid) begin
      if (req.we) begin
        int idx = req.addr[11:2];
        logic [31:0] old  = ram[idx];
        logic [31:0] mask = write_mask(req.be);
        ram[idx] <= (req.wdata & mask) | (old & ~mask);
      end else begin
        rdata_q <= ram[req.addr[11:2]];
      end
    end
  end
endmodule
