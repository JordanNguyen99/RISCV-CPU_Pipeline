#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtb_core.h"

int main(int argc, char** argv) {

    // MUST be set before any model eval/time advances
    Verilated::traceEverOn(true);

    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    ctx->traceEverOn(true);   // good for newer Verilator APIs too

    Vtb_core* top = new Vtb_core{ctx};

    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);      // register tracing
    tfp->open("wave.vcd");    // create the VCD in the *run* directory
    tfp->dump(0);             // optional: time 0 sample

    while (!ctx->gotFinish() && ctx->time() < 1000) {
        top->eval();
        ctx->timeInc(1);      // advance time
        tfp->dump(ctx->time());
    }

    tfp->close();
    delete tfp;
    delete top;
    delete ctx;
    return 0;
}
