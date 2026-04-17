// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregistro.h for the primary calling header

#ifndef VERILATED_VREGISTRO___024ROOT_H_
#define VERILATED_VREGISTRO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vregistro___024unit;


class Vregistro__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregistro___024root final : public VerilatedModule {
  public:
    // CELLS
    Vregistro___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ registro__DOT__C;
    CData/*3:0*/ registro__DOT__A;
    CData/*3:0*/ registro__DOT__dut__DOT__dato;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__registro__DOT__C__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregistro__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregistro___024root(Vregistro__Syms* symsp, const char* v__name);
    ~Vregistro___024root();
    VL_UNCOPYABLE(Vregistro___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
