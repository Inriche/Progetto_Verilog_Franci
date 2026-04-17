// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmagg_min_tb.h for the primary calling header

#ifndef VERILATED_VMAGG_MIN_TB___024ROOT_H_
#define VERILATED_VMAGG_MIN_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmagg_min_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmagg_min_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__cc2;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__cc3;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn1;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__xx1;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa1;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn2;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa2;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn3;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa3;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa4;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa5;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa6;
    CData/*2:0*/ magg_min_tb__DOT__AA;
    CData/*2:0*/ magg_min_tb__DOT__BB;
    CData/*2:0*/ magg_min_tb__DOT__Mag;
    CData/*2:0*/ magg_min_tb__DOT__Min;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmagg_min_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmagg_min_tb___024root(Vmagg_min_tb__Syms* symsp, const char* v__name);
    ~Vmagg_min_tb___024root();
    VL_UNCOPYABLE(Vmagg_min_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
