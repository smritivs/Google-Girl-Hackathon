// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbcd_to_excess3_converter__Syms.h"


//======================

void Vbcd_to_excess3_converter::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vbcd_to_excess3_converter::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbcd_to_excess3_converter__Syms* __restrict vlSymsp = static_cast<Vbcd_to_excess3_converter__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vbcd_to_excess3_converter::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vbcd_to_excess3_converter::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vbcd_to_excess3_converter__Syms* __restrict vlSymsp = static_cast<Vbcd_to_excess3_converter__Syms*>(userp);
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vbcd_to_excess3_converter::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vbcd_to_excess3_converter__Syms* __restrict vlSymsp = static_cast<Vbcd_to_excess3_converter__Syms*>(userp);
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"bcd", false,-1, 3,0);
        tracep->declBus(c+2,"excess3", false,-1, 3,0);
        tracep->declBus(c+1,"bcd_to_excess3_converter bcd", false,-1, 3,0);
        tracep->declBus(c+2,"bcd_to_excess3_converter excess3", false,-1, 3,0);
    }
}

void Vbcd_to_excess3_converter::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vbcd_to_excess3_converter::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vbcd_to_excess3_converter__Syms* __restrict vlSymsp = static_cast<Vbcd_to_excess3_converter__Syms*>(userp);
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vbcd_to_excess3_converter::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vbcd_to_excess3_converter__Syms* __restrict vlSymsp = static_cast<Vbcd_to_excess3_converter__Syms*>(userp);
    Vbcd_to_excess3_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->bcd),4);
        tracep->fullCData(oldp+2,(vlTOPp->excess3),4);
    }
}
