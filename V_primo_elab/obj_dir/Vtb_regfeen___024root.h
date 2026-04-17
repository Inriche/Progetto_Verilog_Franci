// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_regfeen.h for the primary calling header

#ifndef VERILATED_VTB_REGFEEN___024ROOT_H_
#define VERILATED_VTB_REGFEEN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_regfeen__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_regfeen___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_regfeen__DOT__clk;
    CData/*3:0*/ tb_regfeen__DOT__G;
    CData/*0:0*/ tb_regfeen__DOT__en;
    CData/*3:0*/ tb_regfeen__DOT__dut__DOT__dato;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_regfeen__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_regfeen__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_regfeen___024root(Vtb_regfeen__Syms* symsp, const char* v__name);
    ~Vtb_regfeen___024root();
    VL_UNCOPYABLE(Vtb_regfeen___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
