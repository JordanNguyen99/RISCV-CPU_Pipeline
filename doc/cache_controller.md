# Cache Controller — Planned Design

## Goal
Insert I-cache and D-cache between the core and memory to reduce CPI and demonstrate hierarchy design.

## Topology
Core IMem → I-Cache ┐
├→ Memory Arbiter → Main Memory (BRAM/DDR)
Core DMem → D-Cache ┘

## Interfaces
Reuse `mem_interface`:
- Req: `valid, addr, we, be, wdata`
- Resp: `ready, rvalid, rdata`

## D-Cache (initial)
- Direct-mapped, 1 KiB, 16-byte line
- Write-through, no-allocate (simple)
- Refill FSM on miss; stall core until `rvalid`

## I-Cache (initial)
- Read-only
- Optional small prefetch buffer

## Future
- 2-way set associative, LRU
- Write-back + dirty bit
- Unified bus with AXI-Lite bridge

## Verification
- Miss/hit ratio on directed tests
- Compare total cycles vs no-cache baseline (ISS/RTL)
