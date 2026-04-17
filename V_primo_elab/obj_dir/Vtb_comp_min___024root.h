// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_comp_min.h for the primary calling header

#ifndef VERILATED_VTB_COMP_MIN___024ROOT_H_
#define VERILATED_VTB_COMP_MIN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_comp_min__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_comp_min___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__nn1;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__xx1;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__aa1;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__nn2;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__aa2;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__nn3;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__aa3;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__aa4;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__aa5;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__aa6;
    CData/*2:0*/ tb_comp_min__DOT__str1;
    CData/*2:0*/ tb_comp_min__DOT__str2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_comp_min__DOT__i;
    IData/*31:0*/ tb_comp_min__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_comp_min__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_comp_min___024root(Vtb_comp_min__Syms* symsp, const char* v__name);
    ~Vtb_comp_min___024root();
    VL_UNCOPYABLE(Vtb_comp_min___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
