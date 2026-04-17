// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtbdecremento__Syms.h"


void Vtbdecremento___024root__trace_chg_0_sub_0(Vtbdecremento___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtbdecremento___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root__trace_chg_0\n"); );
    // Init
    Vtbdecremento___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbdecremento___024root*>(voidSelf);
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtbdecremento___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtbdecremento___024root__trace_chg_0_sub_0(Vtbdecremento___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tbdecremento__DOT__q1),3);
        bufp->chgCData(oldp+1,(vlSelf->tbdecremento__DOT__q2),3);
        bufp->chgCData(oldp+2,(vlSelf->tbdecremento__DOT__q3),3);
        bufp->chgCData(oldp+3,(vlSelf->tbdecremento__DOT__q4),3);
        bufp->chgCData(oldp+4,(vlSelf->tbdecremento__DOT__S),2);
        bufp->chgBit(oldp+5,(vlSelf->tbdecremento__DOT__s_int));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+6,(vlSelf->tbdecremento__DOT__dec__DOT__mm1),3);
        bufp->chgCData(oldp+7,((7U & ((IData)(1U) + 
                                      (~ (IData)(vlSelf->tbdecremento__DOT__dec__DOT__mm1))))),3);
        bufp->chgCData(oldp+8,((7U & ((IData)(2U) + 
                                      (~ (IData)(vlSelf->tbdecremento__DOT__dec__DOT__mm1))))),3);
        bufp->chgCData(oldp+9,((7U & ((IData)(1U) + 
                                      (~ ((IData)(2U) 
                                          + (~ (IData)(vlSelf->tbdecremento__DOT__dec__DOT__mm1))))))),3);
    }
    bufp->chgCData(oldp+10,(vlSelf->tbdecremento__DOT__o),3);
}

void Vtbdecremento___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root__trace_cleanup\n"); );
    // Init
    Vtbdecremento___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbdecremento___024root*>(voidSelf);
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
