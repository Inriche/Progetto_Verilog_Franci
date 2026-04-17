// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_gen_int.h for the primary calling header

#ifndef VERILATED_VTB_GEN_INT___024ROOT_H_
#define VERILATED_VTB_GEN_INT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_gen_int__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_gen_int___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__uu1;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__nn1;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__nn2;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__U1__DOT__aa1;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn1;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__xx1;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa1;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn2;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa2;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn3;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa3;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa4;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa5;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa6;
    CData/*1:0*/ tb_gen_int__DOT__Sel;
    CData/*2:0*/ tb_gen_int__DOT__QTY_P1;
    CData/*2:0*/ tb_gen_int__DOT__QTY_P2;
    CData/*2:0*/ tb_gen_int__DOT__QTY_P3;
    CData/*2:0*/ tb_gen_int__DOT__QTY_P4;
    CData/*2:0*/ tb_gen_int__DOT__PRICE_P1;
    CData/*2:0*/ tb_gen_int__DOT__PRICE_P2;
    CData/*2:0*/ tb_gen_int__DOT__PRICE_P3;
    CData/*2:0*/ tb_gen_int__DOT__PRICE_P4;
    CData/*2:0*/ tb_gen_int__DOT__CREDITO;
    CData/*0:0*/ tb_gen_int__DOT__i;
    CData/*2:0*/ tb_gen_int__DOT__uut__DOT__mm1;
    CData/*2:0*/ tb_gen_int__DOT__uut__DOT__mm2;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__aa1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tb_gen_int__DOT__PRICE_P2__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tb_gen_int__DOT__PRICE_P3__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tb_gen_int__DOT__PRICE_P4__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_gen_int__DOT__Sel__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tb_gen_int__DOT__QTY_P2__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tb_gen_int__DOT__QTY_P3__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tb_gen_int__DOT__QTY_P4__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_gen_int__DOT__s;
    IData/*31:0*/ tb_gen_int__DOT__c;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_gen_int__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_gen_int___024root(Vtb_gen_int__Syms* symsp, const char* v__name);
    ~Vtb_gen_int___024root();
    VL_UNCOPYABLE(Vtb_gen_int___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
