// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtestcomplemento__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtestcomplemento::Vtestcomplemento(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtestcomplemento__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtestcomplemento::Vtestcomplemento(const char* _vcname__)
    : Vtestcomplemento(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtestcomplemento::~Vtestcomplemento() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtestcomplemento___024root___eval_debug_assertions(Vtestcomplemento___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestcomplemento___024root___eval_static(Vtestcomplemento___024root* vlSelf);
void Vtestcomplemento___024root___eval_initial(Vtestcomplemento___024root* vlSelf);
void Vtestcomplemento___024root___eval_settle(Vtestcomplemento___024root* vlSelf);
void Vtestcomplemento___024root___eval(Vtestcomplemento___024root* vlSelf);

void Vtestcomplemento::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestcomplemento::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtestcomplemento___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtestcomplemento___024root___eval_static(&(vlSymsp->TOP));
        Vtestcomplemento___024root___eval_initial(&(vlSymsp->TOP));
        Vtestcomplemento___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtestcomplemento___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtestcomplemento::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtestcomplemento::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtestcomplemento::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtestcomplemento::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtestcomplemento::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtestcomplemento___024root___eval_final(Vtestcomplemento___024root* vlSelf);

VL_ATTR_COLD void Vtestcomplemento::final() {
    Vtestcomplemento___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtestcomplemento::hierName() const { return vlSymsp->name(); }
const char* Vtestcomplemento::modelName() const { return "Vtestcomplemento"; }
unsigned Vtestcomplemento::threads() const { return 1; }
void Vtestcomplemento::prepareClone() const { contextp()->prepareClone(); }
void Vtestcomplemento::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtestcomplemento::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtestcomplemento___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtestcomplemento___024root__trace_init_top(Vtestcomplemento___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtestcomplemento___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestcomplemento___024root*>(voidSelf);
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtestcomplemento___024root__trace_decl_types(tracep);
    Vtestcomplemento___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtestcomplemento___024root__trace_register(Vtestcomplemento___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtestcomplemento::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtestcomplemento::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtestcomplemento___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
