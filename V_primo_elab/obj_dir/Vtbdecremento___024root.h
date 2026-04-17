// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtbdecremento.h for the primary calling header

#ifndef VERILATED_VTBDECREMENTO___024ROOT_H_
#define VERILATED_VTBDECREMENTO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtbdecremento__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtbdecremento___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tbdecremento__DOT__s_int;
    CData/*2:0*/ tbdecremento__DOT__q1;
    CData/*2:0*/ tbdecremento__DOT__q2;
    CData/*2:0*/ tbdecremento__DOT__q3;
    CData/*2:0*/ tbdecremento__DOT__q4;
    CData/*1:0*/ tbdecremento__DOT__S;
    CData/*2:0*/ tbdecremento__DOT__o;
    CData/*2:0*/ tbdecremento__DOT__dec__DOT__mm1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tbdecremento__DOT__S__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tbdecremento__DOT__q2__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tbdecremento__DOT__q3__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tbdecremento__DOT__q4__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtbdecremento__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtbdecremento___024root(Vtbdecremento__Syms* symsp, const char* v__name);
    ~Vtbdecremento___024root();
    VL_UNCOPYABLE(Vtbdecremento___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
