// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstato3tb.h for the primary calling header

#ifndef VERILATED_VSTATO3TB___024ROOT_H_
#define VERILATED_VSTATO3TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vstato3tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstato3tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ stato3tb__DOT__INTERNO;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__cc2;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__cc3;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn1;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__xx1;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa1;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn2;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa2;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn3;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa3;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa4;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa5;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa6;
    CData/*2:0*/ stato3tb__DOT__PRICE_P1;
    CData/*2:0*/ stato3tb__DOT__PRICE_P2;
    CData/*2:0*/ stato3tb__DOT__PRICE_P3;
    CData/*2:0*/ stato3tb__DOT__PRICE_P4;
    CData/*2:0*/ stato3tb__DOT__CREDITO;
    CData/*1:0*/ stato3tb__DOT__Sel;
    CData/*2:0*/ stato3tb__DOT__Resto;
    CData/*2:0*/ stato3tb__DOT__dut__DOT__mm1;
    CData/*2:0*/ stato3tb__DOT__dut__DOT__dd1;
    CData/*2:0*/ stato3tb__DOT__dut__DOT__dd2;
    CData/*2:0*/ stato3tb__DOT__dut__DOT__ad2;
    CData/*2:0*/ stato3tb__DOT__dut__DOT__Maggiore;
    CData/*2:0*/ stato3tb__DOT__dut__DOT__Minore;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*2:0*/ __Vtrigprevexpr___TOP__stato3tb__DOT__PRICE_P2__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__stato3tb__DOT__PRICE_P3__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__stato3tb__DOT__PRICE_P4__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__stato3tb__DOT__Sel__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstato3tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstato3tb___024root(Vstato3tb__Syms* symsp, const char* v__name);
    ~Vstato3tb___024root();
    VL_UNCOPYABLE(Vstato3tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
