// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VS1new_tb__Syms.h"


void VS1new_tb___024root__trace_chg_0_sub_0(VS1new_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VS1new_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root__trace_chg_0\n"); );
    // Init
    VS1new_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VS1new_tb___024root*>(voidSelf);
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VS1new_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VS1new_tb___024root__trace_chg_0_sub_0(VS1new_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->S1new_tb__DOT__dut__DOT__reg0__DOT__dato),3);
        bufp->chgCData(oldp+1,(vlSelf->S1new_tb__DOT__dut__DOT__reg1__DOT__dato),3);
        bufp->chgCData(oldp+2,(vlSelf->S1new_tb__DOT__dut__DOT__reg2__DOT__dato),3);
        bufp->chgCData(oldp+3,(vlSelf->S1new_tb__DOT__dut__DOT__reg3__DOT__dato),3);
        bufp->chgCData(oldp+4,(vlSelf->S1new_tb__DOT__dut__DOT__reg4__DOT__dato),3);
        bufp->chgCData(oldp+5,(vlSelf->S1new_tb__DOT__dut__DOT__reg5__DOT__dato),3);
        bufp->chgCData(oldp+6,(vlSelf->S1new_tb__DOT__dut__DOT__reg6__DOT__dato),3);
        bufp->chgCData(oldp+7,(vlSelf->S1new_tb__DOT__dut__DOT__reg7__DOT__dato),3);
        bufp->chgCData(oldp+8,(vlSelf->S1new_tb__DOT__dut__DOT__reg8__DOT__dato),3);
        bufp->chgCData(oldp+9,(vlSelf->S1new_tb__DOT__dut__DOT__reg9__DOT__dato),3);
        bufp->chgCData(oldp+10,(vlSelf->S1new_tb__DOT__dut__DOT__reg10__DOT__dato),3);
        bufp->chgCData(oldp+11,(vlSelf->S1new_tb__DOT__dut__DOT__reg11__DOT__dato),3);
        bufp->chgCData(oldp+12,(vlSelf->S1new_tb__DOT__dut__DOT__outcont),4);
        bufp->chgSData(oldp+13,(vlSelf->S1new_tb__DOT__dut__DOT__outdecode),16);
        bufp->chgCData(oldp+14,((0xfU & ((IData)(1U) 
                                         + (IData)(vlSelf->S1new_tb__DOT__dut__DOT__comp1__DOT__parall__DOT__dato)))),4);
        bufp->chgCData(oldp+15,(vlSelf->S1new_tb__DOT__dut__DOT__comp1__DOT__parall__DOT__dato),4);
        bufp->chgBit(oldp+16,((1U & (IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode))));
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode) 
                                     >> 1U))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode) 
                                     >> 2U))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode) 
                                     >> 3U))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode) 
                                     >> 4U))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode) 
                                     >> 5U))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode) 
                                     >> 6U))));
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode) 
                                     >> 7U))));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode) 
                                     >> 8U))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->S1new_tb__DOT__dut__DOT__outdecode) 
                                     >> 9U))));
    }
    bufp->chgCData(oldp+28,(vlSelf->S1new_tb__DOT__ingresso),3);
    bufp->chgBit(oldp+29,(vlSelf->S1new_tb__DOT__C));
}

void VS1new_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root__trace_cleanup\n"); );
    // Init
    VS1new_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VS1new_tb___024root*>(voidSelf);
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
