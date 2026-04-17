// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VS1new_tb.h for the primary calling header

#ifndef VERILATED_VS1NEW_TB___024ROOT_H_
#define VERILATED_VS1NEW_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VS1new_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VS1new_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ S1new_tb__DOT__C;
    CData/*2:0*/ S1new_tb__DOT__ingresso;
    CData/*3:0*/ S1new_tb__DOT__dut__DOT__outcont;
    CData/*3:0*/ S1new_tb__DOT__dut__DOT__comp1__DOT__w;
    CData/*3:0*/ S1new_tb__DOT__dut__DOT__comp1__DOT__parall__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg0__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg1__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg2__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg3__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg4__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg5__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg6__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg7__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg8__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg9__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg10__DOT__dato;
    CData/*2:0*/ S1new_tb__DOT__dut__DOT__reg11__DOT__dato;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__S1new_tb__DOT__C__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ S1new_tb__DOT__dut__DOT__outdecode;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VS1new_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VS1new_tb___024root(VS1new_tb__Syms* symsp, const char* v__name);
    ~VS1new_tb___024root();
    VL_UNCOPYABLE(VS1new_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
