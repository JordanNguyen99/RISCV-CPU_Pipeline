// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_core.h for the primary calling header

#ifndef VERILATED_VTB_CORE___024UNIT_H_
#define VERILATED_VTB_CORE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_core___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_core___024unit(Vtb_core__Syms* symsp, const char* v__name);
    ~Vtb_core___024unit();
    VL_UNCOPYABLE(Vtb_core___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
