// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_gen_int__Syms.h"


void Vtb_gen_int___024root__trace_chg_0_sub_0(Vtb_gen_int___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_gen_int___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root__trace_chg_0\n"); );
    // Init
    Vtb_gen_int___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_gen_int___024root*>(voidSelf);
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_gen_int___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_gen_int___024root__trace_chg_0_sub_0(Vtb_gen_int___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_gen_int__DOT__Sel),2);
        bufp->chgCData(oldp+1,(vlSelf->tb_gen_int__DOT__QTY_P1),3);
        bufp->chgCData(oldp+2,(vlSelf->tb_gen_int__DOT__QTY_P2),3);
        bufp->chgCData(oldp+3,(vlSelf->tb_gen_int__DOT__QTY_P3),3);
        bufp->chgCData(oldp+4,(vlSelf->tb_gen_int__DOT__QTY_P4),3);
        bufp->chgCData(oldp+5,(vlSelf->tb_gen_int__DOT__PRICE_P1),3);
        bufp->chgCData(oldp+6,(vlSelf->tb_gen_int__DOT__PRICE_P2),3);
        bufp->chgCData(oldp+7,(vlSelf->tb_gen_int__DOT__PRICE_P3),3);
        bufp->chgCData(oldp+8,(vlSelf->tb_gen_int__DOT__PRICE_P4),3);
        bufp->chgCData(oldp+9,(vlSelf->tb_gen_int__DOT__CREDITO),3);
        bufp->chgIData(oldp+10,(vlSelf->tb_gen_int__DOT__s),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_gen_int__DOT__c),32);
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->tb_gen_int__DOT__CREDITO) 
                                     >> 2U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->tb_gen_int__DOT__CREDITO) 
                                     >> 1U))));
        bufp->chgBit(oldp+14,((1U & (IData)(vlSelf->tb_gen_int__DOT__CREDITO))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+15,(vlSelf->tb_gen_int__DOT__uut__DOT__nn2));
        bufp->chgBit(oldp+16,((((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa1) 
                                | (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa4)) 
                               | (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa6))));
        bufp->chgBit(oldp+17,(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__xx1));
        bufp->chgBit(oldp+18,(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa1));
        bufp->chgBit(oldp+19,(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa2));
        bufp->chgBit(oldp+20,(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa3));
        bufp->chgBit(oldp+21,(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa4));
        bufp->chgBit(oldp+22,(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa5));
        bufp->chgBit(oldp+23,(((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa1) 
                               | (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa4))));
        bufp->chgBit(oldp+24,(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa6));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+25,(vlSelf->tb_gen_int__DOT__uut__DOT__mm2),3);
        bufp->chgBit(oldp+26,(vlSelf->tb_gen_int__DOT__uut__DOT__uu1));
        bufp->chgBit(oldp+27,(vlSelf->tb_gen_int__DOT__uut__DOT__nn1));
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm2) 
                                     >> 2U))));
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm2) 
                                     >> 1U))));
        bufp->chgBit(oldp+30,((1U & (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm2))));
        bufp->chgBit(oldp+31,((1U & (~ ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm2) 
                                        >> 2U)))));
        bufp->chgBit(oldp+32,((1U & (~ ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm2) 
                                        >> 1U)))));
        bufp->chgBit(oldp+33,((1U & (~ (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm2)))));
        bufp->chgBit(oldp+34,(vlSelf->tb_gen_int__DOT__uut__DOT__U1__DOT__aa1));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+35,(vlSelf->tb_gen_int__DOT__uut__DOT__mm1),3);
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm1) 
                                     >> 2U))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm1) 
                                     >> 1U))));
        bufp->chgBit(oldp+38,((1U & (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm1))));
    }
    bufp->chgBit(oldp+39,(vlSelf->tb_gen_int__DOT__i));
    bufp->chgBit(oldp+40,(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn1));
    bufp->chgBit(oldp+41,(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn2));
    bufp->chgBit(oldp+42,((1U & (~ (((IData)(vlSelf->tb_gen_int__DOT__CREDITO) 
                                     ^ (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm1)) 
                                    >> 1U)))));
    bufp->chgBit(oldp+43,(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn3));
}

void Vtb_gen_int___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root__trace_cleanup\n"); );
    // Init
    Vtb_gen_int___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_gen_int___024root*>(voidSelf);
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
