// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vstato2tb__Syms.h"


void Vstato2tb___024root__trace_chg_0_sub_0(Vstato2tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vstato2tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root__trace_chg_0\n"); );
    // Init
    Vstato2tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstato2tb___024root*>(voidSelf);
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstato2tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstato2tb___024root__trace_chg_0_sub_0(Vstato2tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->stato2tb__DOT__qty_p1),3);
        bufp->chgCData(oldp+1,(vlSelf->stato2tb__DOT__qty_p2),3);
        bufp->chgCData(oldp+2,(vlSelf->stato2tb__DOT__qty_p3),3);
        bufp->chgCData(oldp+3,(vlSelf->stato2tb__DOT__qty_p4),3);
        bufp->chgCData(oldp+4,(vlSelf->stato2tb__DOT__credito),3);
        bufp->chgCData(oldp+5,(vlSelf->stato2tb__DOT__price_p1),3);
        bufp->chgCData(oldp+6,(vlSelf->stato2tb__DOT__price_p2),3);
        bufp->chgCData(oldp+7,(vlSelf->stato2tb__DOT__price_p3),3);
        bufp->chgCData(oldp+8,(vlSelf->stato2tb__DOT__price_p4),3);
        bufp->chgCData(oldp+9,(vlSelf->stato2tb__DOT__selezione),3);
        bufp->chgBit(oldp+10,(vlSelf->stato2tb__DOT__conferma));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelf->stato2tb__DOT__selezione) 
                                     >> 2U))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->stato2tb__DOT__credito) 
                                     >> 2U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->stato2tb__DOT__credito) 
                                     >> 1U))));
        bufp->chgBit(oldp+14,((1U & (IData)(vlSelf->stato2tb__DOT__credito))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+15,(vlSelf->stato2tb__DOT__dut__DOT__new_sel),2);
        bufp->chgBit(oldp+16,(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__aa0));
        bufp->chgCData(oldp+17,(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd1),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+18,(vlSelf->stato2tb__DOT__pnonvalid));
        bufp->chgCData(oldp+19,(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0),3);
        bufp->chgBit(oldp+20,(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__uu0));
        bufp->chgBit(oldp+21,(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__nn0));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0) 
                                     >> 2U))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0) 
                                     >> 1U))));
        bufp->chgBit(oldp+24,((1U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0))));
        bufp->chgBit(oldp+25,((1U & (~ ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0) 
                                        >> 2U)))));
        bufp->chgBit(oldp+26,((1U & (~ ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0) 
                                        >> 1U)))));
        bufp->chgBit(oldp+27,((1U & (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0)))));
        bufp->chgBit(oldp+28,(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__aa1));
        bufp->chgBit(oldp+29,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn1));
        bufp->chgBit(oldp+30,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn2));
        bufp->chgBit(oldp+31,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn3));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+32,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn2));
        bufp->chgBit(oldp+33,((((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa1) 
                                | (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa4)) 
                               | (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa6))));
        bufp->chgBit(oldp+34,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__xx1));
        bufp->chgBit(oldp+35,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa1));
        bufp->chgBit(oldp+36,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa2));
        bufp->chgBit(oldp+37,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa3));
        bufp->chgBit(oldp+38,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa4));
        bufp->chgBit(oldp+39,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa5));
        bufp->chgBit(oldp+40,(((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa1) 
                               | (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa4))));
        bufp->chgBit(oldp+41,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa6));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+42,(vlSelf->stato2tb__DOT__nuovo_qtyp1),3);
        bufp->chgCData(oldp+43,(vlSelf->stato2tb__DOT__nuovo_qtyp2),3);
        bufp->chgCData(oldp+44,(vlSelf->stato2tb__DOT__nuovo_qtyp3),3);
        bufp->chgCData(oldp+45,(vlSelf->stato2tb__DOT__nuovo_qtyp4),3);
        bufp->chgBit(oldp+46,(vlSelf->stato2tb__DOT__dut__DOT__interno));
        bufp->chgBit(oldp+47,(vlSelf->stato2tb__DOT__dut__DOT__aa1));
        bufp->chgCData(oldp+48,(vlSelf->stato2tb__DOT__dut__DOT__c41),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+49,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2),3);
        bufp->chgBit(oldp+50,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__uu1));
        bufp->chgBit(oldp+51,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn1));
        bufp->chgBit(oldp+52,((1U & ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2) 
                                     >> 2U))));
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2) 
                                     >> 1U))));
        bufp->chgBit(oldp+54,((1U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2))));
        bufp->chgBit(oldp+55,((1U & (~ ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2) 
                                        >> 2U)))));
        bufp->chgBit(oldp+56,((1U & (~ ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2) 
                                        >> 1U)))));
        bufp->chgBit(oldp+57,((1U & (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2)))));
        bufp->chgBit(oldp+58,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__aa1));
        bufp->chgCData(oldp+59,(vlSelf->stato2tb__DOT__dut__DOT__Comp4__DOT__mm1),3);
        bufp->chgCData(oldp+60,((7U & ((IData)(1U) 
                                       + (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp4__DOT__mm1))))),3);
        bufp->chgCData(oldp+61,((7U & ((IData)(2U) 
                                       + (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp4__DOT__mm1))))),3);
        bufp->chgCData(oldp+62,((7U & ((IData)(1U) 
                                       + (~ ((IData)(2U) 
                                             + (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp4__DOT__mm1))))))),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+63,(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1),3);
        bufp->chgBit(oldp+64,((1U & ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1) 
                                     >> 2U))));
        bufp->chgBit(oldp+65,((1U & ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1) 
                                     >> 1U))));
        bufp->chgBit(oldp+66,((1U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1))));
    }
    bufp->chgBit(oldp+67,((1U & (~ (((IData)(vlSelf->stato2tb__DOT__credito) 
                                     ^ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1)) 
                                    >> 1U)))));
}

void Vstato2tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root__trace_cleanup\n"); );
    // Init
    Vstato2tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstato2tb___024root*>(voidSelf);
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
