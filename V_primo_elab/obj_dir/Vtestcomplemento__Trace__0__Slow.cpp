// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestcomplemento__Syms.h"


VL_ATTR_COLD void Vtestcomplemento___024root__trace_init_sub__TOP__0(Vtestcomplemento___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("testcomplemento", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("comp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtestcomplemento___024root__trace_init_top(Vtestcomplemento___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root__trace_init_top\n"); );
    // Body
    Vtestcomplemento___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestcomplemento___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtestcomplemento___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestcomplemento___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestcomplemento___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtestcomplemento___024root__trace_register(Vtestcomplemento___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtestcomplemento___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtestcomplemento___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtestcomplemento___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtestcomplemento___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestcomplemento___024root__trace_const_0_sub_0(Vtestcomplemento___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestcomplemento___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root__trace_const_0\n"); );
    // Init
    Vtestcomplemento___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestcomplemento___024root*>(voidSelf);
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestcomplemento___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestcomplemento___024root__trace_const_0_sub_0(Vtestcomplemento___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+3,(4U),32);
}

VL_ATTR_COLD void Vtestcomplemento___024root__trace_full_0_sub_0(Vtestcomplemento___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestcomplemento___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root__trace_full_0\n"); );
    // Init
    Vtestcomplemento___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestcomplemento___024root*>(voidSelf);
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestcomplemento___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestcomplemento___024root__trace_full_0_sub_0(Vtestcomplemento___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->testcomplemento__DOT__Y),4);
    bufp->fullCData(oldp+2,((0xfU & ((IData)(1U) + 
                                     (~ (IData)(vlSelf->testcomplemento__DOT__Y))))),4);
}
