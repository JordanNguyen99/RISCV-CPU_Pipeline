// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_core__Syms.h"


void Vtb_core___024root__trace_chg_0_sub_0(Vtb_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_chg_0\n"); );
    // Init
    Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_core___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_core___024root__trace_chg_0_sub_0(Vtb_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_core__DOT__dut__DOT__if_stage__DOT__pc_q),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_core__DOT__dut__DOT__id_pc),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_core__DOT__dut__DOT__id_instr),32);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+4,((0x1fU & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                         >> 7U))),5);
        bufp->chgIData(oldp+6,(((0U == (0x1fU & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                                 >> 0xfU)))
                                 ? 0U : vlSelf->tb_core__DOT__dut__DOT__id_stage__DOT__u_regfile__DOT__regfile
                                [(0x1fU & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                           >> 0xfU))])),32);
        bufp->chgIData(oldp+7,(((0U == (0x1fU & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                                 >> 0x14U)))
                                 ? 0U : vlSelf->tb_core__DOT__dut__DOT__id_stage__DOT__u_regfile__DOT__regfile
                                [(0x1fU & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                           >> 0x14U))])),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_core__DOT__dut__DOT__ex_pc),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_core__DOT__dut__DOT__ex_rs1_val),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_core__DOT__dut__DOT__ex_rs2_val),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_core__DOT__dut__DOT__ex_imm),32);
        bufp->chgCData(oldp+12,(vlSelf->tb_core__DOT__dut__DOT__ex_rs1),5);
        bufp->chgCData(oldp+13,(vlSelf->tb_core__DOT__dut__DOT__ex_rs2),5);
        bufp->chgCData(oldp+14,(vlSelf->tb_core__DOT__dut__DOT__ex_rd),5);
        bufp->chgCData(oldp+15,(vlSelf->tb_core__DOT__dut__DOT__ex_alu_op),4);
        bufp->chgBit(oldp+16,(vlSelf->tb_core__DOT__dut__DOT__ex_mem_read));
        bufp->chgBit(oldp+17,(vlSelf->tb_core__DOT__dut__DOT__ex_mem_write));
        bufp->chgBit(oldp+18,(vlSelf->tb_core__DOT__dut__DOT__ex_reg_write));
        bufp->chgBit(oldp+19,(vlSelf->tb_core__DOT__dut__DOT__ex_wb_sel_mem));
        bufp->chgIData(oldp+20,((vlSelf->tb_core__DOT__dut__DOT__ex_rs1_val 
                                 + vlSelf->tb_core__DOT__dut__DOT__ex_rs2_val)),32);
        bufp->chgIData(oldp+21,(vlSelf->tb_core__DOT__dut__DOT__mem_alu_res),32);
        bufp->chgIData(oldp+22,(vlSelf->tb_core__DOT__dut__DOT__mem_rs2_fwd),32);
        bufp->chgCData(oldp+23,(vlSelf->tb_core__DOT__dut__DOT__mem_rd),5);
        bufp->chgBit(oldp+24,(vlSelf->tb_core__DOT__dut__DOT__mem_mem_read));
        bufp->chgBit(oldp+25,(vlSelf->tb_core__DOT__dut__DOT__mem_mem_write));
        bufp->chgBit(oldp+26,(vlSelf->tb_core__DOT__dut__DOT__mem_reg_write));
        bufp->chgBit(oldp+27,(vlSelf->tb_core__DOT__dut__DOT__mem_wb_sel_mem));
        bufp->chgIData(oldp+28,(vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__rdata_q),32);
        bufp->chgIData(oldp+29,(vlSelf->tb_core__DOT__dut__DOT__wb_mem_rdata),32);
        bufp->chgIData(oldp+30,(vlSelf->tb_core__DOT__dut__DOT__wb_alu_result),32);
        bufp->chgIData(oldp+31,(((IData)(vlSelf->tb_core__DOT__dut__DOT__wb_sel_mem)
                                  ? vlSelf->tb_core__DOT__dut__DOT__wb_mem_rdata
                                  : vlSelf->tb_core__DOT__dut__DOT__wb_alu_result)),32);
        bufp->chgCData(oldp+32,(vlSelf->tb_core__DOT__dut__DOT__wb_rd),5);
        bufp->chgBit(oldp+33,(vlSelf->tb_core__DOT__dut__DOT__wb_reg_write));
        bufp->chgBit(oldp+34,(vlSelf->tb_core__DOT__dut__DOT__wb_sel_mem));
        bufp->chgBit(oldp+35,(vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__rvalid_q));
        bufp->chgIData(oldp+36,(vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__idx),32);
        bufp->chgIData(oldp+37,(vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__old),32);
        bufp->chgIData(oldp+38,(vlSelf->tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__mask),32);
        bufp->chgCData(oldp+39,(vlSelf->tb_core__DOT__dut__DOT__ex_mem__DOT__byte_en_o),4);
        bufp->chgIData(oldp+40,(vlSelf->tb_core__DOT__dut__DOT__ex_alu_op),32);
        bufp->chgCData(oldp+41,((0x7fU & vlSelf->tb_core__DOT__dut__DOT__id_instr)),7);
        bufp->chgCData(oldp+42,((7U & (vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+43,((vlSelf->tb_core__DOT__dut__DOT__id_instr 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+44,(vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__opcode_o),7);
        bufp->chgCData(oldp+45,(vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__funct3_o),3);
        bufp->chgCData(oldp+46,(vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__funct7_o),7);
        bufp->chgBit(oldp+47,(vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__alu_src_b_imm_o));
        bufp->chgCData(oldp+48,(vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__byte_en_o),4);
        bufp->chgBit(oldp+49,(vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__branch_o));
        bufp->chgBit(oldp+50,(vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__jal_o));
        bufp->chgBit(oldp+51,(vlSelf->tb_core__DOT__dut__DOT__id_ex__DOT__jalr_o));
    }
    bufp->chgBit(oldp+52,(vlSelf->tb_core__DOT__clk));
    bufp->chgBit(oldp+53,(vlSelf->tb_core__DOT__rst));
    bufp->chgQData(oldp+54,(vlSelf->tb_core__DOT__dut__DOT__d_resp_sig),34);
}

void Vtb_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root__trace_cleanup\n"); );
    // Init
    Vtb_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_core___024root*>(voidSelf);
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
