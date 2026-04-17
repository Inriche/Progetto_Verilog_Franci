// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Stato1__Syms.h"


void Vtb_Stato1___024root__trace_chg_0_sub_0(Vtb_Stato1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_Stato1___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root__trace_chg_0\n"); );
    // Init
    Vtb_Stato1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Stato1___024root*>(voidSelf);
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_Stato1___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_Stato1___024root__trace_chg_0_sub_0(Vtb_Stato1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_Stato1__DOT__A1),6);
        bufp->chgCData(oldp+1,(vlSelf->tb_Stato1__DOT__A2),6);
        bufp->chgCData(oldp+2,(vlSelf->tb_Stato1__DOT__A3),6);
        bufp->chgSData(oldp+3,(vlSelf->tb_Stato1__DOT__B1),10);
        bufp->chgSData(oldp+4,(vlSelf->tb_Stato1__DOT__B2),10);
        bufp->chgSData(oldp+5,(vlSelf->tb_Stato1__DOT__B3),10);
        bufp->chgCData(oldp+6,(vlSelf->tb_Stato1__DOT__C1),6);
        bufp->chgCData(oldp+7,(vlSelf->tb_Stato1__DOT__C2),6);
        bufp->chgCData(oldp+8,(vlSelf->tb_Stato1__DOT__C3),6);
        bufp->chgCData(oldp+9,(vlSelf->tb_Stato1__DOT__D0),6);
        bufp->chgCData(oldp+10,(vlSelf->tb_Stato1__DOT__D1),6);
        bufp->chgCData(oldp+11,(vlSelf->tb_Stato1__DOT__E0),6);
        bufp->chgCData(oldp+12,(vlSelf->tb_Stato1__DOT__E1),6);
        bufp->chgCData(oldp+13,(vlSelf->tb_Stato1__DOT__F0),6);
        bufp->chgCData(oldp+14,(vlSelf->tb_Stato1__DOT__F1),6);
        bufp->chgCData(oldp+15,(vlSelf->tb_Stato1__DOT__G0),6);
        bufp->chgCData(oldp+16,(vlSelf->tb_Stato1__DOT__G1),6);
        bufp->chgCData(oldp+17,(vlSelf->tb_Stato1__DOT__H0),6);
        bufp->chgCData(oldp+18,(vlSelf->tb_Stato1__DOT__H1),6);
        bufp->chgCData(oldp+19,(vlSelf->tb_Stato1__DOT__I0),6);
        bufp->chgCData(oldp+20,(vlSelf->tb_Stato1__DOT__I1),6);
        bufp->chgCData(oldp+21,(vlSelf->tb_Stato1__DOT__J0),6);
        bufp->chgCData(oldp+22,(vlSelf->tb_Stato1__DOT__J1),6);
        bufp->chgCData(oldp+23,(vlSelf->tb_Stato1__DOT__K0),6);
        bufp->chgCData(oldp+24,(vlSelf->tb_Stato1__DOT__K1),6);
        bufp->chgCData(oldp+25,(vlSelf->tb_Stato1__DOT__Ctrl),2);
        bufp->chgBit(oldp+26,(vlSelf->tb_Stato1__DOT__Ctrl_mux9));
        bufp->chgBit(oldp+27,(vlSelf->tb_Stato1__DOT__Ctrl_mux5));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+28,(vlSelf->tb_Stato1__DOT__dut__DOT__m1__DOT__muxreg),6);
        bufp->chgCData(oldp+29,(vlSelf->tb_Stato1__DOT__dut__DOT__m10__DOT__muxreg),6);
        bufp->chgCData(oldp+30,(vlSelf->tb_Stato1__DOT__dut__DOT__m11__DOT__muxreg),6);
        bufp->chgCData(oldp+31,(vlSelf->tb_Stato1__DOT__dut__DOT__m12__DOT__muxreg),6);
        bufp->chgSData(oldp+32,(vlSelf->tb_Stato1__DOT__dut__DOT__m2__DOT__muxreg),10);
        bufp->chgCData(oldp+33,(vlSelf->tb_Stato1__DOT__dut__DOT__m3__DOT__muxreg),6);
        bufp->chgCData(oldp+34,(vlSelf->tb_Stato1__DOT__dut__DOT__m5__DOT__muxreg),6);
        bufp->chgCData(oldp+35,(vlSelf->tb_Stato1__DOT__dut__DOT__m6__DOT__muxreg),6);
        bufp->chgCData(oldp+36,(vlSelf->tb_Stato1__DOT__dut__DOT__m7__DOT__muxreg),6);
        bufp->chgCData(oldp+37,(vlSelf->tb_Stato1__DOT__dut__DOT__m8__DOT__muxreg),6);
        bufp->chgCData(oldp+38,(vlSelf->tb_Stato1__DOT__dut__DOT__m9__DOT__muxreg),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+39,(vlSelf->tb_Stato1__DOT__dut__DOT__m1__DOT__regpar__DOT__dato),6);
        bufp->chgCData(oldp+40,(vlSelf->tb_Stato1__DOT__dut__DOT__m3__DOT__regpar__DOT__dato),6);
        bufp->chgCData(oldp+41,(vlSelf->tb_Stato1__DOT__dut__DOT__m9__DOT__regpar__DOT__dato),6);
        bufp->chgCData(oldp+42,(vlSelf->tb_Stato1__DOT__dut__DOT__m10__DOT__regpar__DOT__dato),6);
        bufp->chgCData(oldp+43,(vlSelf->tb_Stato1__DOT__dut__DOT__m11__DOT__regpar__DOT__dato),6);
        bufp->chgCData(oldp+44,(vlSelf->tb_Stato1__DOT__dut__DOT__m12__DOT__regpar__DOT__dato),6);
        bufp->chgCData(oldp+45,(vlSelf->tb_Stato1__DOT__dut__DOT__m5__DOT__regpar__DOT__dato),6);
        bufp->chgCData(oldp+46,(vlSelf->tb_Stato1__DOT__dut__DOT__m6__DOT__regpar__DOT__dato),6);
        bufp->chgCData(oldp+47,(vlSelf->tb_Stato1__DOT__dut__DOT__m7__DOT__regpar__DOT__dato),6);
        bufp->chgCData(oldp+48,(vlSelf->tb_Stato1__DOT__dut__DOT__m8__DOT__regpar__DOT__dato),6);
        bufp->chgSData(oldp+49,(vlSelf->tb_Stato1__DOT__dut__DOT__m2__DOT__regpar__DOT__dato),10);
    }
    bufp->chgBit(oldp+50,(vlSelf->tb_Stato1__DOT__clock));
}

void Vtb_Stato1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato1___024root__trace_cleanup\n"); );
    // Init
    Vtb_Stato1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Stato1___024root*>(voidSelf);
    Vtb_Stato1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
