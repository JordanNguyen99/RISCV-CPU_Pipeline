# Custom Accelerator — Planned Design

## Objective
Offload compute-heavy kernels (e.g., 4x4/8x8 matrix multiply or FIR) to a coprocessor to showcase SoC-style integration.

## Integration Options
| Method | Description | Pros | Cons |
|---|---|---|---|
| Custom instruction | Use `custom-0` opcode; CPU issues op to accelerator | Low SW overhead | Needs decode + CSR plumbing |
| Memory-mapped (MMIO) | CPU writes operands to regs; polls done bit | Simple to integrate with bus | More SW work |

## Example MMIO Map
0x8000_0000 A0
0x8000_0004 B0
0x8000_0008 CTRL (bit0=start, bit1=done)
0x8000_000C RESULT0
...

## Datapath
- Multiply-Accumulate (pipelined or iterative)
- Parameterizable latency

## Bus/CSR
- AXI-Lite or Wishbone slave interface
- Optional interrupt on completion
- CSR for status/enable

## Verification
- Golden vectors vs C/ISS
- Latency/throughput sweeps

## Future Plans
- Vector version (multiple MACs)
- Integrate into cache/bus system
