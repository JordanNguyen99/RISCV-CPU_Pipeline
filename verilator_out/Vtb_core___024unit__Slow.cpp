// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "Vtb_core__pch.h"
#include "Vtb_core__Syms.h"
#include "Vtb_core___024unit.h"

void Vtb_core___024unit___ctor_var_reset(Vtb_core___024unit* vlSelf);

Vtb_core___024unit::Vtb_core___024unit(Vtb_core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_core___024unit___ctor_var_reset(this);
}

void Vtb_core___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_core___024unit::~Vtb_core___024unit() {
}
