`default_nettype none
module tb_core;
  logic clk = 0;
  logic rst = 1;

  // Clock generator: toggles every 5 time units (10 ns period = 100 MHz)
  always #5 clk <= ~clk;

  // DUT (Device Under Test)
  top_core dut (
    .clk(clk),
    .rst(rst)
  );

  // Test sequence + waveform dumping
initial begin
  $display("Start tb_core");
`ifndef VERILATOR
  $dumpfile("wave.vcd");
  $dumpvars(0, tb_core);   // depth 0 -> dump tb_core and everything below
`endif

  repeat(5) @(posedge clk);
  rst = 0;
  repeat(50) @(posedge clk);
  $display("Finish tb_core");
  $finish;
end

endmodule
