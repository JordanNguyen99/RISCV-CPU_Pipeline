# RISC-V 5-Stage Pipelined CPU

A 5-stage pipelined **RISC-V (RV32I)** CPU implemented in **Verilog**, featuring hazard detection and forwarding. Synthesized and deployed on a **Nexys A7-100T FPGA** using **Xilinx Vivado**, with verification via ModelSim testbenches.

---

## Features
- Implements the **RV32I base instruction set**
- Classic **5 pipeline stages**: IF, ID, EX, MEM, WB
- **Hazard detection unit** for load-use hazards
- **Data forwarding** for ALU result reuse
- **Testbench-based verification** in ModelSim
- FPGA deployment on **Nexys A7-100T** board

---

## epository Structure