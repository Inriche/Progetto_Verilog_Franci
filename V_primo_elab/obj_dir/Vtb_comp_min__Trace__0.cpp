// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_comp_min__Syms.h"


void Vtb_comp_min___024root__trace_chg_0_sub_0(Vtb_comp_min___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_comp_min___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root__trace_chg_0\n"); );
    // Init
    Vtb_comp_min___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_comp_min___024root*>(voidSelf);
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_comp_min___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_comp_min___024root__trace_chg_0_sub_0(Vtb_comp_min___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_comp_min__DOT__str1),3);
        bufp->chgCData(oldp+1,(vlSelf->tb_comp_min__DOT__str2),3);
        bufp->chgIData(oldp+2,(vlSelf->tb_comp_min__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_comp_min__DOT__j),32);
        bufp->chgBit(oldp+4,((1U & (~ (((IData)(vlSelf->tb_comp_min__DOT__str1) 
                                        ^ (IData)(vlSelf->tb_comp_min__DOT__str2)) 
                                       >> 1U)))));
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->tb_comp_min__DOT__str2) 
                                    >> 2U))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelf->tb_comp_min__DOT__str2) 
                                    >> 1U))));
        bufp->chgBit(oldp+7,((1U & (IData)(vlSelf->tb_comp_min__DOT__str2))));
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelf->tb_comp_min__DOT__str1) 
                                    >> 2U))));
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelf->tb_comp_min__DOT__str1) 
                                    >> 1U))));
        bufp->chgBit(oldp+10,((1U & (IData)(vlSelf->tb_comp_min__DOT__str1))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+11,((((IData)(vlSelf->tb_comp_min__DOT__uut__DOT__aa1) 
                                | (IData)(vlSelf->tb_comp_min__DOT__uut__DOT__aa4)) 
                               | (IData)(vlSelf->tb_comp_min__DOT__uut__DOT__aa6))));
        bufp->chgBit(oldp+12,(vlSelf->tb_comp_min__DOT__uut__DOT__nn1));
        bufp->chgBit(oldp+13,(vlSelf->tb_comp_min__DOT__uut__DOT__xx1));
        bufp->chgBit(oldp+14,(vlSelf->tb_comp_min__DOT__uut__DOT__aa1));
        bufp->chgBit(oldp+15,(vlSelf->tb_comp_min__DOT__uut__DOT__nn2));
        bufp->chgBit(oldp+16,(vlSelf->tb_comp_min__DOT__uut__DOT__aa2));
        bufp->chgBit(oldp+17,(vlSelf->tb_comp_min__DOT__uut__DOT__nn3));
        bufp->chgBit(oldp+18,(vlSelf->tb_comp_min__DOT__uut__DOT__aa3));
        bufp->chgBit(oldp+19,(vlSelf->tb_comp_min__DOT__uut__DOT__aa4));
        bufp->chgBit(oldp+20,(vlSelf->tb_comp_min__DOT__uut__DOT__aa5));
        bufp->chgBit(oldp+21,(((IData)(vlSelf->tb_comp_min__DOT__uut__DOT__aa1) 
                               | (IData)(vlSelf->tb_comp_min__DOT__uut__DOT__aa4))));
        bufp->chgBit(oldp+22,(vlSelf->tb_comp_min__DOT__uut__DOT__aa6));
    }
}

void Vtb_comp_min___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root__trace_cleanup\n"); );
    // Init
    Vtb_comp_min___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_comp_min___024root*>(voidSelf);
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
