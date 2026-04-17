// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vstato1_tb__Syms.h"


void Vstato1_tb___024root__trace_chg_0_sub_0(Vstato1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vstato1_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root__trace_chg_0\n"); );
    // Init
    Vstato1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstato1_tb___024root*>(voidSelf);
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstato1_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstato1_tb___024root__trace_chg_0_sub_0(Vstato1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+0,(vlSelf->stato1_tb__DOT__state__DOT__o0),3);
        bufp->chgCData(oldp+1,(vlSelf->stato1_tb__DOT__state__DOT__o1),3);
        bufp->chgCData(oldp+2,(vlSelf->stato1_tb__DOT__state__DOT__o2),3);
        bufp->chgCData(oldp+3,(vlSelf->stato1_tb__DOT__state__DOT__o3),3);
        bufp->chgCData(oldp+4,(vlSelf->stato1_tb__DOT__state__DOT__o4),3);
        bufp->chgCData(oldp+5,(vlSelf->stato1_tb__DOT__state__DOT__o5),3);
        bufp->chgCData(oldp+6,(vlSelf->stato1_tb__DOT__state__DOT__o6),3);
        bufp->chgCData(oldp+7,(vlSelf->stato1_tb__DOT__state__DOT__o7),3);
        bufp->chgCData(oldp+8,(vlSelf->stato1_tb__DOT__state__DOT__o8),3);
        bufp->chgCData(oldp+9,(vlSelf->stato1_tb__DOT__state__DOT__o9),3);
        bufp->chgCData(oldp+10,(vlSelf->stato1_tb__DOT__state__DOT__o10),3);
        bufp->chgCData(oldp+11,(vlSelf->stato1_tb__DOT__state__DOT__o11),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+12,(vlSelf->stato1_tb__DOT__state__DOT__outcont),4);
        bufp->chgCData(oldp+13,((0xfU & ((IData)(1U) 
                                         + (IData)(vlSelf->stato1_tb__DOT__state__DOT__comp1__DOT__parall__DOT__dato)))),4);
        bufp->chgCData(oldp+14,(vlSelf->stato1_tb__DOT__state__DOT__comp1__DOT__parall__DOT__dato),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+15,(vlSelf->stato1_tb__DOT__state__DOT__reg0__DOT__dato),3);
        bufp->chgCData(oldp+16,(vlSelf->stato1_tb__DOT__state__DOT__reg1__DOT__dato),3);
        bufp->chgCData(oldp+17,(vlSelf->stato1_tb__DOT__state__DOT__reg2__DOT__dato),3);
        bufp->chgCData(oldp+18,(vlSelf->stato1_tb__DOT__state__DOT__reg3__DOT__dato),3);
        bufp->chgCData(oldp+19,(vlSelf->stato1_tb__DOT__state__DOT__reg4__DOT__dato),3);
        bufp->chgCData(oldp+20,(vlSelf->stato1_tb__DOT__state__DOT__reg5__DOT__dato),3);
        bufp->chgCData(oldp+21,(vlSelf->stato1_tb__DOT__state__DOT__reg6__DOT__dato),3);
        bufp->chgCData(oldp+22,(vlSelf->stato1_tb__DOT__state__DOT__reg7__DOT__dato),3);
        bufp->chgCData(oldp+23,(vlSelf->stato1_tb__DOT__state__DOT__reg8__DOT__dato),3);
        bufp->chgCData(oldp+24,(vlSelf->stato1_tb__DOT__state__DOT__reg9__DOT__dato),3);
        bufp->chgCData(oldp+25,(vlSelf->stato1_tb__DOT__state__DOT__reg10__DOT__dato),3);
        bufp->chgCData(oldp+26,(vlSelf->stato1_tb__DOT__state__DOT__reg11__DOT__dato),3);
    }
    bufp->chgCData(oldp+27,(vlSelf->stato1_tb__DOT__stringa),3);
    bufp->chgBit(oldp+28,(vlSelf->stato1_tb__DOT__C));
    bufp->chgIData(oldp+29,(vlSelf->stato1_tb__DOT__i),32);
}

void Vstato1_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato1_tb___024root__trace_cleanup\n"); );
    // Init
    Vstato1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstato1_tb___024root*>(voidSelf);
    Vstato1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
