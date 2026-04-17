// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstato0_tb.h for the primary calling header

#ifndef VERILATED_VSTATO0_TB___024ROOT_H_
#define VERILATED_VSTATO0_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vstato0_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstato0_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ stato0_tb__DOT__C;
    CData/*2:0*/ stato0_tb__DOT__stringa;
    CData/*3:0*/ stato0_tb__DOT__state__DOT__outcont;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o0;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o1;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o2;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o3;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o4;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o5;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o6;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o7;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o8;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o9;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o10;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__o11;
    CData/*3:0*/ stato0_tb__DOT__state__DOT__comp1__DOT__w;
    CData/*3:0*/ stato0_tb__DOT__state__DOT__comp1__DOT__parall__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg0__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg1__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg2__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg3__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg4__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg5__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg6__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg7__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg8__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg9__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg10__DOT__dato;
    CData/*2:0*/ stato0_tb__DOT__state__DOT__reg11__DOT__dato;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__stato0_tb__DOT__C__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ stato0_tb__DOT__state__DOT__outdec;
    IData/*31:0*/ stato0_tb__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstato0_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstato0_tb___024root(Vstato0_tb__Syms* symsp, const char* v__name);
    ~Vstato0_tb___024root();
    VL_UNCOPYABLE(Vstato0_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
