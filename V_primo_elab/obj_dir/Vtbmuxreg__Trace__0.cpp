// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtbmuxreg__Syms.h"


void Vtbmuxreg___024root__trace_chg_0_sub_0(Vtbmuxreg___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtbmuxreg___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root__trace_chg_0\n"); );
    // Init
    Vtbmuxreg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbmuxreg___024root*>(voidSelf);
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtbmuxreg___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtbmuxreg___024root__trace_chg_0_sub_0(Vtbmuxreg___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tbmuxreg__DOT__ing3),3);
        bufp->chgCData(oldp+1,(vlSelf->tbmuxreg__DOT__ing2),3);
        bufp->chgCData(oldp+2,(vlSelf->tbmuxreg__DOT__ing1),3);
        bufp->chgCData(oldp+3,(vlSelf->tbmuxreg__DOT__ctrl),2);
        bufp->chgBit(oldp+4,(vlSelf->tbmuxreg__DOT__C));
    }
    bufp->chgCData(oldp+5,(vlSelf->tbmuxreg__DOT__dut__DOT__regpar__DOT__dato),3);
    bufp->chgCData(oldp+6,(vlSelf->tbmuxreg__DOT__dut__DOT__muxreg),3);
}

void Vtbmuxreg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root__trace_cleanup\n"); );
    // Init
    Vtbmuxreg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbmuxreg___024root*>(voidSelf);
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
