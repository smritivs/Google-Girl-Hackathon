// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vxor3__Syms.h"


void Vxor3::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vxor3__Syms* __restrict vlSymsp = static_cast<Vxor3__Syms*>(userp);
    Vxor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vxor3::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vxor3__Syms* __restrict vlSymsp = static_cast<Vxor3__Syms*>(userp);
    Vxor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->a));
        tracep->chgBit(oldp+1,(vlTOPp->b));
        tracep->chgBit(oldp+2,(vlTOPp->c));
        tracep->chgBit(oldp+3,(vlTOPp->out));
    }
}

void Vxor3::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vxor3__Syms* __restrict vlSymsp = static_cast<Vxor3__Syms*>(userp);
    Vxor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
