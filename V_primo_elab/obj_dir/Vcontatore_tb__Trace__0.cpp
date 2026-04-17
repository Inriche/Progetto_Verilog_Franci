// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontatore_tb__Syms.h"


void Vcontatore_tb___024root__trace_chg_0_sub_0(Vcontatore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcontatore_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root__trace_chg_0\n"); );
    // Init
    Vcontatore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontatore_tb___024root*>(voidSelf);
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcontatore_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcontatore_tb___024root__trace_chg_0_sub_0(Vcontatore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->contatore_tb__DOT__Clock));
    bufp->chgCData(oldp+1,(vlSelf->contatore_tb__DOT__out),4);
    bufp->chgCData(oldp+2,((0xfU & ((IData)(1U) + (IData)(vlSelf->contatore_tb__DOT__count__DOT__parall__DOT__dato)))),4);
    bufp->chgCData(oldp+3,(vlSelf->contatore_tb__DOT__count__DOT__parall__DOT__dato),4);
}

void Vcontatore_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root__trace_cleanup\n"); );
    // Init
    Vcontatore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontatore_tb___024root*>(voidSelf);
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
