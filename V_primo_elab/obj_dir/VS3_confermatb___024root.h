// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VS3_confermatb.h for the primary calling header

#ifndef VERILATED_VS3_CONFERMATB___024ROOT_H_
#define VERILATED_VS3_CONFERMATB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VS3_confermatb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VS3_confermatb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ S3_confermatb__DOT__conf;
    CData/*0:0*/ S3_confermatb__DOT__dut__DOT__aa0;
    CData/*0:0*/ S3_confermatb__DOT__dut__DOT__uu0;
    CData/*0:0*/ S3_confermatb__DOT__dut__DOT__nn0;
    CData/*0:0*/ S3_confermatb__DOT__dut__DOT__u1__DOT__aa1;
    CData/*2:0*/ S3_confermatb__DOT__selez;
    CData/*0:0*/ S3_confermatb__DOT__errore;
    CData/*2:0*/ S3_confermatb__DOT__dut__DOT__dd0;
    CData/*2:0*/ S3_confermatb__DOT__dut__DOT__dd1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VS3_confermatb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VS3_confermatb___024root(VS3_confermatb__Syms* symsp, const char* v__name);
    ~VS3_confermatb___024root();
    VL_UNCOPYABLE(VS3_confermatb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
