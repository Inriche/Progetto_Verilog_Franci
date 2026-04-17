// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontatore_tb.h for the primary calling header

#ifndef VERILATED_VCONTATORE_TB___024UNIT_H_
#define VERILATED_VCONTATORE_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcontatore_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontatore_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vcontatore_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontatore_tb___024unit(Vcontatore_tb__Syms* symsp, const char* v__name);
    ~Vcontatore_tb___024unit();
    VL_UNCOPYABLE(Vcontatore_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
