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

## Repository Structure
riscv-cpu-pipeline/
│
├── src/ # Verilog source files (pipelined CPU)
├── testbench/ # Testbenches + sample programs
├── single_cycle/ # Single-cycle baseline design
├── cpp/ # C++ instruction-level simulator
├── docs/ # Diagrams and design notes
├── README.md
├── LICENSE
└── .gitignore

---

## Tools Used
- **Verilog HDL**
- **Xilinx Vivado** – synthesis, implementation, bitstream generation
- **ModelSim** – simulation and debugging
- **GTKWave** – waveform visualization
- **C++** – instruction-level simulator

---

## Project Evolution
This project was built incrementally to better understand CPU design:

1. **Single-Cycle CPU** (`single_cycle/`)  
   - Implemented the full RV32I datapath in a single cycle.  
   - Served as the baseline design for correctness and instruction behavior.  

2. **Pipelined CPU** (`src/`)  
   - Extended to a **5-stage pipeline** (IF, ID, EX, MEM, WB).  
   - Added **hazard detection** and **data forwarding** units.  
   - Verified through ModelSim simulation and FPGA deployment.  

3. **Instruction-Level Simulator** (`cpp/`)  
   - Built a **C++ simulator** to model instruction execution cycle-by-cycle.  
   - Provides a software reference for testing assembly programs without FPGA tools.  

This evolution mirrors how industry designs are built: starting with a functional baseline, then pipelining for performance, and using simulators for verification.

---

## How to Run

### Simulation (ModelSim)
1. Clone the repository:
   ```bash
   git clone https://github.com/JordanNguyen99/riscv-cpu-pipeline.git
   cd riscv-cpu-pipeline/testbench
2. Open testbench.sv in ModelSim.
3. Run simulation and view signals in GTKWave.

### FPGA Deployment (Vivado + Nexys A7-100T)
1. FPGA Deployment (Vivado + Nexys A7-100T)
2. Add all files in src/.
3. Synthesize and implement.
4. Generate bitstream and program the Nexys A7-100T FPGA.

### Instruction-Level Simulator (C++)

The repository includes a simple **C++ instruction-level simulator** (`cpp/main.cpp`) that models the fetch, decode, and execute stages of a RISC-V pipeline. It serves as a software reference for testing assembly programs without requiring FPGA tools.

#### Features
- Parses instruction text files (default: `testbench/program.txt`)
- Simulates a 32-register file and 1KB memory
- Logs cycle-by-cycle fetch, decode, and execute activity
- Supports a subset of RV32I instructions (arithmetic, load, store, branch)
- Useful for verifying program behavior before running on the FPGA design

#### Build & Run
1. Navigate to the `cpp/` folder:
   ```bash
   cd cpp
   g++ -std=c++11 main.cpp -o riscv_sim
   ./riscv_sim

By default, the simulator attempts to load ../testbench/program.txt.

2. To test a different program, replace program.txt in the testbench/ folder with your own instructions.

#### Example Output

RISC-V Instruction-Level Simulator Starting...

Cycle 1: Fetch -> lw x1, 0(x2)
Cycle 2: Decode -> rs1 = x2, rd = x1, imm = 0
Cycle 3: Execute -> result = MEM[x2+0]
...
