`default_nettype none
import mem_interface_pkg::mem_req_t;
import mem_interface_pkg::mem_resp_t;

module MEM_Stage (
  input  mem_req_t   d_req_i,
  output mem_resp_t  d_resp_o
);
  // Temporary dummy request (to drive the signal)
  mem_req_t dummy_req;
  assign dummy_req = d_req_i;

  // Always ready response placeholder
  assign d_resp_o = '{ready: 1'b1, rvalid: 1'b0, rdata: 32'd0};
endmodule : MEM_Stage
