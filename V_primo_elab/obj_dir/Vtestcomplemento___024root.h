// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestcomplemento.h for the primary calling header

#ifndef VERILATED_VTESTCOMPLEMENTO___024ROOT_H_
#define VERILATED_VTESTCOMPLEMENTO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestcomplemento__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestcomplemento___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ testcomplemento__DOT__Y;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestcomplemento__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestcomplemento___024root(Vtestcomplemento__Syms* symsp, const char* v__name);
    ~Vtestcomplemento___024root();
    VL_UNCOPYABLE(Vtestcomplemento___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
