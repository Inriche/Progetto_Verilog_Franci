// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_regfe.h for the primary calling header

#ifndef VERILATED_VTB_REGFE___024ROOT_H_
#define VERILATED_VTB_REGFE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_regfe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_regfe___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_regfe__DOT__C;
    CData/*3:0*/ tb_regfe__DOT__A;
    CData/*3:0*/ tb_regfe__DOT__dut__DOT__dato;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_regfe__DOT__C__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_regfe__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_regfe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_regfe___024root(Vtb_regfe__Syms* symsp, const char* v__name);
    ~Vtb_regfe___024root();
    VL_UNCOPYABLE(Vtb_regfe___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
