# Pipeline Microarchitecture

## Overview
The CPU follows a classic 5-stage RISC pipeline with full forwarding and minimal stalling.

## 1. Stages
| Stage |                  What happens                       |              Key outputs              |
|-------|-----------------------------------------------------|---------------------------------------|
|  IF   |            Fetch instr @ PC; compute PC+4           |   `instr_if`, `pc_if`, `pc_plus4_if`  |
|  ID   | Decode, regfile read, imm gen, early branch compare | `rs1_val`, `rs2_val`, `imm`, `ctrl_id`, `br_taken_id`, `br_target_id` |
|  EX   | ALU ops, branch target finalize, forwarding applied | `alu_result`, `cmp_flags`, `target_ex`|
|  MEM  |               Data memory access (RW)               |              `load_data`              |
|  WB   |          MUX(ALU, load_data, pc+4) → RegFile        |      `wb_data`, `rd`, `reg_write`     |

## 2. Pipeline Registers
- **IF/ID:** `pc_if`, `instr_if`
- **ID/EX:** `pc_id`, `rs1_val`, `rs2_val`, `imm`, `rd`, `rs1`, `rs2`, `ctrl_id`
- **EX/MEM:** `alu_result`, `rs2_fwd_for_store`, `rd`, `ctrl_ex`
- **MEM/WB:** `mem_rdata`, `alu_result`, `rd`, `ctrl_mem`

## 3. Control Signals (subset)
`reg_write`, `mem_read`, `mem_write`, `mem_to_reg`, `alu_op`, `branch`, `jump`

## 4. Forwarding
- A-path: prefer **EX/MEM** match, else **MEM/WB**, else ID/EX
- B-path: same priority
- Store-data forwarding: select rs2 from EX/MEM or MEM/WB when needed

## 5. Load-Use Stall
If EX is `LW` and its `rd` equals ID’s `rs1` or `rs2`:
- `stall_if=1`, `stall_id=1`, insert bubble into EX

## 6. Branch Handling
- Predict **not-taken**
- Early compare in **ID**
- If taken: `flush_if=1`, `flush_id=1`, next PC=`br_target_id`

## 7. Memory Interface (Harvard)
`imem_if` (read-only) and `dmem_if` (RW) share a common `mem_interface` bundle:
- Req: `valid, addr, we, be, wdata`
- Resp: `ready, rvalid, rdata`

## 8. Timing (example)
C1: IF(I1)
C2: ID(I1) IF(I2)
C3: EX(I1) ID(I2) IF(I3)
C4: MEM(I1) EX(I2) ID(I3) IF(I4)
C5: WB(I1) MEM(I2) EX(I3) ID(I4) IF(I5)

## 9. Gotchas
- x0 must be zero in RegFile **and** WB path
- Forwarding priority: EX/MEM over MEM/WB
- Branch target uses **PC of branch in ID** + imm

## Future Extensions
- Add pipeline flush for mispredicted branches.
- Add exception/interrupt pipeline integration later.
