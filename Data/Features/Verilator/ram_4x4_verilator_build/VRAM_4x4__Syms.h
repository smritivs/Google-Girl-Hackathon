// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VRAM_4X4__SYMS_H_
#define _VRAM_4X4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VRAM_4x4.h"

// SYMS CLASS
class VRAM_4x4__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VRAM_4x4*                      TOPp;
    
    // CREATORS
    VRAM_4x4__Syms(VRAM_4x4* topp, const char* namep);
    ~VRAM_4x4__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
