// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmagg_min_tb__Syms.h"


void Vmagg_min_tb___024root__trace_chg_0_sub_0(Vmagg_min_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmagg_min_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root__trace_chg_0\n"); );
    // Init
    Vmagg_min_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmagg_min_tb___024root*>(voidSelf);
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmagg_min_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmagg_min_tb___024root__trace_chg_0_sub_0(Vmagg_min_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->magg_min_tb__DOT__AA),3);
        bufp->chgCData(oldp+1,(vlSelf->magg_min_tb__DOT__BB),3);
        bufp->chgBit(oldp+2,((1U & (~ (((IData)(vlSelf->magg_min_tb__DOT__AA) 
                                        ^ (IData)(vlSelf->magg_min_tb__DOT__BB)) 
                                       >> 1U)))));
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelf->magg_min_tb__DOT__BB) 
                                    >> 2U))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->magg_min_tb__DOT__BB) 
                                    >> 1U))));
        bufp->chgBit(oldp+5,((1U & (IData)(vlSelf->magg_min_tb__DOT__BB))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelf->magg_min_tb__DOT__AA) 
                                    >> 2U))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->magg_min_tb__DOT__AA) 
                                    >> 1U))));
        bufp->chgBit(oldp+8,((1U & (IData)(vlSelf->magg_min_tb__DOT__AA))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+9,(vlSelf->magg_min_tb__DOT__Mag),3);
        bufp->chgCData(oldp+10,(vlSelf->magg_min_tb__DOT__Min),3);
        bufp->chgBit(oldp+11,((((IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa1) 
                                | (IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa4)) 
                               | (IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa6))));
        bufp->chgBit(oldp+12,(vlSelf->magg_min_tb__DOT__dut__DOT__cc2));
        bufp->chgBit(oldp+13,(vlSelf->magg_min_tb__DOT__dut__DOT__cc3));
        bufp->chgBit(oldp+14,(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn1));
        bufp->chgBit(oldp+15,(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__xx1));
        bufp->chgBit(oldp+16,(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa1));
        bufp->chgBit(oldp+17,(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn2));
        bufp->chgBit(oldp+18,(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa2));
        bufp->chgBit(oldp+19,(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn3));
        bufp->chgBit(oldp+20,(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa3));
        bufp->chgBit(oldp+21,(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa4));
        bufp->chgBit(oldp+22,(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa5));
        bufp->chgBit(oldp+23,(((IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa1) 
                               | (IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa4))));
        bufp->chgBit(oldp+24,(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa6));
    }
}

void Vmagg_min_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root__trace_cleanup\n"); );
    // Init
    Vmagg_min_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmagg_min_tb___024root*>(voidSelf);
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
