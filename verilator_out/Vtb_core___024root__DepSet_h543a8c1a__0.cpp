// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "Vtb_core__pch.h"
#include "Vtb_core___024root.h"

VL_ATTR_COLD void Vtb_core___024root___eval_initial__TOP(Vtb_core___024root* vlSelf);
VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__0(Vtb_core___024root* vlSelf);
VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__1(Vtb_core___024root* vlSelf);

void Vtb_core___024root___eval_initial(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial\n"); );
    // Body
    Vtb_core___024root___eval_initial__TOP(vlSelf);
    Vtb_core___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_core___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_core__DOT__clk__0 
        = vlSelf->tb_core__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__0(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF("Start tb_core\n");
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       23);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       23);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       23);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       23);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       23);
    vlSelf->tb_core__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    co_await vlSelf->__VtrigSched_h3f7a0a5b__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_core.clk)", 
                                                       "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                                       25);
    VL_WRITEF("Finish tb_core\n");
    VL_FINISH_MT("/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 27, "");
}

VL_INLINE_OPT VlCoroutine Vtb_core___024root___eval_initial__TOP__Vtiming__1(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 
                                           7);
        vlSelf->__Vdlyvval__tb_core__DOT__clk__v0 = 
            (1U & (~ (IData)(vlSelf->tb_core__DOT__clk)));
        vlSelf->__Vdlyvset__tb_core__DOT__clk__v0 = 1U;
    }
}

