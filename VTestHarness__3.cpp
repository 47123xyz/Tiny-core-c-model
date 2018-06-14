// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__17(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__17\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65705
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65705
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:32:9)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65716
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65719: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65719,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65727
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:32:9)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65738
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65741: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65741,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65749
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65760
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65763: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65763,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65771
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:32:9)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65782
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65785: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65785,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65793
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:32:9)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65804
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65807: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65807,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65815
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65826
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65829: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65829,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65837
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:32:9)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65848
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65851: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65851,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65859
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:32:9)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65870
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65873: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65873,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65881
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:32:9)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65892
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65895: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65895,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65903
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65914
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65917: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65917,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65925
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:32:9)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65936
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65939: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65939,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65947
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:32:9)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65958
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65961: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65961,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65969
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65980
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:65983: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",65983,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65991
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:32:9)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66002
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66005: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66005,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66013
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:32:9)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66024
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66027: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66027,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66035
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:32:9)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66046
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66049: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66049,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66057
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66068
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66071: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66071,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66079
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:32:9)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66090
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66093: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66093,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66101
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66112
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66115: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66115,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66123
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:32:9)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66134
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66137: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66137,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66145
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:32:9)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66156
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66159: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66159,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66167
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66178
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66181: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66181,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66189
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:32:9)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66200
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66203: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66203,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66211
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66222
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66225: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66225,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66233
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:32:9)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66244
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66247: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66247,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66255
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:32:9)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66266
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66269: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66269,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66277
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66288
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66291: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66291,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66299
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:32:9)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66310
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66313: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66313,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66321
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66332
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66335: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66335,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66343
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_502))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:32:9)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66354
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_502))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66357: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66357,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66365
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:32:9)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66376
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66379: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66379,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66387
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66398
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66401: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66401,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66409
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:32:9)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66420
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66423: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66423,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66431
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66442
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66445: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66445,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66453
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:32:9)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66464
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66467: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66467,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66475
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:32:9)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66486
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66489: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66489,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66497
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66508
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66511: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66511,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66519
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:32:9)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66530
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66533: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66533,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66541
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66552
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66555: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66555,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66563
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:32:9)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66574
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66577: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66577,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66585
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:32:9)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66596
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66599: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66599,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66607
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66618
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66621: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66621,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66629
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:32:9)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66640
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66643: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66643,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66651
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:32:9)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66662
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66665: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66665,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66673
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:32:9)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66684
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66687: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66687,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66695
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66706
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66709: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66709,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66739
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:32:9)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66750
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66753: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66753,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66761
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66772
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66775: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66775,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66783
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66794
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66797: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66797,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66827
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:32:9)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66838
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66841: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66841,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66849
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66860
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66863: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66863,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66871
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66882
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66885: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66885,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66915
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:32:9)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66926
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66929: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66929,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66937
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66948
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66951: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66951,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66959
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:66970
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:66973: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",66973,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67003
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67014
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67017: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67017,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67025
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67036
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67039: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67039,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67069
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67080
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67083: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67083,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67091
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67102
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67105: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67105,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67135
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:32:9)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67146
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67149: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67149,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67223
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_952))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:32:9)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67234
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_952))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67237: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67237,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67245
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_957))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:32:9)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67256
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_957))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67259: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67259,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67267
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_962))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:32:9)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67278
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_962))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67281: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67281,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67289
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_967))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:32:9)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67300
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_967))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67303: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67303,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67311
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_972))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:32:9)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67322
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_626) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_972))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67325: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67325,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67333
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:32:9)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67344
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67347: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67347,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67355
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1028))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:32:9)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67366
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1028))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67369: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67369,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67377
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1033))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:32:9)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67388
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1033))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67391: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67391,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67399
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1038))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:32:9)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67410
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1038))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67413: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67413,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67421
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:32:9)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67432
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67435: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67435,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67443
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1050))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at SystemBus.scala:32:9)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67454
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1050))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67457: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67457,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67465
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_907) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1130))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:32:9)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67476
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_907) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1130))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67479: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67479,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67487
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_977) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1100))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:32:9)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67498
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_977) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1100))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67501: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67501,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67509
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at SystemBus.scala:32:9)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67520
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67523: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67523,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67531
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1180))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:32:9)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:67542
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1180))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:67545: Assertion failed in %NTestHarness.dut.pbus.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",67545,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14081
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14081
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:33:9)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14092
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14095: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14095,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14103
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:33:9)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14114
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14117: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14117,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14125
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14136
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14139: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14139,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14147
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:33:9)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14158
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14161: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14161,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14169
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:33:9)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14180
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14183: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14183,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14191
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14202
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14205: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14205,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14213
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:33:9)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14224
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14227: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14227,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14235
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:33:9)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14246
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14249: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14249,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14257
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:33:9)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14268
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14271: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14271,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14279
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14290
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14293: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14293,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14301
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:33:9)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14312
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14315: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14315,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14323
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:33:9)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14334
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14337: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14337,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14345
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14356
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14359: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14359,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14367
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:33:9)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14378
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14381: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14381,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14389
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:33:9)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14400
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14403: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14403,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14411
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:33:9)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14422
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14425: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14425,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14433
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14444
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14447: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14447,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14455
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:33:9)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14466
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14469: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14469,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14477
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14488
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14491: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14491,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14499
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:33:9)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14510
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14513: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14513,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14521
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:33:9)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14532
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14535: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14535,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14543
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14554
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14557: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14557,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14565
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:33:9)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14576
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14579: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14579,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14587
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14598
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14601: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14601,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14609
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:33:9)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14620
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14623: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14623,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14631
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:33:9)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14642
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14645: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14645,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14653
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14664
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14667: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14667,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14675
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:33:9)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14686
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14689: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14689,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14697
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14708
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14711: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14711,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14719
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_502))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:33:9)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14730
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_502))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14733: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14733,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14741
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:33:9)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14752
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14755: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14755,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14763
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14774
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14777: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14777,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14785
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:33:9)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14796
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14799: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14799,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14807
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14818
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14821: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14821,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14829
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:33:9)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14840
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14843: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14843,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14851
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:33:9)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14862
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14865: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14865,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14873
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14884
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14887: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14887,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14895
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:33:9)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14906
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14909: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14909,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14917
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14928
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14931: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14931,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14939
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:33:9)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14950
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14953: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14953,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14961
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:33:9)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14972
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14975: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14975,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14983
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14994
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:14997: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",14997,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15005
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:33:9)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15016
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15019: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15019,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15027
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:33:9)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15038
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15041: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15041,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15049
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:33:9)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15060
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15063: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15063,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15071
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15082
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15085: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15085,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15115
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:33:9)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15126
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15129: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15129,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15137
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15148
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15151: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15151,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15159
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15170
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15173: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15173,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15203
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:33:9)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15214
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15217: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15217,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15225
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15236
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15239: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15239,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15247
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15258
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15261: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15261,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15291
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:33:9)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15302
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15305: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15305,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15313
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15324
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15327: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15327,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15335
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15346
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15349: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15349,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15379
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15390
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15393: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15393,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15401
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15412
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15415: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15415,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15445
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15456
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15459: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15459,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15467
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15478
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15481: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15481,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15511
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:33:9)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15522
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15525: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15525,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15599
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_952))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:33:9)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15610
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_952))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15613: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15613,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15621
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_957))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:33:9)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15632
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_957))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15635: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15635,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15643
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_962))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:33:9)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15654
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_962))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15657: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15657,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15665
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_967))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:33:9)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15676
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_967))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15679: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15679,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15687
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_972))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:33:9)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15698
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_972))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15701: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15701,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15709
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:33:9)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15720
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15723: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15723,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15731
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1028))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:33:9)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15742
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1028))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15745: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15745,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15753
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1033))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:33:9)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15764
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1033))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15767: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15767,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15775
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1038))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:33:9)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15786
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1038))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15789: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15789,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15797
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:33:9)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15808
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15811: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15811,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15819
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1050))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at SystemBus.scala:33:9)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15830
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1050))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15833: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15833,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15841
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_907) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1130))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:33:9)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15852
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_907) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1130))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15855: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15855,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15863
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_977) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1100))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:33:9)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15874
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_977) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1100))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15877: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15877,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15885
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at SystemBus.scala:33:9)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15896
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15899: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15899,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15907
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1180))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:33:9)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:15918
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1180))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:15921: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",15921,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17829
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17829
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:34:9)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17840
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:17843: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",17843,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17851
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:34:9)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17862
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:17865: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",17865,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17873
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17884
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:17887: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",17887,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17895
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:34:9)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17906
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:17909: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",17909,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17917
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:34:9)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17928
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:17931: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",17931,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17939
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17950
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:17953: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",17953,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17961
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:34:9)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17972
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:17975: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",17975,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17983
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:34:9)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17994
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:17997: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",17997,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18005
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:34:9)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18016
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18019: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18019,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18027
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18038
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18041: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18041,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18049
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:34:9)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18060
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18063: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18063,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18071
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:34:9)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18082
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18085: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18085,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18093
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18104
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18107: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18107,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18115
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:34:9)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18126
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18129: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18129,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18137
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:34:9)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18148
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18151: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18151,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18159
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:34:9)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18170
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18173: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18173,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18181
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18192
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18195: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18195,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18203
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:34:9)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18214
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18217: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18217,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18225
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18236
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18239: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18239,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18247
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:34:9)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18258
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18261: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18261,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18269
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:34:9)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18280
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18283: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18283,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18291
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18302
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18305: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18305,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18313
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:34:9)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18324
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18327: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18327,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18335
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18346
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18349: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18349,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18357
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:34:9)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18368
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18371: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18371,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18379
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:34:9)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18390
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18393: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18393,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18401
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18412
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18415: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18415,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18423
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:34:9)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18434
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18437: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18437,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18445
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18456
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18459: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18459,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18467
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_502))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:34:9)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18478
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_502))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18481: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18481,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18489
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:34:9)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18500
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18503: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18503,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18511
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18522
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18525: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18525,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18533
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:34:9)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18544
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18547: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18547,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18555
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18566
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18569: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18569,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18577
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:34:9)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18588
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18591: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18591,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18599
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:34:9)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18610
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18613: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18613,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18621
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18632
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18635: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18635,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18643
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:34:9)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18654
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18657: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18657,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18665
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18676
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18679: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18679,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18687
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:34:9)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18698
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18701: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18701,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18709
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:34:9)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18720
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18723: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18723,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18731
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18742
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18745: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18745,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18753
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:34:9)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18764
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18767: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18767,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18775
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:34:9)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18786
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18789: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18789,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18797
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:34:9)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18808
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18811: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18811,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18819
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18830
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18833: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18833,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18863
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:34:9)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18874
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18877: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18877,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18885
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18896
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18899: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18899,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18907
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18918
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18921: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18921,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18951
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:34:9)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18962
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18965: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18965,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18973
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18984
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:18987: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",18987,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:18995
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19006
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19009: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19009,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19039
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:34:9)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19050
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19053: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19053,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19061
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19072
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19075: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19075,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19083
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19094
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19097: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19097,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19127
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19138
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19141: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19141,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19149
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19160
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19163: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19163,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19193
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19204
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19207: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19207,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19215
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19226
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19229: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19229,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19259
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:34:9)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19270
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19273: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19273,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19347
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_952))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:34:9)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19358
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_952))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19361: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19361,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19369
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_957))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:34:9)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19380
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_957))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19383: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19383,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19391
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_962))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:34:9)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19402
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_962))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19405: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19405,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19413
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_967))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:34:9)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19424
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_967))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19427: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19427,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19435
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_972))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:34:9)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19446
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_972))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19449: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19449,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19457
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:34:9)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19468
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19471: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19471,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19479
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1028))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:34:9)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19490
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1028))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19493: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19493,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19501
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:34:9)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19512
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1033))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19515: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19515,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19523
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1038))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:34:9)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19534
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1038))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19537: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19537,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19545
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:34:9)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19556
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19559: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19559,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19567
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1050))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at SystemBus.scala:34:9)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19578
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1050))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19581: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19581,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19589
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_907) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1130))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:34:9)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19600
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_907) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1130))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19603: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19603,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19611
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_977) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1100))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:34:9)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19622
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_977) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1100))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19625: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19625,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19633
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at SystemBus.scala:34:9)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19644
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19647: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19647,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19655
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1180))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:34:9)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:19666
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1180))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:19669: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",19669,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20644
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20644
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20655
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20658: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20658,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20666
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20677
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20680: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20680,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20688
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20699
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20702: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20702,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20710
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20721
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20724: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20724,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20732
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20743
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20746: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20746,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20754
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20765
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20768: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20768,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20776
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20787
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20790: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20790,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20798
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20809
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20812: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20812,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20820
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20831
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20834: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20834,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20842
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20853
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20856: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20856,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20864
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20875
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20878: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20878,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20886
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20897
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20900: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20900,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20908
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20919
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20922: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20922,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20930
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20941
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20944: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20944,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20952
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20963
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20966: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20966,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20974
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20985
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:20988: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",20988,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20996
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21007
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21010: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21010,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21018
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21029
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21032: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21032,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21040
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21051
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21054: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21054,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21062
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21073
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21076: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21076,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21084
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21095
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21098: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21098,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21106
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21117
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21120: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21120,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21128
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21139
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21142: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21142,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21150
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21161
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21164: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21164,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21172
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21183
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21186: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21186,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21194
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21205
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21208: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21208,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21216
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21227
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21230: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21230,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21238
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21249
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21252: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21252,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21260
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21271
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21274: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21274,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21282
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_502))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21293
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_502))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21296: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21296,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21304
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21315
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21318: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21318,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21326
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21337
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21340: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21340,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21348
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21359
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21362: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21362,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21370
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21381
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21384: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21384,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21392
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21403
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21406: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21406,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21414
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_553))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21425
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_553))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21428: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21428,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21436
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21447
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21450: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21450,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21458
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21469
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21472: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21472,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21480
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21491
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					     >> 0xdU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21494: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21494,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21502
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21513
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21516: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21516,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21524
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21535
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21538: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21538,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21546
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21557
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21560: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21560,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21568
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21579
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21582: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21582,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21590
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21601
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
					  >> 0x10U)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21604: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21604,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21612
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21623
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21626: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21626,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21634
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21645
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21648: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21648,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21678
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21689
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21692: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21692,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21700
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21711
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21714: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21714,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21722
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21733
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21736: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21736,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21766
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21777
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21780: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21780,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21788
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21799
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21802: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21802,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21810
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21821
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21824: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21824,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21854
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21865
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21868: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21868,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21876
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21887
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21890: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21890,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21898
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21909
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21912: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21912,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21942
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21953
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21956: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21956,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21964
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:21975
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:21978: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",21978,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22008
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22019
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22022: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22022,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22030
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22041
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22044: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22044,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22074
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22085
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22088: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22088,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22162
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_952))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22173
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_952))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22176: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22176,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22184
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_957))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22195
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_957))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22198: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22198,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22206
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_962))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22217
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_962))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22220: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22220,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22228
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_967))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22239
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_967))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22242: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22242,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22250
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_972))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22261
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_972))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22264: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22264,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22272
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22283
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1023))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22286: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22286,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22294
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1028))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22305
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1028))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22308: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22308,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22316
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1033))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22327
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1033))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22330: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22330,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22338
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1038))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22349
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1038))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22352: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22352,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22360
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22371
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1043))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22374: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22374,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22382
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1050))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22393
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1050))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22396: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22396,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22404
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_907) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1130))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22415
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_907) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1072))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1130))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22418: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22418,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22426
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_977) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1100))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22437
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_977) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1100))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22440: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22440,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22448
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22459
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22462: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22462,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22470
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1180))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:22481
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1180))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:22484: Assertion failed in %NTestHarness.dut.sbus.coupler_to_pbus.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",22484,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v1 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v2 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram__v3 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_speculative 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_speculative;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_tag 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_tag;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_error__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_typ 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_typ;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_error__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188322
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188322
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"C0: %10# [%1#] pc=[%x] W[r%2#=%x][%1#] R[r%2#=%x] R[r%2#=%x] inst=[%x] DASM(%x)\n",
		       32,(IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_296),
		       1,(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_valid) 
			   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception)) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception))),
		       32,vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_pc,
		       5,(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_wen) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2239)))
			   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_waddr)
			   : 0U),32,vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_wdata,
		       1,(IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_wen),
		       5,(0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				   >> 0xfU)),32,vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2463,
		       5,(0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				   >> 0x14U)),32,vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2468,
		       32,((0xffff0000U & (((0U == 
					     (3U & 
					      (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_raw_inst)))
					     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						>> 0x10U)
					     : 0U) 
					   << 0x10U)) 
			   | (0xffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_raw_inst)),
		       32,((0xffff0000U & (((0U == 
					     (3U & 
					      (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_raw_inst)))
					     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						>> 0x10U)
					     : 0U) 
					   << 0x10U)) 
			   | (0xffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_raw_inst)));
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_address__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:112413
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:112416
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:112419
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_228 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_228;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115828
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115828
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115839
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:115842: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",115842,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115850
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115861
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:115864: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",115864,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115872
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115883
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:115886: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",115886,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115894
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_383))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115905
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_383))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:115908: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",115908,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115916
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115927
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:115930: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",115930,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115938
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115949
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:115952: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",115952,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115960
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_460)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115971
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_460)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:115974: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",115974,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115982
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115993
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:115996: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",115996,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116004
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116015
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116018: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116018,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116026
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116037
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116040: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116040,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116048
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_383))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116059
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_383))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116062: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116062,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116070
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116081
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116084: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116084,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116092
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116103
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116106: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116106,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116114
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116125
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116128: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116128,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116136
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_460)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116147
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_460)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116150: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116150,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116158
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_217))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116169
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_217))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116172: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116172,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116180
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116191
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116194: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116194,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116202
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116213
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116216: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116216,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116224
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116235
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116238: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116238,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116246
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_236))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116257
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_236))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116260: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116260,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116268
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_217))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116279
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_217))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116282: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116282,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116290
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116301
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116304: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116304,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116312
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116323
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116326: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116326,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116334
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116345
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116348: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116348,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116356
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_236))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116367
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_236))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116370: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116370,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116378
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_217))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116389
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_217))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116392: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116392,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116400
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116411
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116414: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116414,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116422
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116433
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116436: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116436,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116444
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116455
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116458: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116458,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116466
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_325))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116477
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_325))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116480: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116480,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116488
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116499
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116502: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116502,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116510
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116521
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116524: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116524,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116532
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116543
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116546: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116546,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116554
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116565
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116568: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116568,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116576
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_236))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116587
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_236))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116590: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116590,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116598
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116609
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116612: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116612,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116620
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116631
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116634: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116634,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116642
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116653
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116656: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116656,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116664
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116675
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116678: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116678,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116686
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_236))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116697
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_236))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116700: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116700,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116708
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116719
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116722: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116722,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116730
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116741
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ ((0x27fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116744: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116744,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116752
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116763
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_122))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116766: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116766,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116774
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_236))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116785
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_236))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116788: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116788,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116796
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116807
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116810: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116810,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116818
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116829
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116832: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116832,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116862
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116873
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116876: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116876,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116906
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116917
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116920: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116920,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116950
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116961
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:116964: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",116964,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:116994
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117005
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117008: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117008,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117038
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117049
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117052: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117052,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117082
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117093
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117096: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117096,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117148
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117159
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117162: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117162,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117214
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117225
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((0x27fU >= (0x3ffU & 
					   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
					    >> 2U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117228: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117228,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117346
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_644))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117357
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_644))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117360: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117360,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117368
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_649))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117379
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_649))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117382: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117382,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117390
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_654))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117401
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_654))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117404: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117404,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117412
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_659))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117423
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_659))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117426: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117426,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117434
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_664))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117445
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_18) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_664))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117448: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117448,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117456
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_715))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117467
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_715))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117470: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117470,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117478
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_700)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117489
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_700)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117492: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117492,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117500
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_725))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117511
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_725))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117514: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117514,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117522
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117533
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117536: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117536,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117544
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_706)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117555
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_706)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117558: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117558,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117566
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_709)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117577
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_709)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117580: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117580,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117588
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_599) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_764))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_822))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117599
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_599) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_764))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_822))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117602: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117602,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117610
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_669) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_792))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_843))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117621
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_669) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_792))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_843))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117624: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117624,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117632
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_853))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117643
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_853))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117646: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117646,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117654
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_872))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:45:34)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117665
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_872))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:117668: Assertion failed in %NTestHarness.dut.plic.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",117668,"");
	}
    }
}
