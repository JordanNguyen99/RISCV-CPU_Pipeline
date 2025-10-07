# RISC-V Pipelined CPU with Hazard Handling

## Overview
This project implements a 32-bit, 5-stage pipelined RISC-V processor (RV32I base ISA)
on the Nexys A7 FPGA. It includes hazard detection, data forwarding, and branch handling,
with plans for future cache and accelerator integration.

## Key Features
- 5-stage pipeline: IF, ID, EX, MEM, WB
- Data forwarding and load-use stall logic
- Static branch prediction (not-taken) + flush on mispredict
- Modular SystemVerilog design (clean stage separation)
- Compatible with RISC-V assembly programs from RARS or GCC
- Test infrastructure: C++ Instruction-Level Simulator (ISS), Verilator testbench

## Tools & Platform
- **FPGA:** Digilent Nexys A7-100T (Xilinx Artix-7)
- **Simulation:** Verilator + GTKWave
- **Assembler:** RARS or riscv32-unknown-elf-gcc
- **Verification:** C++ ISS (golden model)
- **Scripting:** Python / Make

## Roadmap
- ✅ ISS and repo scaffolding
- ⏩ Implement RTL core stages + pipe regs
- ⏩ Forwarding, hazard detection, branch unit
- ⏩ Verilator smoke tests + CI
- ⏩ Cache controller + bus + peripherals
- ⏩ Accelerator (matrix-mul/FIR) via custom op or MMIO

## Future Extensions
- L1 instruction + data cache controller
- Memory hierarchy with bus arbitration
- Custom accelerator coprocessor
- AXI-Lite / Wishbone SoC interconnect
- UART peripheral and timer interrupts

## Repository Layout
- `rtl/` synthesizable SV (core, memory, bus, peripherals)
- `sim/` ISS, Verilator harness, test programs, testbench
- `fpga/` board wrapper, XDC, project TCL
- `docs/` these design docs
- `legacy/` single-cycle + old C++ models
