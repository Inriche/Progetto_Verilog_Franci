// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregistro__Syms.h"


void Vregistro___024root__trace_chg_0_sub_0(Vregistro___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vregistro___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root__trace_chg_0\n"); );
    // Init
    Vregistro___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregistro___024root*>(voidSelf);
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vregistro___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vregistro___024root__trace_chg_0_sub_0(Vregistro___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,((1U & (IData)(vlSelf->registro__DOT__dut__DOT__dato))),4);
        bufp->chgBit(oldp+1,((1U & (IData)(vlSelf->registro__DOT__dut__DOT__dato))));
        bufp->chgCData(oldp+2,(vlSelf->registro__DOT__dut__DOT__dato),4);
    }
    bufp->chgCData(oldp+3,(vlSelf->registro__DOT__A),4);
    bufp->chgBit(oldp+4,(vlSelf->registro__DOT__C));
    bufp->chgBit(oldp+5,((1U & (IData)(vlSelf->registro__DOT__A))));
}

void Vregistro___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root__trace_cleanup\n"); );
    // Init
    Vregistro___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregistro___024root*>(voidSelf);
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
