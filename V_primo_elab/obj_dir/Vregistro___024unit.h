// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregistro.h for the primary calling header

#ifndef VERILATED_VREGISTRO___024UNIT_H_
#define VERILATED_VREGISTRO___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregistro__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregistro___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vregistro__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregistro___024unit(Vregistro__Syms* symsp, const char* v__name);
    ~Vregistro___024unit();
    VL_UNCOPYABLE(Vregistro___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
