// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Stato2.h for the primary calling header

#ifndef VERILATED_VTB_STATO2___024ROOT_H_
#define VERILATED_VTB_STATO2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_Stato2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Stato2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_Stato2__DOT__Ctrl_mux9;
    CData/*0:0*/ tb_Stato2__DOT__Ctrl_mux5;
    CData/*0:0*/ tb_Stato2__DOT__clock;
    CData/*5:0*/ tb_Stato2__DOT__A1;
    CData/*5:0*/ tb_Stato2__DOT__A2;
    CData/*5:0*/ tb_Stato2__DOT__A3;
    CData/*5:0*/ tb_Stato2__DOT__C1;
    CData/*5:0*/ tb_Stato2__DOT__C2;
    CData/*5:0*/ tb_Stato2__DOT__C3;
    CData/*5:0*/ tb_Stato2__DOT__D0;
    CData/*5:0*/ tb_Stato2__DOT__D1;
    CData/*5:0*/ tb_Stato2__DOT__E0;
    CData/*5:0*/ tb_Stato2__DOT__E1;
    CData/*5:0*/ tb_Stato2__DOT__F0;
    CData/*5:0*/ tb_Stato2__DOT__F1;
    CData/*5:0*/ tb_Stato2__DOT__G0;
    CData/*5:0*/ tb_Stato2__DOT__G1;
    CData/*5:0*/ tb_Stato2__DOT__H0;
    CData/*5:0*/ tb_Stato2__DOT__H1;
    CData/*5:0*/ tb_Stato2__DOT__I0;
    CData/*5:0*/ tb_Stato2__DOT__I1;
    CData/*5:0*/ tb_Stato2__DOT__J0;
    CData/*5:0*/ tb_Stato2__DOT__J1;
    CData/*5:0*/ tb_Stato2__DOT__K0;
    CData/*5:0*/ tb_Stato2__DOT__K1;
    CData/*1:0*/ tb_Stato2__DOT__Ctrl;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m1__DOT__muxreg;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m1__DOT__regpar__DOT__dato;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m3__DOT__muxreg;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m3__DOT__regpar__DOT__dato;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m5__DOT__muxreg;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m5__DOT__regpar__DOT__dato;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m6__DOT__muxreg;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m6__DOT__regpar__DOT__dato;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m7__DOT__muxreg;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m7__DOT__regpar__DOT__dato;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m8__DOT__muxreg;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m8__DOT__regpar__DOT__dato;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m9__DOT__muxreg;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m9__DOT__regpar__DOT__dato;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m10__DOT__muxreg;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m10__DOT__regpar__DOT__dato;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m11__DOT__muxreg;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m11__DOT__regpar__DOT__dato;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m12__DOT__muxreg;
    CData/*5:0*/ tb_Stato2__DOT__dut__DOT__m12__DOT__regpar__DOT__dato;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Stato2__DOT__clock__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_Stato2__DOT__B1;
    SData/*9:0*/ tb_Stato2__DOT__B2;
    SData/*9:0*/ tb_Stato2__DOT__B3;
    SData/*9:0*/ tb_Stato2__DOT__dut__DOT__m2__DOT__muxreg;
    SData/*9:0*/ tb_Stato2__DOT__dut__DOT__m2__DOT__regpar__DOT__dato;
    IData/*31:0*/ tb_Stato2__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_Stato2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Stato2___024root(Vtb_Stato2__Syms* symsp, const char* v__name);
    ~Vtb_Stato2___024root();
    VL_UNCOPYABLE(Vtb_Stato2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
