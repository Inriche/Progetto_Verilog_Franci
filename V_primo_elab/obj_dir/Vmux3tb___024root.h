// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux3tb.h for the primary calling header

#ifndef VERILATED_VMUX3TB___024ROOT_H_
#define VERILATED_VMUX3TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmux3tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux3tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ mux3tb__DOT__ing3;
    CData/*2:0*/ mux3tb__DOT__ing2;
    CData/*2:0*/ mux3tb__DOT__ing1;
    CData/*1:0*/ mux3tb__DOT__ctrl;
    CData/*2:0*/ mux3tb__DOT__out;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux3tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux3tb___024root(Vmux3tb__Syms* symsp, const char* v__name);
    ~Vmux3tb___024root();
    VL_UNCOPYABLE(Vmux3tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
