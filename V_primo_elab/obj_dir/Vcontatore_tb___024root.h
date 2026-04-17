// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontatore_tb.h for the primary calling header

#ifndef VERILATED_VCONTATORE_TB___024ROOT_H_
#define VERILATED_VCONTATORE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vcontatore_tb___024unit;


class Vcontatore_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontatore_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcontatore_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ contatore_tb__DOT__Clock;
    CData/*3:0*/ contatore_tb__DOT__out;
    CData/*3:0*/ contatore_tb__DOT__count__DOT__w;
    CData/*3:0*/ contatore_tb__DOT__count__DOT__parall__DOT__dato;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__contatore_tb__DOT__Clock__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcontatore_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontatore_tb___024root(Vcontatore_tb__Syms* symsp, const char* v__name);
    ~Vcontatore_tb___024root();
    VL_UNCOPYABLE(Vcontatore_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
