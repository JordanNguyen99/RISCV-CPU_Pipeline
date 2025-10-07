# Hazard Handling

## 1. Data Hazards
### 1.1 Forwarding
- EX/MEM → EX for `rs1`/`rs2`
- MEM/WB → EX for `rs1`/`rs2`
- Store-data: forward to MEM write path

### 1.2 Load-Use (stall)
lw x1, 0(x2)
add x3, x1, x4 # stall 1 cycle, bubble in EX

Policy: stall IF/ID one cycle, insert bubble in EX.

## 2. Control Hazards
- Static not-taken prediction
- Early compare in ID
- If taken: flush IF and ID (squash younger instrs)

## 3. Structural Hazards
- Avoided via separate I/D memory (Harvard). If unified later, add arbiter.

## 4. Verification (directed tests)
- `basic_add.S` (no stalls, pure forwarding)
- `load_use_stall.S` (provokes single stall)
- `store_forward.S` (store uses result from prior ALU)
- `branch_flush.S` (taken/not-taken + flush)

Future: waveform checks in Verilator + ISS comparison.