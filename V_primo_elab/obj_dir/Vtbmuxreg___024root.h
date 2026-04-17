// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtbmuxreg.h for the primary calling header

#ifndef VERILATED_VTBMUXREG___024ROOT_H_
#define VERILATED_VTBMUXREG___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtbmuxreg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtbmuxreg___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tbmuxreg__DOT__C;
    CData/*2:0*/ tbmuxreg__DOT__ing3;
    CData/*2:0*/ tbmuxreg__DOT__ing2;
    CData/*2:0*/ tbmuxreg__DOT__ing1;
    CData/*1:0*/ tbmuxreg__DOT__ctrl;
    CData/*2:0*/ tbmuxreg__DOT__dut__DOT__muxreg;
    CData/*2:0*/ tbmuxreg__DOT__dut__DOT__regpar__DOT__dato;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tbmuxreg__DOT__C__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtbmuxreg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtbmuxreg___024root(Vtbmuxreg__Syms* symsp, const char* v__name);
    ~Vtbmuxreg___024root();
    VL_UNCOPYABLE(Vtbmuxreg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
