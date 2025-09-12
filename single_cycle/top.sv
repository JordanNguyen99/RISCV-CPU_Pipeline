module top (
    input logic clock,                  // System clock
    input logic reset,                  // Active-high reset
    output logic [31:0] register_x3_out // Output from datapath (register x3)
);

    datapath processor (
        .clock(clock),
        .reset(reset),
        .register_x3_out(register_x3_out)
    );

endmodule
