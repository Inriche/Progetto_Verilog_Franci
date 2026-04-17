// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdemux_tb.h for the primary calling header

#ifndef VERILATED_VDEMUX_TB___024ROOT_H_
#define VERILATED_VDEMUX_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vdemux_tb___024unit;


class Vdemux_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdemux_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vdemux_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ demux_tb__DOT__inp;
    CData/*3:0*/ demux_tb__DOT__control;
    CData/*2:0*/ demux_tb__DOT__O0;
    CData/*2:0*/ demux_tb__DOT__O1;
    CData/*2:0*/ demux_tb__DOT__O2;
    CData/*2:0*/ demux_tb__DOT__O3;
    CData/*2:0*/ demux_tb__DOT__O4;
    CData/*2:0*/ demux_tb__DOT__O5;
    CData/*2:0*/ demux_tb__DOT__O6;
    CData/*2:0*/ demux_tb__DOT__O7;
    CData/*2:0*/ demux_tb__DOT__O8;
    CData/*2:0*/ demux_tb__DOT__O9;
    CData/*2:0*/ demux_tb__DOT__O10;
    CData/*2:0*/ demux_tb__DOT__O11;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdemux_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdemux_tb___024root(Vdemux_tb__Syms* symsp, const char* v__name);
    ~Vdemux_tb___024root();
    VL_UNCOPYABLE(Vdemux_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
