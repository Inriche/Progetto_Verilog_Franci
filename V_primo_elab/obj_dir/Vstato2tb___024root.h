// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstato2tb.h for the primary calling header

#ifndef VERILATED_VSTATO2TB___024ROOT_H_
#define VERILATED_VSTATO2TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vstato2tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstato2tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ stato2tb__DOT__conferma;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__interno;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__aa1;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__aa0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__uu0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__nn0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__aa1;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__uu1;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__nn1;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__nn2;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__aa1;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn1;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__xx1;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa1;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn2;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa2;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn3;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa3;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa4;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa5;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa6;
    CData/*2:0*/ stato2tb__DOT__qty_p1;
    CData/*2:0*/ stato2tb__DOT__qty_p2;
    CData/*2:0*/ stato2tb__DOT__qty_p3;
    CData/*2:0*/ stato2tb__DOT__qty_p4;
    CData/*2:0*/ stato2tb__DOT__credito;
    CData/*2:0*/ stato2tb__DOT__price_p1;
    CData/*2:0*/ stato2tb__DOT__price_p2;
    CData/*2:0*/ stato2tb__DOT__price_p3;
    CData/*2:0*/ stato2tb__DOT__price_p4;
    CData/*2:0*/ stato2tb__DOT__selezione;
    CData/*2:0*/ stato2tb__DOT__nuovo_qtyp1;
    CData/*2:0*/ stato2tb__DOT__nuovo_qtyp2;
    CData/*2:0*/ stato2tb__DOT__nuovo_qtyp3;
    CData/*2:0*/ stato2tb__DOT__nuovo_qtyp4;
    CData/*0:0*/ stato2tb__DOT__pnonvalid;
    CData/*1:0*/ stato2tb__DOT__dut__DOT__new_sel;
    CData/*2:0*/ stato2tb__DOT__dut__DOT__c41;
    CData/*2:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__dd0;
    CData/*2:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__dd1;
    CData/*2:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__mm1;
    CData/*2:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__mm2;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__aa1;
    CData/*2:0*/ stato2tb__DOT__dut__DOT__Comp4__DOT__mm1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*1:0*/ __Vtrigprevexpr___TOP__stato2tb__DOT__dut__DOT__new_sel__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__stato2tb__DOT__price_p2__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__stato2tb__DOT__price_p3__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__stato2tb__DOT__price_p4__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__stato2tb__DOT__qty_p2__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__stato2tb__DOT__qty_p3__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__stato2tb__DOT__qty_p4__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstato2tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstato2tb___024root(Vstato2tb__Syms* symsp, const char* v__name);
    ~Vstato2tb___024root();
    VL_UNCOPYABLE(Vstato2tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
