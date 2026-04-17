// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VS3_confermatb__Syms.h"


void VS3_confermatb___024root__trace_chg_0_sub_0(VS3_confermatb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VS3_confermatb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root__trace_chg_0\n"); );
    // Init
    VS3_confermatb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VS3_confermatb___024root*>(voidSelf);
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VS3_confermatb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VS3_confermatb___024root__trace_chg_0_sub_0(VS3_confermatb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,((3U & (IData)(vlSelf->S3_confermatb__DOT__dut__DOT__dd1))),2);
        bufp->chgBit(oldp+1,(vlSelf->S3_confermatb__DOT__errore));
        bufp->chgBit(oldp+2,(vlSelf->S3_confermatb__DOT__dut__DOT__aa0));
        bufp->chgCData(oldp+3,(vlSelf->S3_confermatb__DOT__dut__DOT__dd0),3);
        bufp->chgCData(oldp+4,(vlSelf->S3_confermatb__DOT__dut__DOT__dd1),3);
        bufp->chgBit(oldp+5,(vlSelf->S3_confermatb__DOT__dut__DOT__uu0));
        bufp->chgBit(oldp+6,(vlSelf->S3_confermatb__DOT__dut__DOT__nn0));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->S3_confermatb__DOT__dut__DOT__dd0) 
                                    >> 2U))));
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelf->S3_confermatb__DOT__dut__DOT__dd0) 
                                    >> 1U))));
        bufp->chgBit(oldp+9,((1U & (IData)(vlSelf->S3_confermatb__DOT__dut__DOT__dd0))));
        bufp->chgBit(oldp+10,((1U & (~ ((IData)(vlSelf->S3_confermatb__DOT__dut__DOT__dd0) 
                                        >> 2U)))));
        bufp->chgBit(oldp+11,((1U & (~ ((IData)(vlSelf->S3_confermatb__DOT__dut__DOT__dd0) 
                                        >> 1U)))));
        bufp->chgBit(oldp+12,((1U & (~ (IData)(vlSelf->S3_confermatb__DOT__dut__DOT__dd0)))));
        bufp->chgBit(oldp+13,(vlSelf->S3_confermatb__DOT__dut__DOT__u1__DOT__aa1));
    }
    bufp->chgCData(oldp+14,(vlSelf->S3_confermatb__DOT__selez),3);
    bufp->chgBit(oldp+15,(vlSelf->S3_confermatb__DOT__conf));
    bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->S3_confermatb__DOT__selez) 
                                 >> 2U))));
}

void VS3_confermatb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root__trace_cleanup\n"); );
    // Init
    VS3_confermatb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VS3_confermatb___024root*>(voidSelf);
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
