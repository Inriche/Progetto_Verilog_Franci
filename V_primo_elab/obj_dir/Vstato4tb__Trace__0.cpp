// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vstato4tb__Syms.h"


void Vstato4tb___024root__trace_chg_0_sub_0(Vstato4tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vstato4tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root__trace_chg_0\n"); );
    // Init
    Vstato4tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstato4tb___024root*>(voidSelf);
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstato4tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstato4tb___024root__trace_chg_0_sub_0(Vstato4tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->stato4tb__DOT__PRICE_P1),3);
        bufp->chgCData(oldp+1,(vlSelf->stato4tb__DOT__PRICE_P2),3);
        bufp->chgCData(oldp+2,(vlSelf->stato4tb__DOT__PRICE_P3),3);
        bufp->chgCData(oldp+3,(vlSelf->stato4tb__DOT__PRICE_P4),3);
        bufp->chgCData(oldp+4,(vlSelf->stato4tb__DOT__CREDITO),3);
        bufp->chgCData(oldp+5,(vlSelf->stato4tb__DOT__Sel),2);
        bufp->chgBit(oldp+6,(vlSelf->stato4tb__DOT__INTERNO));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+7,(vlSelf->stato4tb__DOT__dut__DOT__dd1),3);
        bufp->chgCData(oldp+8,(vlSelf->stato4tb__DOT__dut__DOT__dd2),3);
        bufp->chgBit(oldp+9,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn1));
        bufp->chgBit(oldp+10,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn2));
        bufp->chgBit(oldp+11,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn3));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->stato4tb__DOT__dut__DOT__dd2) 
                                     >> 2U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->stato4tb__DOT__dut__DOT__dd2) 
                                     >> 1U))));
        bufp->chgBit(oldp+14,((1U & (IData)(vlSelf->stato4tb__DOT__dut__DOT__dd2))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+15,(vlSelf->stato4tb__DOT__Resto),3);
        bufp->chgCData(oldp+16,((7U & ((IData)(1U) 
                                       + (~ (IData)(vlSelf->stato4tb__DOT__dut__DOT__Maggiore))))),3);
        bufp->chgCData(oldp+17,((7U & ((IData)(1U) 
                                       + ((~ (IData)(vlSelf->stato4tb__DOT__dut__DOT__Maggiore)) 
                                          + (IData)(vlSelf->stato4tb__DOT__dut__DOT__Minore))))),3);
        bufp->chgCData(oldp+18,(vlSelf->stato4tb__DOT__dut__DOT__Maggiore),3);
        bufp->chgCData(oldp+19,(vlSelf->stato4tb__DOT__dut__DOT__Minore),3);
        bufp->chgBit(oldp+20,((((IData)(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa1) 
                                | (IData)(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa4)) 
                               | (IData)(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa6))));
        bufp->chgBit(oldp+21,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__cc2));
        bufp->chgBit(oldp+22,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__cc3));
        bufp->chgBit(oldp+23,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__xx1));
        bufp->chgBit(oldp+24,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa1));
        bufp->chgBit(oldp+25,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa2));
        bufp->chgBit(oldp+26,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa3));
        bufp->chgBit(oldp+27,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa4));
        bufp->chgBit(oldp+28,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa5));
        bufp->chgBit(oldp+29,(((IData)(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa1) 
                               | (IData)(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa4))));
        bufp->chgBit(oldp+30,(vlSelf->stato4tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa6));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+31,(vlSelf->stato4tb__DOT__dut__DOT__mm1),3);
        bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->stato4tb__DOT__dut__DOT__mm1) 
                                     >> 2U))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->stato4tb__DOT__dut__DOT__mm1) 
                                     >> 1U))));
        bufp->chgBit(oldp+34,((1U & (IData)(vlSelf->stato4tb__DOT__dut__DOT__mm1))));
    }
    bufp->chgBit(oldp+35,((1U & (~ (((IData)(vlSelf->stato4tb__DOT__dut__DOT__dd2) 
                                     ^ (IData)(vlSelf->stato4tb__DOT__dut__DOT__mm1)) 
                                    >> 1U)))));
}

void Vstato4tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root__trace_cleanup\n"); );
    // Init
    Vstato4tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstato4tb___024root*>(voidSelf);
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
