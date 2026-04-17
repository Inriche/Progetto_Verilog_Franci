// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_regfeen__Syms.h"


void Vtb_regfeen___024root__trace_chg_0_sub_0(Vtb_regfeen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_regfeen___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfeen___024root__trace_chg_0\n"); );
    // Init
    Vtb_regfeen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_regfeen___024root*>(voidSelf);
    Vtb_regfeen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_regfeen___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_regfeen___024root__trace_chg_0_sub_0(Vtb_regfeen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfeen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfeen___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->tb_regfeen__DOT__G),4);
    bufp->chgBit(oldp+1,(vlSelf->tb_regfeen__DOT__clk));
    bufp->chgBit(oldp+2,(vlSelf->tb_regfeen__DOT__en));
    bufp->chgCData(oldp+3,(vlSelf->tb_regfeen__DOT__dut__DOT__dato),4);
}

void Vtb_regfeen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfeen___024root__trace_cleanup\n"); );
    // Init
    Vtb_regfeen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_regfeen___024root*>(voidSelf);
    Vtb_regfeen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
