// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdemux_tb__Syms.h"


void Vdemux_tb___024root__trace_chg_0_sub_0(Vdemux_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdemux_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root__trace_chg_0\n"); );
    // Init
    Vdemux_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdemux_tb___024root*>(voidSelf);
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdemux_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdemux_tb___024root__trace_chg_0_sub_0(Vdemux_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->demux_tb__DOT__O0),3);
        bufp->chgCData(oldp+1,(vlSelf->demux_tb__DOT__O1),3);
        bufp->chgCData(oldp+2,(vlSelf->demux_tb__DOT__O2),3);
        bufp->chgCData(oldp+3,(vlSelf->demux_tb__DOT__O3),3);
        bufp->chgCData(oldp+4,(vlSelf->demux_tb__DOT__O4),3);
        bufp->chgCData(oldp+5,(vlSelf->demux_tb__DOT__O5),3);
        bufp->chgCData(oldp+6,(vlSelf->demux_tb__DOT__O6),3);
        bufp->chgCData(oldp+7,(vlSelf->demux_tb__DOT__O7),3);
        bufp->chgCData(oldp+8,(vlSelf->demux_tb__DOT__O8),3);
        bufp->chgCData(oldp+9,(vlSelf->demux_tb__DOT__O9),3);
        bufp->chgCData(oldp+10,(vlSelf->demux_tb__DOT__O10),3);
        bufp->chgCData(oldp+11,(vlSelf->demux_tb__DOT__O11),3);
    }
    bufp->chgCData(oldp+12,(vlSelf->demux_tb__DOT__inp),3);
    bufp->chgCData(oldp+13,(vlSelf->demux_tb__DOT__control),4);
}

void Vdemux_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux_tb___024root__trace_cleanup\n"); );
    // Init
    Vdemux_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdemux_tb___024root*>(voidSelf);
    Vdemux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
