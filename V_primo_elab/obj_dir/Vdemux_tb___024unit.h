// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdemux_tb.h for the primary calling header

#ifndef VERILATED_VDEMUX_TB___024UNIT_H_
#define VERILATED_VDEMUX_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdemux_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdemux_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vdemux_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdemux_tb___024unit(Vdemux_tb__Syms* symsp, const char* v__name);
    ~Vdemux_tb___024unit();
    VL_UNCOPYABLE(Vdemux_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
