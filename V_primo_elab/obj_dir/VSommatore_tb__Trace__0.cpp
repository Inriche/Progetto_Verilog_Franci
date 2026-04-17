// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSommatore_tb__Syms.h"


void VSommatore_tb___024root__trace_chg_0_sub_0(VSommatore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSommatore_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root__trace_chg_0\n"); );
    // Init
    VSommatore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSommatore_tb___024root*>(voidSelf);
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSommatore_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSommatore_tb___024root__trace_chg_0_sub_0(VSommatore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->Sommatore_tb__DOT__A),8);
    bufp->chgCData(oldp+1,(vlSelf->Sommatore_tb__DOT__B),8);
    bufp->chgCData(oldp+2,((0xffU & ((IData)(vlSelf->Sommatore_tb__DOT__A) 
                                     + (IData)(vlSelf->Sommatore_tb__DOT__B)))),8);
}

void VSommatore_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSommatore_tb___024root__trace_cleanup\n"); );
    // Init
    VSommatore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSommatore_tb___024root*>(voidSelf);
    VSommatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
