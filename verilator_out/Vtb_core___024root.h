// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_core.h for the primary calling header

#ifndef VERILATED_VTB_CORE___024ROOT_H_
#define VERILATED_VTB_CORE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_core__DOT__clk;
    CData/*0:0*/ tb_core__DOT__rst;
    CData/*4:0*/ tb_core__DOT__dut__DOT__ex_rs1;
    CData/*4:0*/ tb_core__DOT__dut__DOT__ex_rs2;
    CData/*4:0*/ tb_core__DOT__dut__DOT__ex_rd;
    CData/*3:0*/ tb_core__DOT__dut__DOT__ex_alu_op;
    CData/*0:0*/ tb_core__DOT__dut__DOT__ex_mem_read;
    CData/*0:0*/ tb_core__DOT__dut__DOT__ex_mem_write;
    CData/*0:0*/ tb_core__DOT__dut__DOT__ex_reg_write;
    CData/*0:0*/ tb_core__DOT__dut__DOT__ex_wb_sel_mem;
    CData/*4:0*/ tb_core__DOT__dut__DOT__mem_rd;
    CData/*0:0*/ tb_core__DOT__dut__DOT__mem_mem_read;
    CData/*0:0*/ tb_core__DOT__dut__DOT__mem_mem_write;
    CData/*0:0*/ tb_core__DOT__dut__DOT__mem_reg_write;
    CData/*0:0*/ tb_core__DOT__dut__DOT__mem_wb_sel_mem;
    CData/*4:0*/ tb_core__DOT__dut__DOT__wb_rd;
    CData/*0:0*/ tb_core__DOT__dut__DOT__wb_reg_write;
    CData/*0:0*/ tb_core__DOT__dut__DOT__wb_sel_mem;
    CData/*6:0*/ tb_core__DOT__dut__DOT__id_ex__DOT__opcode_o;
    CData/*2:0*/ tb_core__DOT__dut__DOT__id_ex__DOT__funct3_o;
    CData/*6:0*/ tb_core__DOT__dut__DOT__id_ex__DOT__funct7_o;
    CData/*0:0*/ tb_core__DOT__dut__DOT__id_ex__DOT__alu_src_b_imm_o;
    CData/*3:0*/ tb_core__DOT__dut__DOT__id_ex__DOT__byte_en_o;
    CData/*0:0*/ tb_core__DOT__dut__DOT__id_ex__DOT__branch_o;
    CData/*0:0*/ tb_core__DOT__dut__DOT__id_ex__DOT__jal_o;
    CData/*0:0*/ tb_core__DOT__dut__DOT__id_ex__DOT__jalr_o;
    CData/*3:0*/ tb_core__DOT__dut__DOT__ex_mem__DOT__byte_en_o;
    CData/*0:0*/ tb_core__DOT__dut__DOT__data_mem_i__DOT__rvalid_q;
    CData/*0:0*/ __Vdlyvval__tb_core__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_core__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_core__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_core__DOT__dut__DOT__id_pc;
    IData/*31:0*/ tb_core__DOT__dut__DOT__id_instr;
    IData/*31:0*/ tb_core__DOT__dut__DOT__ex_pc;
    IData/*31:0*/ tb_core__DOT__dut__DOT__ex_rs1_val;
    IData/*31:0*/ tb_core__DOT__dut__DOT__ex_rs2_val;
    IData/*31:0*/ tb_core__DOT__dut__DOT__ex_imm;
    IData/*31:0*/ tb_core__DOT__dut__DOT__mem_alu_res;
    IData/*31:0*/ tb_core__DOT__dut__DOT__mem_rs2_fwd;
    IData/*31:0*/ tb_core__DOT__dut__DOT__mem_alu_result;
    IData/*31:0*/ tb_core__DOT__dut__DOT__wb_mem_rdata;
    IData/*31:0*/ tb_core__DOT__dut__DOT__wb_alu_result;
    IData/*31:0*/ tb_core__DOT__dut__DOT__if_stage__DOT__pc_q;
    IData/*31:0*/ tb_core__DOT__dut__DOT__data_mem_i__DOT__rdata_q;
    IData/*31:0*/ tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__idx;
    IData/*31:0*/ tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__old;
    IData/*31:0*/ tb_core__DOT__dut__DOT__data_mem_i__DOT__unnamedblk1__DOT__mask;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*69:0*/ tb_core__DOT__dut__DOT__d_req_sig;
    QData/*33:0*/ tb_core__DOT__dut__DOT__d_resp_sig;
    VlUnpacked<IData/*31:0*/, 32> tb_core__DOT__dut__DOT__id_stage__DOT__u_regfile__DOT__regfile;
    VlUnpacked<IData/*31:0*/, 1024> tb_core__DOT__dut__DOT__data_mem_i__DOT__ram;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3f7a0a5b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_core___024root(Vtb_core__Syms* symsp, const char* v__name);
    ~Vtb_core___024root();
    VL_UNCOPYABLE(Vtb_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