void Vtb_core___024root___eval_act(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__0(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_tb_core__DOT__dut__DOT__data_mem_i__DOT__write_mask__0__Vfuncout;
    __Vfunc_tb_core__DOT__dut__DOT__data_mem_i__DOT__write_mask__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_core__DOT__dut__DOT__data_mem_i__DOT__write_mask__0__be;
    __Vfunc_tb_core__DOT__dut__DOT__data_mem_i__DOT__write_mask__0__be = 0;
    IData/*31:0*/ __Vdly__tb_core__DOT__dut__DOT__if_stage__DOT__pc_q;
    __Vdly__tb_core__DOT__dut__DOT__if_stage__DOT__pc_q = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0;
    __Vdlyvdim0__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0;
    __Vdlyvval__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0;
    __Vdlyvset__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0 = 0;
    // Body
    __Vdlyvset__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0 = 0U;
    __Vdly__tb_core__DOT__dut__DOT__if_stage__DOT__pc_q 
        = vlSelf->tb_core__DOT__dut__DOT__if_stage__DOT__pc_q;
    if (vlSelf->tb_core__DOT__rst) {
        __Vdly__tb_core__DOT__dut__DOT__if_stage__DOT__pc_q = 0U;
        vlSelf->tb_core__DOT__dut__DOT__ex_mem__DOT__byte_en_o = 0U;
        vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__byte_en_o = 0U;
        vlSelf->tb_core__DOT__dut__DOT__ex_pc = 0U;
        vlSelf->tb_core__DOT__dut__DOT__wb_mem_rdata = 0U;
        vlSelf->tb_core__DOT__dut__DOT__ex_rs1 = 0U;
        vlSelf->tb_core__DOT__dut__DOT__ex_rs2 = 0U;
        vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__opcode_o = 0U;
        vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__funct3_o = 0U;
        vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__funct7_o = 0U;
        vlSelf->tb_core__DOT__dut__DOT__mem_rs2_fwd = 0U;
        vlSelf->tb_core__DOT__dut__DOT__wb_rd = 0U;
        vlSelf->tb_core__DOT__dut__DOT__wb_alu_result = 0U;
        vlSelf->tb_core__DOT__dut__DOT__id_pc = 0U;
        vlSelf->tb_core__DOT__dut__DOT__mem_rd = 0U;
        vlSelf->tb_core__DOT__dut__DOT__mem_alu_res = 0U;
        vlSelf->tb_core__DOT__dut__DOT__ex_rd = 0U;
        vlSelf->tb_core__DOT__dut__DOT__ex_rs1_val = 0U;
        vlSelf->tb_core__DOT__dut__DOT__ex_rs2_val = 0U;
        vlSelf->tb_core__DOT__dut__DOT__id_instr = 0U;
    } else {
        __Vdly__tb_core__DOT__dut__DOT__if_stage__DOT__pc_q 
            = ((IData)(4U) + vlSelf->tb_core__DOT__dut__DOT__if_stage__DOT__pc_q);
        vlSelf->tb_core__DOT__dut__DOT__ex_mem__DOT__byte_en_o = 0xfU;
        vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__byte_en_o = 0xfU;
        vlSelf->tb_core__DOT__dut__DOT__ex_pc = vlSelf->tb_core__DOT__dut__DOT__id_pc;
        vlSelf->tb_core__DOT__dut__DOT__wb_mem_rdata 
            = vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__rdata_q;
        vlSelf->tb_core__DOT__dut__DOT__ex_rs1 = (0x1fU 
                                                  & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                                     >> 0xfU));
        vlSelf->tb_core__DOT__dut__DOT__ex_rs2 = (0x1fU 
                                                  & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                                     >> 0x14U));
        vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__opcode_o 
            = (0x7fU & vlSelf->tb_core__DOT__dut__DOT__id_instr);
        vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__funct3_o 
            = (7U & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                     >> 0xcU));
        vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__funct7_o 
            = (vlSelf->tb_core__DOT__dut__DOT__id_instr 
               >> 0x19U);
        vlSelf->tb_core__DOT__dut__DOT__mem_rs2_fwd 
            = vlSelf->tb_core__DOT__dut__DOT__ex_rs2_val;
        vlSelf->tb_core__DOT__dut__DOT__wb_rd = vlSelf->tb_core__DOT__dut__DOT__mem_rd;
        vlSelf->tb_core__DOT__dut__DOT__wb_alu_result 
            = vlSelf->tb_core__DOT__dut__DOT__mem_alu_res;
        vlSelf->tb_core__DOT__dut__DOT__id_pc = vlSelf->tb_core__DOT__dut__DOT__if_stage__DOT__pc_q;
        vlSelf->tb_core__DOT__dut__DOT__mem_rd = vlSelf->tb_core__DOT__dut__DOT__ex_rd;
        vlSelf->tb_core__DOT__dut__DOT__mem_alu_res 
            = (vlSelf->tb_core__DOT__dut__DOT__ex_rs1_val 
               + vlSelf->tb_core__DOT__dut__DOT__ex_rs2_val);
        vlSelf->tb_core__DOT__dut__DOT__ex_rd = (0x1fU 
                                                 & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                                    >> 7U));
        vlSelf->tb_core__DOT__dut__DOT__ex_rs1_val 
            = ((0U == (0x1fU & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                >> 0xfU))) ? 0U : vlSelf->tb_core__DOT__dut__DOT__id_stage__DOT__u_regfile__DOT__regfile
               [(0x1fU & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                          >> 0xfU))]);
        vlSelf->tb_core__DOT__dut__DOT__ex_rs2_val 
            = ((0U == (0x1fU & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                >> 0x14U))) ? 0U : 
               vlSelf->tb_core__DOT__dut__DOT__id_stage__DOT__u_regfile__DOT__regfile
               [(0x1fU & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                          >> 0x14U))]);
        vlSelf->tb_core__DOT__dut__DOT__id_instr = 0x13U;
    }
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__jalr_o = 0U;
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__jal_o = 0U;
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__branch_o = 0U;
    vlSelf->tb_core__DOT__dut__DOT__ex_imm = 0U;
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__alu_src_b_imm_o = 0U;
    vlSelf->tb_core__DOT__dut__DOT__ex_alu_op = 0U;
    vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__rvalid_q 
        = ((~ (vlSelf->tb_core__DOT__dut__DOT__d_req_sig[1U] 
               >> 4U)) & (vlSelf->tb_core__DOT__dut__DOT__d_req_sig[2U] 
                          >> 5U));
    vlSelf->tb_core__DOT__dut__DOT__mem_mem_write = 
        ((1U & (~ (IData)(vlSelf->tb_core__DOT__rst))) 
         && (IData)(vlSelf->tb_core__DOT__dut__DOT__ex_mem_write));
    vlSelf->tb_core__DOT__dut__DOT__mem_mem_read = 
        ((1U & (~ (IData)(vlSelf->tb_core__DOT__rst))) 
         && (IData)(vlSelf->tb_core__DOT__dut__DOT__ex_mem_read));
    vlSelf->tb_core__DOT__dut__DOT__wb_sel_mem = ((1U 
                                                   & (~ (IData)(vlSelf->tb_core__DOT__rst))) 
                                                  && (IData)(vlSelf->tb_core__DOT__dut__DOT__mem_wb_sel_mem));
    vlSelf->tb_core__DOT__dut__DOT__wb_reg_write = 
        ((1U & (~ (IData)(vlSelf->tb_core__DOT__rst))) 
         && (IData)(vlSelf->tb_core__DOT__dut__DOT__mem_reg_write));
    vlSelf->tb_core__DOT__dut__DOT__ex_mem_write = 0U;
    vlSelf->tb_core__DOT__dut__DOT__ex_mem_read = 0U;
    if ((0x20U & vlSelf->tb_core__DOT__dut__DOT__d_req_sig[2U])) {
        if ((0x10U & vlSelf->tb_core__DOT__dut__DOT__d_req_sig[1U])) {
            vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__idx 
                = (0x3ffU & (vlSelf->tb_core__DOT__dut__DOT__d_req_sig[1U] 
                             >> 7U));
            vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__old 
                = vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__ram
                [(0x3ffU & vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__idx)];
            __Vfunc_tb_core__DOT__dut__DOT__data_mem_i__DOT__write_mask__0__be 
                = (0xfU & vlSelf->tb_core__DOT__dut__DOT__d_req_sig[1U]);
            __Vfunc_tb_core__DOT__dut__DOT__data_mem_i__DOT__write_mask__0__Vfuncout 
                = (((- (IData)((1U & ((IData)(__Vfunc_tb_core__DOT__dut__DOT__data_mem_i__DOT__write_mask__0__be) 
                                      >> 3U)))) << 0x18U) 
                   | ((0xff0000U & ((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_core__DOT__dut__DOT__data_mem_i__DOT__write_mask__0__be) 
                                                   >> 2U)))) 
                                    << 0x10U)) | ((0xff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(__Vfunc_tb_core__DOT__dut__DOT__data_mem_i__DOT__write_mask__0__be) 
                                                                     >> 1U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(__Vfunc_tb_core__DOT__dut__DOT__data_mem_i__DOT__write_mask__0__be))))))));
            vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__mask 
                = __Vfunc_tb_core__DOT__dut__DOT__data_mem_i__DOT__write_mask__0__Vfuncout;
            __Vdlyvval__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0 
                = ((vlSelf->tb_core__DOT__dut__DOT__d_req_sig[0U] 
                    & vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__mask) 
                   | (vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__old 
                      & (~ vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__mask)));
            __Vdlyvset__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0 = 1U;
            __Vdlyvdim0__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0 
                = (0x3ffU & vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__idx);
        } else {
            vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__rdata_q 
                = vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__ram
                [(0x3ffU & (vlSelf->tb_core__DOT__dut__DOT__d_req_sig[1U] 
                            >> 7U))];
        }
    }
    vlSelf->tb_core__DOT__dut__DOT__mem_wb_sel_mem 
        = ((1U & (~ (IData)(vlSelf->tb_core__DOT__rst))) 
           && (IData)(vlSelf->tb_core__DOT__dut__DOT__ex_wb_sel_mem));
    vlSelf->tb_core__DOT__dut__DOT__mem_reg_write = 
        ((1U & (~ (IData)(vlSelf->tb_core__DOT__rst))) 
         && (IData)(vlSelf->tb_core__DOT__dut__DOT__ex_reg_write));
    vlSelf->tb_core__DOT__dut__DOT__if_stage__DOT__pc_q 
        = __Vdly__tb_core__DOT__dut__DOT__if_stage__DOT__pc_q;
    if (__Vdlyvset__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0) {
        vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__ram[__Vdlyvdim0__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0] 
            = __Vdlyvval__tb_core__DOT__dut__DOT__data_mem_i__DOT__ram__v0;
    }
    vlSelf->tb_core__DOT__dut__DOT__d_resp_sig = (0x200000000ULL 
                                                  | (((QData)((IData)(vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__rvalid_q)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__rdata_q))));
    vlSelf->tb_core__DOT__dut__DOT__ex_wb_sel_mem = 0U;
    vlSelf->tb_core__DOT__dut__DOT__ex_reg_write = 
        (1U & (~ (IData)(vlSelf->tb_core__DOT__rst)));
}

VL_INLINE_OPT void Vtb_core___024root___nba_sequent__TOP__1(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_core__DOT__clk__v0) {
        vlSelf->tb_core__DOT__clk = vlSelf->__Vdlyvval__tb_core__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_core__DOT__clk__v0 = 0U;
    }
}

void Vtb_core___024root___eval_nba(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_core___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtb_core___024root___timing_resume(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h3f7a0a5b__0.resume("@(posedge tb_core.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_core___024root___timing_commit(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h3f7a0a5b__0.commit("@(posedge tb_core.clk)");
    }
}

void Vtb_core___024root___eval_triggers__act(Vtb_core___024root* vlSelf);

bool Vtb_core___024root___eval_phase__act(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_core___024root___eval_triggers__act(vlSelf);
    Vtb_core___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_core___024root___timing_resume(vlSelf);
        Vtb_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_core___024root___eval_phase__nba(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_core___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__nba(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__act(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_core___024root___eval(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_core___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_core___024root___eval_debug_assertions(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
