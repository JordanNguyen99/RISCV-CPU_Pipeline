`default_nettype none
package mem_interface_pkg;
  typedef struct packed {
    logic        valid;
    logic [31:0] addr;
    logic        we;       // 0=read, 1=write
    logic [3:0]  be;       // byte enables
    logic [31:0] wdata;
  } mem_req_t;

  typedef struct packed {
    logic        ready;    // mem can accept a request
    logic        rvalid;   // read data valid
    logic [31:0] rdata;
  } mem_resp_t;
endpackage
