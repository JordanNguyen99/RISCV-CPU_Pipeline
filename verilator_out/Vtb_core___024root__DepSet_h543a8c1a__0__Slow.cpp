// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "Vtb_core__pch.h"
#include "Vtb_core___024root.h"

VL_ATTR_COLD void Vtb_core___024root___eval_static__TOP(Vtb_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_core___024root___eval_static(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_static\n"); );
    // Body
    Vtb_core___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_core___024root___eval_static__TOP(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_core__DOT__clk = 0U;
    vlSelf->tb_core__DOT__rst = 1U;
}

VL_ATTR_COLD void Vtb_core___024root___eval_initial__TOP(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__d_resp_sig = 0x200000000ULL;
}

VL_ATTR_COLD void Vtb_core___024root___eval_final(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__stl(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_core___024root___eval_phase__stl(Vtb_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_core___024root___eval_settle(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/jorda/RISCV-CPU_Pipeline/sim/tb_core.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__stl(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_core___024root___stl_sequent__TOP__0(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_core__DOT__dut__DOT__d_resp_sig = (0x200000000ULL 
                                                  | (((QData)((IData)(vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__rvalid_q)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__rdata_q))));
}

VL_ATTR_COLD void Vtb_core___024root___eval_stl(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_core___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_core___024root___eval_triggers__stl(Vtb_core___024root* vlSelf);

VL_ATTR_COLD bool Vtb_core___024root___eval_phase__stl(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__act(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_core.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__nba(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_core.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_core___024root___ctor_var_reset(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_core__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__id_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__id_instr = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__ex_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__ex_rs1_val = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__ex_rs2_val = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__ex_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__ex_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb_core__DOT__dut__DOT__ex_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_core__DOT__dut__DOT__ex_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_core__DOT__dut__DOT__ex_alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_core__DOT__dut__DOT__ex_mem_read = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__ex_mem_write = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__ex_reg_write = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__ex_wb_sel_mem = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__mem_alu_res = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__mem_rs2_fwd = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__mem_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_core__DOT__dut__DOT__mem_mem_read = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__mem_mem_write = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__mem_reg_write = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__mem_wb_sel_mem = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__mem_alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__wb_mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__wb_alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__wb_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_core__DOT__dut__DOT__wb_reg_write = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__wb_sel_mem = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(70, vlSelf->tb_core__DOT__dut__DOT__d_req_sig);
    vlSelf->tb_core__DOT__dut__DOT__d_resp_sig = VL_RAND_RESET_Q(34);
    vlSelf->tb_core__DOT__dut__DOT__if_stage__DOT__pc_q = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_core__DOT__dut__DOT__id_stage__DOT__u_regfile__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__opcode_o = VL_RAND_RESET_I(7);
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__funct3_o = VL_RAND_RESET_I(3);
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__funct7_o = VL_RAND_RESET_I(7);
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__alu_src_b_imm_o = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__byte_en_o = VL_RAND_RESET_I(4);
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__branch_o = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__jal_o = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__jalr_o = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__ex_mem__DOT__byte_en_o = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__idx = 0;
    vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__old = VL_RAND_RESET_I(32);
    vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__mask = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__tb_core__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_core__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_core__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
