// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__21(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__21\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp44,95,0,3);
    //char	__VpadToAlign20[4];
    VL_SIGW(__Vtemp45,95,0,3);
    //char	__VpadToAlign36[4];
    VL_SIGW(__Vtemp46,95,0,3);
    //char	__VpadToAlign52[4];
    VL_SIGW(__Vtemp47,95,0,3);
    //char	__VpadToAlign68[4];
    VL_SIGW(__Vtemp48,127,0,4);
    // Body
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26697
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26697
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26708
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26711: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26711,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26719
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:78:60)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26730
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26733: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26733,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26741
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26752
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26755: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26755,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26763
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					       >> 6U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26774
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					       >> 6U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26777: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26777,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26785
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26796
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26799: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26799,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26807
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26818
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26821: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26821,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26829
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26840
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26843: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26843,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26851
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26862
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26865: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26865,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26873
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:78:60)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26884
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26887: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26887,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26895
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26906
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26909: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26909,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26917
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					       >> 6U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26928
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					       >> 6U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26931: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26931,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26939
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26950
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26953: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26953,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26961
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26972
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26975: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26975,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26983
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:78:60)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26994
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:26997: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",26997,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27005
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27016
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27019: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27019,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27027
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_374))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27038
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_374))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27041: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27041,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27049
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27060
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27063: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27063,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27071
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27082
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27085: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27085,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27093
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27104
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27107: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27107,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27115
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_393))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27126
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_393))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27129: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27129,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27137
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_478))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27148
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_478))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27151: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27151,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27159
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27170
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27173: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27173,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27181
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27192
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27195: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27195,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27203
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27214
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27217: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27217,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27225
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_393))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27236
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_393))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27239: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27239,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27247
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_478))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27258
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_478))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27261: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27261,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27269
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27280
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27283: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27283,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27291
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27302
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27305: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27305,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27313
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27324
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27327: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27327,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27335
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_604))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27346
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_604))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27349: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27349,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27357
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_677))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27368
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_677))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27371: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27371,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27379
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27390
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27393: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27393,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27401
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27412
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27415: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27415,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27423
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27434
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27437: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27437,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27445
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_393))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27456
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_393))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27459: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27459,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27467
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_677))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27478
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_677))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27481: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27481,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27489
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27500
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27503: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27503,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27511
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27522
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27525: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27525,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27533
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27544
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					     >> 0xaU))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27547: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27547,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27555
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_393))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27566
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_393))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27569: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27569,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27577
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_317) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:78:60)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27588
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_317) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27591: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27591,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27599
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27610
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_171))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27613: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27613,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27621
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:78:60)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27632
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27635: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27635,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27643
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_393))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:78:60)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27654
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_635[2U] 
					  >> 0xdU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_393))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27657: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27657,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27665
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2dU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:78:60)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27676
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2dU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27679: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27679,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27687
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27698
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27701: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27701,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27709
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid sink ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:254 assert (sink_ok, \"'D' channel ReleaseAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27720
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27723: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27723,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27731
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						       >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27742
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						       >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27745: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27745,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27753
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27764
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27767: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27767,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27775
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27786
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27789: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27789,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27797
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:261 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27808
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27811: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27811,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27819
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						       >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27830
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						       >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27833: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27833,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27841
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27852
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27855: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27855,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27863
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27874
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27877: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27877,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27885
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:268 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27896
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27899: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27899,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27907
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						       >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:78:60)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27918
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						       >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27921: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27921,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27929
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27940
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27943: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27943,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27951
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27962
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27965: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27965,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27973
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid sink ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:275 assert (sink_ok, \"'D' channel AccessAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27984
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:27987: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",27987,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:27995
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28006
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28009: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28009,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28017
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28028
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28031: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28031,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28039
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid sink ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:282 assert (sink_ok, \"'D' channel AccessAckData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28050
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28053: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28053,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28061
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28072
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28075: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28075,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28083
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28094
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_922))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28097: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28097,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28105
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid sink ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:289 assert (sink_ok, \"'D' channel HintAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28116
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28119: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28119,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28127
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:78:60)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28138
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						     >> 0x2bU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28141: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28141,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28215
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1096))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28226
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1096))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28229: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28229,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28237
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1101))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28248
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1101))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28251: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28251,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28259
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1106))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28270
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1106))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28273: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28273,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28281
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1111))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28292
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1111))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28295: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28295,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28303
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1116))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28314
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_617) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1116))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28317: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28317,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28325
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1167))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28336
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1167))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28339: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28339,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28347
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1172))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28358
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1172))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28361: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28361,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28369
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1177))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28380
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1177))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28383: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28383,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28391
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1182))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28402
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1182))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28405: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28405,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28413
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1187))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:78:60)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28424
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1187))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28427: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28427,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28435
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1194))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at SystemBus.scala:78:60)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28446
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1194))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28449: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28449,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28457
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1051) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1216))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1274))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:78:60)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28468
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1051) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1216))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1274))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28471: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28471,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28479
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1121) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1244))) 
			  & (6U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1295))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:78:60)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28490
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1121) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1244))) 
			  & (6U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						  >> 0x2dU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1295))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28493: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28493,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28501
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1305))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at SystemBus.scala:78:60)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28512
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1305))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28515: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28515,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28523
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1324))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:78:60)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28534
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1324))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:28537: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.fixer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",28537,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:32767
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:32767
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_549))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:32778
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_549))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:32781: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",32781,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:32789
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_720))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:32800
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_720))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:32803: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",32803,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:32811
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_731))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:32822
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_731))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:32825: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",32825,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168491
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168491
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1473))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at DCache.scala:330 assert(!s2_store_valid || !pstore1_held)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168502
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1473))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:168505: Assertion failed in %NTestHarness.dut.tile.dcache\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",168505,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168513
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2649))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at DCache.scala:434 assert(!(tl_out.d.valid && res))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168524
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2649))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:168527: Assertion failed in %NTestHarness.dut.tile.dcache\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",168527,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168557
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2678) 
			   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsUncached)) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__d_last)) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: An AccessAck was unexpected by the dcache.\n    at DCache.scala:465 assert(f, \"An AccessAck was unexpected by the dcache.\") // TODO must handle Ack coming back on same cycle!\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168568
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2678) 
			   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsUncached)) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__d_last)) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedInFlight_0) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:168571: Assertion failed in %NTestHarness.dut.tile.dcache\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",168571,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168579
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2678) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsUncached))) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_ack_wait) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: A ReleaseAck was unexpected by the dcache.\n    at DCache.scala:478 assert(release_ack_wait, \"A ReleaseAck was unexpected by the dcache.\") // TODO should handle Ack coming back on same cycle!\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168590
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2678) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsUncached))) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_ack_wait) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:168593: Assertion failed in %NTestHarness.dut.tile.dcache\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",168593,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168623
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3026) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3034))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at DCache.scala:645 assert(!s2_valid_hit && !s2_uncached)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168634
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3026) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3034))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:168637: Assertion failed in %NTestHarness.dut.tile.dcache\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",168637,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168645
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_phys) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3043))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at DCache.scala:654 assert(!s2_valid || s2_hit_valid)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168656
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_phys) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3043))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:168659: Assertion failed in %NTestHarness.dut.tile.dcache\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",168659,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168667
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3066))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at DCache.scala:657 assert(!(s2_valid_masked && s2_req.cmd.isOneOf(M_XLR, M_XSC)))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168678
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3066))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:168681: Assertion failed in %NTestHarness.dut.tile.dcache\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",168681,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168689
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__doUncachedResp) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_hit)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at DCache.scala:666 assert(!s2_valid_hit)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168700
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__doUncachedResp) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_hit)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:168703: Assertion failed in %NTestHarness.dut.tile.dcache\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",168703,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:112249
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:112252
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:112255
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:112258
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:112261
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:112264
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:113498
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:113498
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_609))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:167 assert (!out.w.fire() || w_todo =/= UInt(0)) // underflow impossible\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:113509
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_609))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:113512: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.axi4frag\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",113512,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:113520
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_627))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:176 assert (!out.w.valid || !in_w.bits.last || w_last)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:113531
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_627))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:113534: Assertion failed in %NTestHarness.dut.fbus.coupler_from_port_named_slave_port_axi4.axi4frag\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",113534,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29837
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29837
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29848
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:29851: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",29851,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29859
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29870
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:29873: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",29873,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29881
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29892
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:29895: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",29895,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29903
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29914
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:29917: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",29917,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29925
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29936
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:29939: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",29939,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29947
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29958
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:29961: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",29961,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29969
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29980
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:29983: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",29983,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29991
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30002
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30005: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30005,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30013
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30024
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30027: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30027,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30035
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30046
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30049: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30049,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30057
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30068
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30071: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30071,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30079
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30090
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30093: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30093,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30101
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30112
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30115: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30115,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30123
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30134
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30137: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30137,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30145
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30156
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30159: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30159,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30167
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_354))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30178
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_354))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30181: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30181,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30189
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30200
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30203: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30203,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30211
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30222
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30225: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30225,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30233
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30244
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30247: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30247,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30255
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_373))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30266
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_373))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30269: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30269,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30277
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_458))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30288
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_458))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30291: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30291,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30299
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30310
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30313: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30313,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30321
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30332
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30335: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30335,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30343
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30354
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30357: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30357,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30365
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_373))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30376
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_373))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30379: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30379,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30387
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_458))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30398
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_458))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30401: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30401,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30409
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30420
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30423: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30423,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30431
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30442
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30445: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30445,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30453
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30464
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30467: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30467,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30475
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_584))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30486
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_584))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30489: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30489,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30497
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_657))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30508
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_657))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30511: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30511,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30519
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30530
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30533: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30533,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30541
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30552
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30555: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30555,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30563
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30574
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30577: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30577,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30585
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_373))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30596
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_373))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30599: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30599,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30607
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_657))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30618
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_657))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30621: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30621,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30629
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30640
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30643: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30643,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30651
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30662
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30665: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30665,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30673
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30684
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30687: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30687,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30695
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_373))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30706
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_373))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30709: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30709,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30717
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_297) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30728
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_297) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30731: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30731,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30739
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30750
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30753: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30753,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30761
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30772
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30775: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30775,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30783
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_373))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30794
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_373))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30797: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30797,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30805
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x29U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30816
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x29U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30819: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30819,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30827
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30838
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30841: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30841,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30849
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid sink ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:254 assert (sink_ok, \"'D' channel ReleaseAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30860
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30863: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30863,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30871
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						       >> 0x23U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30882
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						       >> 0x23U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30885: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30885,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30893
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30904
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30907: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30907,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30915
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30926
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30929: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30929,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30937
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:261 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30948
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30951: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30951,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30959
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						       >> 0x23U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30970
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						       >> 0x23U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30973: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30973,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30981
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:30992
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:30995: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",30995,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31003
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31014
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31017: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31017,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31025
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:268 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31036
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31039: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31039,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31047
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						       >> 0x23U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31058
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((2U <= (0xfU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						       >> 0x23U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31061: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31061,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31069
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31080
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31083: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31083,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31091
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31102
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31105: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31105,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31113
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid sink ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:275 assert (sink_ok, \"'D' channel AccessAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31124
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31127: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31127,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31135
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31146
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31149: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31149,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31157
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31168
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31171: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31171,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31179
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid sink ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:282 assert (sink_ok, \"'D' channel AccessAckData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31190
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31193: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31193,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31201
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31212
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31215: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31215,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31223
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31234
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31237: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31237,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31245
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid sink ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:289 assert (sink_ok, \"'D' channel HintAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31256
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((1U > (1U & (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						    >> 0x21U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31259: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31259,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31267
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31278
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31281: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31281,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31355
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1056))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31366
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1056))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31369: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31369,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31377
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1061))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31388
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1061))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31391: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31391,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31399
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1066))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31410
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1066))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31413: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31413,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31421
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1071))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31432
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1071))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31435: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31435,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31443
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1076))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31454
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1076))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31457: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31457,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31465
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1127))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31476
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1127))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31479: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31479,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31487
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1132))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31498
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1132))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31501: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31501,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31509
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1137))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31520
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1137))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31523: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31523,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31531
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1142))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31542
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1142))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31545: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31545,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31553
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1147))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31564
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1147))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31567: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31567,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31575
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31586
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_818) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31589: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31589,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31597
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1011) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1176))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1234))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31608
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1011) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1176))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1234))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31611: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31611,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31619
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1081) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1204))) 
			  & (6U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1255))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31630
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1081) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1204))) 
			  & (6U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
						  >> 0x29U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1255))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31633: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31633,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31641
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1265))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31652
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1265))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31655: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31655,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31663
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1284))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at RocketSubsystem.scala:86:20)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31674
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1284))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:31677: Assertion failed in %NTestHarness.dut.sbus.coupler_from_tile_named_tile.cork.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",31677,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:141
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random 
	= VL_RANDOM_I(32);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:194
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__R0_random 
	= VL_RANDOM_I(32);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:174
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__reg_R0_ren 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_252;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:176
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_252) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__reg_R0_addr 
	    = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr___05FT_63_data) 
			 >> 2U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:124
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_en) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_351)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:191214
    if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_764) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_728 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:110204
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_350;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_data__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115727
    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_668) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_632 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:119352
    if (vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_668) {
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_632 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_param;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135772
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_668) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_632 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_param;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:191211
    if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_764) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_726 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39981
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_data__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39981
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_data___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_data__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39984
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39987
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_391;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:196323
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_id___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_id__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:196323
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_id___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_id__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:171929
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_284) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_304 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_307;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:171502
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__saved_mask 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_mask___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:157203
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__mem_0_param = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:157212
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__mem_0_sink = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:45
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random 
	= VL_RANDOM_I(32);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:126
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_351)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_364;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57724
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1056) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1016 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61239
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1014 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:131275
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__mem_0_param = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:131278
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__mem_0_size = 2U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:131281
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__mem_0_source = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37891
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_716 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42214
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_716 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57715
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1056) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1010 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61230
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1008 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100822
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1084 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_param;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103805
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1084 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_param;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37924
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_786 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42247
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_786 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57718
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1056) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1012 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61233
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1010 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40335
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_burst__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40338
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_lock__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40341
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_cache__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40344
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_prot__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40347
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_qos__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100852
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1152 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100861
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1158 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103835
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1152 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103844
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1158 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107588
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1230) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1184 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107597
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1230) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1190 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159143
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1150) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1104 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159152
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1150) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1110 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161636
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1150) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1104 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161645
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1150) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1110 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172823
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1112 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172832
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1118 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91336
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1084 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91366
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1152 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91375
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1158 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94283
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1084 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94313
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1152 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94322
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1158 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97281
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1084 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97311
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1152 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97320
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1158 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:132105
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__mem_0_resumereq 
	    = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLWrDataVal 
		     >> 0x1eU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:132108
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__mem_0_hartsel 
	    = (0x3ffU & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLWrDataVal 
			 >> 0x10U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:132111
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__mem_0_ackhavereset 
	    = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLWrDataVal 
		     >> 0x1cU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91333
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1082 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91369
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1154 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94280
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1082 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94316
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1154 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97278
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1082 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97314
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1154 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:190507
    vlTOPp->TestHarness__DOT__dut__DOT__asyncXing__DOT__SynchronizerShiftReg_w2_d3__DOT__sync_0 
	= vlTOPp->TestHarness__DOT__dut__DOT__asyncXing__DOT__SynchronizerShiftReg_w2_d3__DOT__sync_1;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133264
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1114 
	    = (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133267
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1116 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
		     >> 2U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:157215
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__mem_0_data 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8342;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:25
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT___T_28)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39984
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_strb__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_strb__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:128
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_351))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_351) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v0 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data;
	    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram__v0 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_364;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61227
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1006 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_31;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:27
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT___T_28)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr 
	    = (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__dataArb__DOT___GEN_20) 
			 >> 2U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40332
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size__v0 
	    = (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_461));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40350
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_user__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_410;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_user__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115724
    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_668) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_630 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:157206
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__mem_0_size 
	    = (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:157209
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__mem_0_source 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
		     >> 2U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:122434
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_726) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_678 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1419 
			     >> 0x27U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:122437
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_726) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_680 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1419 
			     >> 0x25U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:122440
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_726) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_682 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1419 
			     >> 0x23U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:122446
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_726) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_686 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1419 
			     >> 0x21U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64501
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1044) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1045) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_error 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188037
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_load_use 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_load_use;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100819
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1082 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_opcode;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103802
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1082 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_opcode;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:131290
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__mem_0_data 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61242
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_977) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1017 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___GEN_33;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:191250
    if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_842) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_800 
	    = vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34533
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34533
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:110207
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_resp__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data)
	        ? 2U : 0U);
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_resp__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39987
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_last__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_last___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_last__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:110041
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_349) {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_317)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_340_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37933
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_753) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_793 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_error;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42256
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_753) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_793 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_error;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:93
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__RW0_random 
	= VL_RANDOM_I(32);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159155
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1073) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1113 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188047
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_replay 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1557) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_148));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115733
    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_668) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_636 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_441;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91378
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1121) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1161 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94325
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1121) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1161 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97323
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1121) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1161 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172835
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1081) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1121 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:191220
    if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_764) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_732 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:122449
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_649) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_689 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1419));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57727
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_979) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1019 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:122480
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_831 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_850)
					   ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_847));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:125470
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_831 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_850)
					   ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_847));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128934
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1273 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1292)
					   ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1289));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:197205
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_237 
	= (0xfffU & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_3));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:197214
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_352 
	= (0xfffU & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_8));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:76
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_ren 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_en) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100864
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1121) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1161 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103847
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1121) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1161 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107600
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1153) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1193 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:78
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_en) 
	 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_addr 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_addr;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54074
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1056) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1008 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
			     >> 0x2cU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54077
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1056) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1010 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
			     >> 0x2aU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54080
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1056) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1012 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
			     >> 0x27U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54083
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1056) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1014 
	    = (0x1fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
				>> 0x22U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54086
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1056) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1016 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
			     >> 0x21U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29751
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1110 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
			     >> 0x29U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29754
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1112 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
			     >> 0x27U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29757
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1114 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
			       >> 0x23U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29760
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1116 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
			     >> 0x22U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29763
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1118 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
			     >> 0x21U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37927
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_788 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42250
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_788 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:191241
    if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_842) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_794 
	    = vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__da_bits_opcode;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54089
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_979) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1019 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155609
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_reserved0 = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155612
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_progbufsize = 0x10U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155615
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_reserved1 = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155618
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_reserved2 = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155647
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_datacount = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155657
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_reserved0 = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91363
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1150 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94310
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1150 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97308
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1150 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54047
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_978) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_942 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68493
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_716 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:71857
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_716 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:74831
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_716 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:78161
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_716 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81111
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_716 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84439
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_716 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:87425
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_754) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_718 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:175995
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_754) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_718 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:196335
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_burst__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_burst___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_burst__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:196335
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_burst___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29766
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1081) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1121 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70606
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_param 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:76922
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_param 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:83202
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_param 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91372
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1156 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94319
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97317
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1156 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:131287
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__mem_0_mask 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195221
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_252) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_full = 1U;
	} else {
	    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_250) {
		vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_full = 0U;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188202
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___GEN_216) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT____Vlvbound3 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_wdata;
	if ((0x1eU >= (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_waddr))))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1161__v0 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT____Vlvbound3;
	    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1161__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1161__v0 
		= (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__rf_waddr)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:191217
    if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_764) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_730 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:110338
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_resp__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data)
	        ? 2U : 0U);
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_resp__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:122457
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_744 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_579) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_744 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_750)) 
		   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_748));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:125447
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_744 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_579) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_744 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_750)) 
		   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_748));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:802
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1150 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			     >> 0x2dU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:805
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1152 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			     >> 0x2bU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:808
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1154 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			       >> 0x27U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:811
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1156 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			       >> 0x22U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:814
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1158 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			     >> 0x21U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8344
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1150 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			     >> 0x2dU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8347
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1152 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			     >> 0x2bU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8350
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1154 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			       >> 0x27U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8353
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1156 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			       >> 0x22U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8356
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1158 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			     >> 0x21U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115736
    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_668) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_638 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_439;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:191223
    if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_764) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_734 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91342
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1088 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94289
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1088 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97287
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1088 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159146
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1150) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161639
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1150) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1106 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172826
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1114 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128911
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1176 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1011) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1176 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1182)) 
		   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1180));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:87464
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_832) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_792 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176034
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_832) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_792 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:87455
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_832) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_786 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176025
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_832) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_786 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:197206
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_239 
	= (0xffU & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_4));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:197215
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_354 
	= (0xffU & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_9));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:817
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1121) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1161 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8359
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1121) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1161 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:87458
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_832) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_788 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176028
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_832) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_788 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68526
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_786 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:71890
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_786 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:74864
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_786 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___GEN_0;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:78194
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_786 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___GEN_0;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81144
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_786 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84472
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_786 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:74873
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_753) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_793 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_329;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:78203
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_753) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_793 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_329;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81153
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_753) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_793 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_329;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84481
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_753) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_793 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_329;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155621
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__errorBusy) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr = 1U;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__errorException) {
		vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr = 3U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__errorUnsupported) {
		    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr = 2U;
		} else {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__errorHaltResume) {
			vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr = 4U;
		    } else {
			if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEn) {
			    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr 
				= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_1586;
			}
		    }
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188064
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killx)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_xcpt_interrupt) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_xcpt)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:87467
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_755) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_795 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176037
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_755) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_795 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68535
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_753) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_793 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_329;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:71899
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_753) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_793 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_329;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:122408
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_648) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_610 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:125398
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_648) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_610 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:125424
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_726) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_678 
	    = (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128862
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1042 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155650
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOWrEn) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf 
		= (0xffffU & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOWrDataVal 
			      >> 0x10U));
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155660
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOWrEn) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata 
		= (1U & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOWrDataVal);
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:193293
    if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188057
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt_interrupt 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__take_pc)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_xcpt_interrupt));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:131272
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__mem_0_opcode 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:87452
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_832) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_784 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176022
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_832) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_784 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49710
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_764) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_726 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
		     >> 0x10U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49713
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_764) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_728 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
		     >> 0xdU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49716
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_764) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_730 
	    = (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
		       >> 9U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49719
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_764) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_732 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
			>> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49722
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_764) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_734 
	    = (0x3fffU & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
			   << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[1U] 
					>> 4U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:171323
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT___T_169) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__acq_address 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_421;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44980
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_714 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
		     >> 0x10U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44983
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_716 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
		     >> 0xdU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44986
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_718 
	    = (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
		       >> 9U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44989
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_720 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
			>> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44992
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_722 
	    = (0x7fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
			       << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[1U] 
					    >> 4U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:87461
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_832) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_790 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176031
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_832) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_790 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57682
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_978) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_940 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_971[2U] 
		     >> 0xfU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57685
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_978) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_942 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_971[2U] 
		     >> 0xcU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57688
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_978) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_944 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_971[2U] 
		     >> 9U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57691
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_978) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_946 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_971[2U] 
			>> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57694
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_978) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_948 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_971[2U] 
		<< 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_971[1U] 
			     >> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:121850
    if (vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_341) {
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__timecmp_0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_348;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:118636
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__priority_2 
	= (3U & vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___GEN_8);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188085
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1910)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_load 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1947;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188090
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1910)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_store 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1983;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117721
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway__DOT__inFlight = 0U;
    } else {
	if ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__completedDevs))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway__DOT__inFlight = 0U;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:118659
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__maxDevs_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_374)
	    ? (4U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_363))
	    : 2U);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:118635
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__priority_1 
	= (3U & vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___GEN_7);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161648
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1113 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117721
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway_1__DOT__inFlight = 0U;
    } else {
	if ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__completedDevs))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway_1__DOT__inFlight = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway_1__DOT___T_10) {
		vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway_1__DOT__inFlight = 1U;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117721
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway_2__DOT__inFlight = 0U;
    } else {
	if ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__completedDevs))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway_2__DOT__inFlight = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway_2__DOT___T_10) {
		vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway_2__DOT__inFlight = 1U;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:113474
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_656_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_678) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_656_0 
		= ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_11))
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_680));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:113485
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_656_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_683) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_656_1 
		= ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_11))
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_685));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:856
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1313 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1332)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1329));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:3582
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1313 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1332)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1329));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8398
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1313 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1332)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1329));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:11124
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1313 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1332)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1329));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14049
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1169 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1188)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1185));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17797
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1169 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1188)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1185));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20612
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1169 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1188)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1185));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:23824
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1313 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1332)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1329));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26665
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1313 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1332)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1329));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29805
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1273 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1292)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1289));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37972
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_945 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_964)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_961));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42295
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_945 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_964)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_961));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45064
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_945 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_964)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_961));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49794
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_957 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_976)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_973));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54128
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1161 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1180)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1177));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57766
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1171 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1190)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1187));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61281
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1169 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1188)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1185));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65673
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1169 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1188)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1185));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68574
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_945 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_964)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_961));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:71938
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_945 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_964)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_961));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:74912
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_935 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_954)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_951));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:78242
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_935 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_954)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_951));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81192
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_935 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_954)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_951));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84520
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_935 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_954)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_951));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:87506
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_947 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_966)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_963));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91417
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1313 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1332)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1329));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94364
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1313 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1332)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1329));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97362
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1313 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1332)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1329));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100903
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1313 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1332)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1329));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103886
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1313 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1332)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1329));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107639
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1345 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1364)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1361));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115796
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_861 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_880)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:119421
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_851 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_870)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_867));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133304
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1263 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1282)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1279));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135841
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_851 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_870)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_867));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159194
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1265 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1284)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1281));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161683
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1265 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1284)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1281));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172874
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1273 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1292)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1289));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176076
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_947 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_966)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_963));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:191292
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_957 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_976)
	        ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_973));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117900
    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_data__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:156565
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg = 1U;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartGoingWrEn) {
		vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg = 0U;
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:821
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1201 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1310));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:3547
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1201 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1310));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8363
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1201 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1310));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:11089
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1201 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1310));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14014
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1057 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1166);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17762
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1057 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1166);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20577
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1057 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1166);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:23789
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1201 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1310));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26630
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1201 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1310));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:29770
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1161 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1270));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37937
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_833 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_942);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42260
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_833 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_942);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45029
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_833 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_942);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49759
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_845 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_954);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57731
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1059 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1168);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61246
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1057 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1166);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65638
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1057 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1166);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68539
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_833 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_942);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:71903
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_833 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_942);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:87471
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_835 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_944);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91382
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1201 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1310));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94329
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1201 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1310));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97327
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1201 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1310));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100868
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1201 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1310));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103851
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1201 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1310));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107604
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1233 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1342));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115768
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[1U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[2U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[3U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[4U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[5U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[6U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[7U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[8U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[9U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xaU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xbU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xcU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xdU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xeU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xfU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x10U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x11U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x12U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x13U] = 0U;
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[0U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[1U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[1U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[2U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[2U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[3U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[3U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[4U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[4U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[5U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[5U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[6U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[6U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[7U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[7U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[8U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[8U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[9U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[9U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xaU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[0xaU];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xbU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[0xbU];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xcU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[0xcU];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xdU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[0xdU];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xeU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[0xeU];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xfU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[0xfU];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x10U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[0x10U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x11U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[0x11U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x12U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[0x12U];
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x13U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_858[0x13U];
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:169103
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? VL_ULL(0)
	    : (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___GEN_14[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___GEN_14[0U]))));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172839
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1161 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1270));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176041
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_835 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_944);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:191257
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_845 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_954);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54093
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1059 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1158);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:74877
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_833 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_932);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:78207
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_833 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_932);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81157
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_833 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_932);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84485
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_833 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) ? 0U
	    : vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_932);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:119393
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[1U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[2U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[3U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[4U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[5U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[6U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[7U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[8U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[9U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xaU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xbU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xcU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xdU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xeU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xfU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x10U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x11U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x12U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x13U] = 0U;
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[0U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[1U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[1U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[2U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[2U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[3U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[3U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[4U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[4U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[5U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[5U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[6U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[6U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[7U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[7U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[8U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[8U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[9U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[9U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xaU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[0xaU];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xbU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[0xbU];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xcU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[0xcU];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xdU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[0xdU];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xeU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[0xeU];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xfU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[0xfU];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x10U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[0x10U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x11U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[0x11U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x12U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[0x12U];
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x13U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_848[0x13U];
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133277
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1161 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1260));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135813
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[1U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[2U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[3U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[4U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[5U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[6U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[7U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[8U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[9U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xaU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xbU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xcU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xdU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xeU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xfU] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x10U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x11U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x12U] = 0U;
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x13U] = 0U;
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[0U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[1U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[1U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[2U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[2U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[3U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[3U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[4U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[4U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[5U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[5U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[6U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[6U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[7U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[7U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[8U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[8U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[9U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[9U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xaU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[0xaU];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xbU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[0xbU];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xcU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[0xcU];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xdU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[0xdU];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xeU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[0xeU];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xfU] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[0xfU];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x10U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[0x10U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x11U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[0x11U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x12U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[0x12U];
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x13U] 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_848[0x13U];
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195830
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37894
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_718 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42217
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_718 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172790
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1042 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
		     >> 0xcU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172793
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1044 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
		     >> 9U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172796
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1046 
	    = (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
		       >> 5U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172799
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1048 
	    = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
		     >> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172802
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1050 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
		<< 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[1U] 
			     >> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37900
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_722 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42223
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_722 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:110210
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_last__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1031;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_last__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:180023
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_stalld)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_63) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_pf_inst 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_82;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:180028
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_stalld)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_63) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_ae_inst 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_83;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188283
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__dcache_blocked 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2328;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:118655
    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_1231) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__enables_0_2 
	    = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_data___05FT_55_data 
		     >> 2U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40329
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len__v0 
	    = (0xffU & (~ (0x7fffffU & (((IData)(0x3ffU) 
					 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					>> 2U))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188080
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1910)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_slow_bypass 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_slow_bypass;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40326
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:197198
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_235 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_330) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_235 
		= (0U != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_240));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:197207
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_350 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_445) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_350 
		= (0U != (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_355));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:118652
    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_1187) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__enables_0_1 
	    = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_data___05FT_55_data 
		     >> 1U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41216
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_507 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_493) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_507 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_512;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100825
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1086 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_size;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103808
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1086 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_size;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161656
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1168 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1003) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1168 
		= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1174)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1172));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195423
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:156587
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractGeneratedMem_1 
	    = ((0x40000U & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24048)
	        ? 0x13U : 0x100073U);
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195198
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_202) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_full = 1U;
	} else {
	    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_200) {
		vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_full = 0U;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:156576
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractGeneratedMem_0 
	    = ((0x20000U & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24048)
	        ? ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24048)
		    ? vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24121
		    : vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24126)
	        : 0x13U);
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:196332
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_size___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_size__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:196332
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_size___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_size__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:115730
    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_668) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_634 
	    = (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_383));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:110019
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_263 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_270) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_263 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_269)) 
		   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_273));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:171067
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_215 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_replay) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s0_valid))));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61200
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_940 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:171499
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__saved_address 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_address___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:121854
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__ipi_0 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
		 & vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___GEN_3));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91339
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1086 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94286
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1086 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97284
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1086 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61206
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_944 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34536
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34536
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:118645
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_435) {
	    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_2 
		= (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__claiming_0) 
			    >> 2U)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34536
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34536
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:196326
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_addr__v0 
	    = (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr___05FT_63_data);
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_addr__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:196326
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr__v0 
	    = (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data);
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:118638
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_430) {
	    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_1 
		= (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__claiming_0) 
			    >> 1U)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195813
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__do_enq) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_last__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_last__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195823
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1 
		= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33680
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183627
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_wfi = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1722) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_wfi = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1717) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_wfi = 1U;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:178
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_218) {
	if ((1U & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext_W0_mask))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v0 
		= (0xffU & vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data___05FT_63_data);
	    vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v0 = 1U;
	    vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v0 = 0U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v0 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data) 
			     >> 2U));
	}
	if ((2U & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext_W0_mask))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v1 
		= (0xffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data___05FT_63_data 
			    >> 8U));
	    vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v1 = 1U;
	    vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v1 = 8U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v1 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data) 
			     >> 2U));
	}
	if ((4U & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext_W0_mask))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v2 
		= (0xffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data___05FT_63_data 
			    >> 0x10U));
	    vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v2 = 1U;
	    vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v2 = 0x10U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v2 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data) 
			     >> 2U));
	}
	if ((8U & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext_W0_mask))) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v3 
		= (0xffU & (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data___05FT_63_data 
			    >> 0x18U));
	    vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v3 = 1U;
	    vlTOPp->__Vdlyvlsb__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v3 = 0x18U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram__v3 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data) 
			     >> 2U));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195801
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_id;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195810
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_user__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_user;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_user__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_user__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195807
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_sel1)
	        ? 0U : 3U);
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:180013
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_stalld)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_63) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fpc 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_81;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159113
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1072) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1036 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159110
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1072) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1034 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155674
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_control 
		= (0xffffffU & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal);
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_control = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:71071
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_306) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_326 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_329;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:77387
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_306) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_326 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_329;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:83667
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_306) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_326 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_329;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:111429
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1076_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1101) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1076_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1104;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:111436
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1076_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1106) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1076_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1109;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155557
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartHaltedWrEn) {
		if ((0U == (0x3ffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0 = 1U;
		}
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartResumingWrEn) {
		    if ((0U == (0x3ffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data))) {
			vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0 = 0U;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0 = 0U;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:187948
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1910)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_fp 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_fp;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195804
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data__v0 
	    = (((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_273)
				  ? (vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext_R0_data 
				     >> 0x18U) : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_291_3)) 
				<< 0x18U)) | (0xff0000U 
					      & (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_273)
						   ? 
						  (vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext_R0_data 
						   >> 0x10U)
						   : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_291_2)) 
						 << 0x10U))) 
	       | ((0xff00U & (((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_273)
			        ? (vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext_R0_data 
				   >> 8U) : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_291_1)) 
			      << 8U)) | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_273)
						   ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext_R0_data
						   : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_291_0)))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:91345
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1090 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:94292
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1090 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:97290
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1090 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155593
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haveResetBitRegs_0 = 1U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_45) {
	    if ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0))) {
		vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haveResetBitRegs_0 = 0U;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:193296
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195416
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1 
		= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155667
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype 
		= (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
			    >> 0x18U));
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195423
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159116
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1072) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1038 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_size;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155576
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumereq) {
		vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs_0 = 1U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartResumingWrEn) {
		    if ((0U == (0x3ffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data))) {
			vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs_0 = 0U;
		    }
		}
	    }
	} else {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs_0 = 0U;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34665
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34665
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34794
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:169113
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tl_error 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tl_error_0;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34665
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34665
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34794
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195406
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_user__v0 
	    = (0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_240));
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_user__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_user__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:121839
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__time__024 = VL_ULL(0);
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_497) {
	    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__time__024 
		= vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_504;
	} else {
	    if ((0x63U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__value))) {
		vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__time__024 
		    = vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_185;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195403
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr__v0 
	    = (0xfffU & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_241)) 
			    | (3U & (~ (0x1ffU & ((IData)(3U) 
						  << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_20))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188185
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_reg_fence = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_mem_busy)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_reg_fence = 0U;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_fence_next) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_reg_fence = 1U;
	    } else {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_mem_busy)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_reg_fence = 0U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159122
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1072) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1042 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_address;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100858
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1156 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103841
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1156 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107594
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1230) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1188 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:191247
    if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_842) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_798 
	    = vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:169110
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_disparity = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188161
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_flush_pipe 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killm)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_flush_pipe));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188272
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2203 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2245) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2203 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2244;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ll_wen) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2203 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2212;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188095
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1910) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_sfence = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_sfence = 0U;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:135781
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_668) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_638 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_439;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117903
    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_460;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33680
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57712
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1056) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1008 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:197228
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_479 
	= (0x1ffU & ((IData)(vlTOPp->reset) ? 0U : 
		     ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_484) 
		      - (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_487))));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:184667
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_199) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_214;
    } else {
	if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_103) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor 
		    = (VL_ULL(0x1ffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94);
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183540
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
	= (0x3fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_402);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155602
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_45) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
			     >> 1U));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33673
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1 
		= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33663
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_last__v0 
	    = (1U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_484));
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_last__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_last__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:110201
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_id__v0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		     >> 3U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_id__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195602
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183302
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
	= (0x3fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_353);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183506
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
	= (0x3fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_395);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188271
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2044 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1552));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183336
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
	= (0x3fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_360);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183370
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
	= (0x3fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_367);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183404
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
	= (0x3fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_374);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183438
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
	= (0x3fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_381);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183472
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
	= (0x3fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_388);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:193547
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_199 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_187) {
	    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_199 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_205)
			      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__da_bits_opcode))
				  ? (~ (0x1ffffffU 
					& (((IData)(0xfffU) 
					    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data)) 
					   >> 2U)))
				  : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_203)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183004
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___GEN_85)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:196329
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_len__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_len___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_len__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:196329
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_len__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_len___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_len__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:187876
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_rxs2 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_ctrl_rxs2;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34658
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34658
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34787
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33501
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34648
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34648
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34777
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:197216
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_461 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_468) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_461 = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_466) {
		vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_461 = 1U;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161615
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1072) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1042 
	    = (0xffffffc0U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr);
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195416
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1 
		= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195406
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_user__v0 
	    = (0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_355));
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_user__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_user__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34533
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34533
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188058
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_valid 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killx)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195403
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr__v0 
	    = (0xfffU & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_356)) 
			    | (3U & (~ (0x1ffU & ((IData)(3U) 
						  << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_20))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.behav_srams.v:80
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_en) 
	 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done) {
	    vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v0 
		= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		    << 0x14U) | (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr 
					     >> 0xcU)));
	    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v0 = 1U;
	    vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__ram__v0 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_addr;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33657
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)
	        ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_data___05FT_55_data
	        : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_data___05FT_63_data);
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:3528
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1150 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x2dU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:3531
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1152 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x2bU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:3534
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1154 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			       >> 0x27U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:3537
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1156 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x22U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:3540
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1158 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x21U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:11070
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1150 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x2dU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:11073
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1152 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x2bU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:11076
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1154 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			       >> 0x27U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:11079
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1156 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x22U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:11082
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1158 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x21U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:23770
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1150 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x2dU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:23773
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1152 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x2bU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:23776
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1154 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			       >> 0x27U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:23779
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1156 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x22U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:23782
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1158 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x21U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26611
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1150 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x2dU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26614
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1152 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x2bU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26617
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1154 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			       >> 0x27U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26620
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1156 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x22U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26623
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1158 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
			     >> 0x21U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33660
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)
	        ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb___05FT_55_data)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data));
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183278
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4529) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a 
		    = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:3543
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1121) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1161 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:11085
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1121) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1161 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:23785
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1121) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1161 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:26626
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1121) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1161 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183312
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4550) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a 
		    = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			     >> 0xbU));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183346
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4571) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a 
		    = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			     >> 0x13U));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183380
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4592) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a 
		    = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			     >> 0x1bU));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183414
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4613) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a 
		    = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			     >> 3U));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183448
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4634) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a 
		    = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			     >> 0xbU));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183482
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4655) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a 
		    = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			     >> 0x13U));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183516
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4676) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a 
		    = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			     >> 0x1bU));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159163
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1168 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1003) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1168 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1174)
			      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))
				  ? 0U : (~ (0x1ffffffU 
					     & (((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_size)) 
						>> 2U))))
			      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1172)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33673
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195400
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_id__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	        ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_id___05FT_55_data)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_id___05FT_63_data));
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_id__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37918
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_782 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
	        ? 1U : 0U);
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42241
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_782 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
	        ? 1U : 0U);
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:57721
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1056) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1014 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61236
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1012 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:28901
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_361 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_349) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_361 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_367)
			      ? ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
						>> 0x2dU)))
				  ? (~ (0x1ffffffU 
					& (((IData)(0xfffU) 
					    << (0xfU 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2994 
							   >> 0x27U)))) 
					   >> 2U)))
				  : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_365)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:110213
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__maybe_full 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__empty)) 
		   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT___T_41));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:184630
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_199) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
    } else {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
	    if ((0x20U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__resHi 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__isHi;
	    } else {
		if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
		    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count))) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__resHi 
			    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__isHi;
		    } else {
			if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
			    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
			}
		    }
		} else {
		    if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
		    }
		}
	    }
	} else {
	    if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__resHi 
			= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__isHi;
		} else {
		    if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
		    }
		}
	    } else {
		if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34658
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34658
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34787
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33475
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_lock__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_22;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_lock__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_lock__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33478
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_cache__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_21;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_cache__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_cache__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33481
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_prot__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_20;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_prot__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_prot__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33484
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_qos__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_19;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_qos__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_qos__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:124778
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1363_0 = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1254)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1363_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1300;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33472
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_burst__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_23;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_burst__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_burst__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64537
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1018 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1006) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1018 
		= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1024)
			    ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
			        ? (~ (0x7ffU & (((IData)(0x3fU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
						>> 2U)))
			        : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1022)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:170250
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_104) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_ae_inst 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_1_xcpt_ae_inst)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_16));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195579
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_id;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195582
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_sel1)
	        ? 0U : 3U);
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:193532
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_172 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_158) {
	    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_172 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_178)
			      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
				  ? 0U : (~ (0x1ffffffU 
					     & (((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data)) 
						>> 2U))))
			      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_176)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33469
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_24;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33460
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_27;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_id__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:170257
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_104) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_replay 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_1_replay)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_261));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33463
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_26;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:110341
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full 
		= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__empty)
		    ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1093)) 
		       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___T_41))
		    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___T_41));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188160
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_replay 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__dcache_kill_mem) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_replay)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__take_pc_wb)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34648
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34648
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:34777
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:124785
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1363_1 = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1254)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1363_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1301;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:110335
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_id__v0 
	    = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		     >> 3U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_id__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:117897
    if (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index__v0 
	    = (0xffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_439 
			    >> 2U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:193290
    if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195595
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1 
		= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188162
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_cause 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2011)
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_cause
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2016));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33466
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_len__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_25;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_len__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_len__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33494
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195585
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_user;
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:193287
    if (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33834
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188002
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_rocc 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_rocc;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70618
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_mask 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:76934
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_mask 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:83214
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_mask 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:195400
    if (vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_id__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	        ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_id___05FT_55_data)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_id___05FT_63_data));
	vlTOPp->__Vdlyvset__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_id__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40323
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_21;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7176
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2690_2 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2555))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2690_2 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2611;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100855
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1154 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103838
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1154 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107591
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1230) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1186 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188153
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1910)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_br_taken 
		= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn) 
			 ^ ((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))
			     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__slt)
			     : (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT__in1_xor_in2))));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7169
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2690_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2555))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2690_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2610;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99791
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:187879
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu2 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_xcpt)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1582)
		    ? 0U : ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_172))
			     ? 1U : 0U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_ctrl_sel_alu2));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33501
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:119361
    if (vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_668) {
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_638 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_439;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7162
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2690_0 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2555))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2690_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2609;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:171493
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__saved_size 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100849
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1150 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103832
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1198) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1150 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107585
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1230) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1182 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99791
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188159
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_xcpt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_xcpt) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__take_pc_wb)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188266
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1618) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_msb_1 
		= (0x3fffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_rs_1 
				  >> 2U));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41202
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_449 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_366) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_449 
		= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_391)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45022
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_790 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45013
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_784 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49743
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_842) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_796 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49752
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_842) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_802 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14007
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1014 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17755
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1014 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20570
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1014 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65631
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1014 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:13998
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1008 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17746
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1008 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20561
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1008 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65622
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1008 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45025
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_753) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_793 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49755
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_765) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_805 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45016
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_786 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49746
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_842) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_798 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14010
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_977) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1017 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17758
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_977) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1017 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20573
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_977) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1017 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65634
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_977) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1017 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:14001
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1010 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17749
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1010 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20564
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1010 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65625
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1010 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:45010
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_830) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_782 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:49740
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_842) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_794 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7102
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2301_0 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2192))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2301_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2238;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7132
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2482_0 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2373))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2482_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2419;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:13995
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1006 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17743
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1006 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20558
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1006 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65619
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1054) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1006 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:184527
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_199) {
	    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state 
		= ((0U == (4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)))
		    ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_200)
			     ? 1U : 3U));
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_198) {
		vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_171) {
		    if ((0x20U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count))) {
			vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state 
			    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__neg_out)
			        ? 5U : 7U);
		    } else {
			if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_106) {
			    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count))) {
				vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 6U;
			    } else {
				if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_104) {
				    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 7U;
				} else {
				    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_101) {
					vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 3U;
				    }
				}
			    }
			} else {
			    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_104) {
				vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 7U;
			    } else {
				if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_101) {
				    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 3U;
				}
			    }
			}
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_106) {
			if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count))) {
			    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 6U;
			} else {
			    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_104) {
				vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 7U;
			    } else {
				if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_101) {
				    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 3U;
				}
			    }
			}
		    } else {
			if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_104) {
			    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 7U;
			} else {
			    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_101) {
				vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state = 3U;
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:32692
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_768_2 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_660))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_768_2 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_689;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:32685
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_768_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_660))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_768_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_688;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33657
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_data__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)
	        ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_data___05FT_55_data
	        : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data);
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33660
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_strb___05FT_55_data)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33663
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_last__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last___05FT_55_data)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_391));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_last__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_last__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:187909
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_ctrl_sel_imm;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51919
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:110030
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_308 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_329) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_308 
		= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_314)) 
		   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_332));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70592
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_29) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_24) {
		vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full = 1U;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40356
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_49) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full 
		= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__empty)
		    ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_445)) 
		       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_41))
		    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_41));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188011
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_wxd 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_wxd;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168475
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__resetting = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__resetting) {
	    if ((0x100U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__flushCounter)))) {
		vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__resetting = 0U;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99771
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data__v0 
	    = (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
		       >> 1U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99759
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param__v0 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			     >> 0x2bU)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99762
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size__v0 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			       >> 0x27U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99768
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink__v0 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			     >> 0x21U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99774
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error__v0 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:184676
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_199) {
	VL_EXTEND_WI(66,32, __Vtemp44, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_0);
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
	    = __Vtemp44[0U];
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
	    = __Vtemp44[1U];
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
	    = __Vtemp44[2U];
    } else {
	if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
	    VL_EXTEND_WW(66,65, __Vtemp45, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_180);
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
		= __Vtemp45[0U];
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
		= __Vtemp45[1U];
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
		= __Vtemp45[2U];
	} else {
	    if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_164[0U];
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_164[1U];
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_164[2U];
	    } else {
		if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
		    VL_EXTEND_WI(66,32, __Vtemp46, (IData)(
							   (VL_ULL(0x1ffffffff) 
							    & VL_NEGATE_Q((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__result))))));
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
			= __Vtemp46[0U];
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
			= __Vtemp46[1U];
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
			= __Vtemp46[2U];
		} else {
		    if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state))) {
			if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_102) {
			    VL_EXTEND_WI(66,32, __Vtemp47, (IData)(
								   (VL_ULL(0x1ffffffff) 
								    & VL_NEGATE_Q((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__result))))));
			    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
				= __Vtemp47[0U];
			    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
				= __Vtemp47[1U];
			    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
				= __Vtemp47[2U];
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99756
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode__v0 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			     >> 0x2dU)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33475
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_lock__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_22;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_lock__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_lock__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33478
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_cache__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_21;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_cache__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_cache__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33481
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_prot__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_20;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_prot__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_prot__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33484
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_qos__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_19;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_qos__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_qos__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99765
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source__v0 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2767 
			       >> 0x22U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7109
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2301_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2192))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2301_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2239;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7139
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2482_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2373))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2482_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2420;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188017
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_fence_i 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_fence_i;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99784
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33472
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_burst__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_23;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_burst__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_burst__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33469
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_24;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33460
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_27;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_id__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33463
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_addr__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_26;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_addr__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_addr__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33827
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:180033
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_stalld)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_63) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Freplay 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_84;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100828
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1088 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103811
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1088 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:187968
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1910)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jalr 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_jalr;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:187963
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1910)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jal 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_jal;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106370
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_361 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_349) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_361 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_367)
			      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
				  ? (~ (0x1ffffffU 
					& (((IData)(0xfffU) 
					    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					   >> 2U)))
				  : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_365)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33466
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_len__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_25;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_len__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_len__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33494
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:111414
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1020 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1008) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1020 
		= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1026)
			      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
				  ? (~ (0xffffffU & 
					(((IData)(0xfffU) 
					  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					 >> 3U))) : 0U)
			      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1024)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33814
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188008
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_div 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_div;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:32678
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_768_0 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_660))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_768_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_687;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:187894
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu1 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_xcpt)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1582)
		    ? 2U : ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_172))
			     ? 2U : 1U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_ctrl_sel_alu1));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:187958
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1910)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_branch 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_branch;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168353
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_flush_valid_pre_tag_ecc 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_flush_valid;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99771
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99759
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99768
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99774
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:33817
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data) 
	       | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
		   ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_15)
		   : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
		       ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_14)
		       : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
			   ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_13)
			   : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
			       ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_12)
			       : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
				   ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_11)
				   : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
				       ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_10)
				       : ((9U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
					   ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_9)
					   : ((8U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
					       ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_8)
					       : ((7U 
						   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						   ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_7)
						   : 
						  ((6U 
						    == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_6)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						     ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_5)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						      ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_4)
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						       ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_3)
						       : 
						      ((2U 
							== (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						        ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_2)
						        : 
						       ((1U 
							 == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							 ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_1)
							 : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_0)))))))))))))))));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:16573
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_346 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_334) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_346 
		= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_352)
			    ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
			        ? (~ (0x7ffU & (((IData)(0x3fU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
						>> 2U)))
			        : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_350)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:184600
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_199) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__req_tag 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
			>> 7U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51887
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
		     >> 0x10U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51890
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_param__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
		     >> 0xdU));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_param__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51902
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_mask__v0 
	    = (0xfU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[1U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_mask__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_mask__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51896
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source__v0 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
			>> 4U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106355
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_333 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_319) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_333 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_339)
			      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_opcode))
				  ? 0U : (~ (0x1ffffffU 
					     & (((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_size)) 
						>> 2U))))
			      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_337)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99512
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37897
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_720 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42220
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_720 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51893
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size__v0 
	    = (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
		       >> 9U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51899
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address__v0 
	    = (0x3fffU & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[2U] 
			   << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2538[1U] 
					>> 4U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:51912
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168406
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1345) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_rmw 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1434;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99765
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36820
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_588 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT___T_6)
		     ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_600)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36825
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_625 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT___T_6)
		     ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_637)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36830
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_662 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT___T_6)
		     ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_674)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36835
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_699 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT___T_6)
		     ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_711)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36840
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_736 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT___T_6)
		     ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_748)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:100831
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1090 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_address;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:103814
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1090 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_address;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41224
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_550 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_562)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41229
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_592 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_604)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41234
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_634 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT___T_6)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_646)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:124771
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1268 = 3U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1284) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1268 
		= vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1288;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106721
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_532) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_537 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_314;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106724
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_563) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_568 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_314;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106385
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_0 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_0 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_0 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106406
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_1 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_1 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_1 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106427
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_2 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_2 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_2 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_2 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106448
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_3 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_3 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_3 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_3 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106469
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_4 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_4 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_4 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_4 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106490
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_5 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_5 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_5 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_5 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106511
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_6 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_6 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_6 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_6 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106532
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_7 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_7 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_7 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_7 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106553
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_8 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_8 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_8 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_8 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106574
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_9 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_9 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_9 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_9 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106595
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_10 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_10 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_10 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_10 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106616
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_11 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_11 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_11 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_11 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106637
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_12 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_12 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_12 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_12 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106658
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_13 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_13 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_13 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_13 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106679
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_14 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_14 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_14 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_14 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:106700
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_15 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_514) {
	    if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data))) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_15 = 0U;
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		    if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
			vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_15 = 1U;
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_507) {
		if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_453_15 = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:16966
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_545) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_550 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_299;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:16969
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_576) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_581 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_299;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:16972
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_607) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_612 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_299;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:47214
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99495
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data__v0 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_276)
	        ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_251 
			   >> 0x20U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_251));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99480
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_param;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99477
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_opcode;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99492
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___GEN_5;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:13965
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_938 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 0x10U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:13968
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_940 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 0xdU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:13971
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_942 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 9U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:13974
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_944 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
			>> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:13977
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_946 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		<< 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U] 
			     >> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17713
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_938 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 0x10U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17716
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_940 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 0xdU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17719
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_942 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 9U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17722
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_944 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
			>> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:17725
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_946 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		<< 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U] 
			     >> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20528
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_938 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 0x10U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20531
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_940 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 0xdU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20534
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_942 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 9U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20537
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_944 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
			>> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:20540
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_946 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		<< 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U] 
			     >> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65589
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_938 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 0x10U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65592
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_940 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 0xdU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65595
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_942 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 9U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65598
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_944 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
			>> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:65601
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_946 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		<< 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U] 
			     >> 4U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99762
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99483
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_size;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99505
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168195
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2992) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state = 0U;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159140
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1150) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1102 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161633
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1150) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1102 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172820
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1110 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159178
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1196 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1073) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1196 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1202)
			      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
				  ? (~ (0x1ffffffU 
					& (((IData)(0xfffU) 
					    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					   >> 2U)))
				  : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1200)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168429
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2627 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2678) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2627 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__d_first)
			      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
				  ? (~ (0x1ffffffU 
					& (((IData)(0xfffU) 
					    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					   >> 2U)))
				  : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2631)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161667
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1196 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1196 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1202)
			      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
				  ? (~ (0x1ffffffU 
					& (((IData)(0xfffU) 
					    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					   >> 2U)))
				  : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1200)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163991
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1174_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1065))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1174_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1112;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:169087
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_191 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_191 
		= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_197)
			      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
				  ? (~ (0x1ffffffU 
					& (((IData)(0xfffU) 
					    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					   >> 2U)))
				  : 0U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_195)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56695
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_3 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1904))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_3 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1964;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:171071
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_240 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_valid;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:171047
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_replay)))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_miss = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99756
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:171032
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
		 & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_replay)) 
		    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__take_pc)))));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41242
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_676 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT___T_6)
		    ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_688)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41250
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_718 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT___T_6)
		  ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_730)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:170215
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_104) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_taken 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_1_btb_taken));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:170222
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___T_104) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bridx 
	    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_1_btb_bridx));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99486
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_source;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56674
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_0 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1904))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1961;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:122420
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_648) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_618 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:125410
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_648) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_618 
	    = (0x7fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128874
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1050 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:131284
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__mem_0_address 
	    = vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188257
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_illegal_insn) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_msb_0 
		= (0x3fffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1622 
				  >> 2U));
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1603) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_msb_0 
		    = (0x3fffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__id_rs_0 
				      >> 2U));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99784
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183188
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	if ((0x7b2U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dscratch 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183613
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	if ((0x340U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mscratch 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183596
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	if ((0x343U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mbadaddr 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mbadaddr 
			= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2188;
		}
	    }
	}
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mbadaddr 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2188;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183200
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4504) {
		if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode 
			= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4525;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168411
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__advance_pstore1) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore2_addr 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_addr;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183618
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if ((0x305U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec 
		    = (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4459);
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183098
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm 
		    = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			     >> 0xfU));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183541
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	if ((0x304U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie 
		= (0x888U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183211
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4504) {
		if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action 
			= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4526;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183229
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4504) {
		if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x 
			= (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				 >> 2U));
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183240
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4504) {
		if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w 
			= (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
				 >> 1U));
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183251
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4504) {
		if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r 
			= (1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183122
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step 
		    = (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			     >> 2U));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183639
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_274 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT___T_6)
		     ? 0U : (IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337)
				      ? ((0xb82U == 
					  (0xfffU & 
					   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					    >> 0x14U)))
					  ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4476
					  : ((0xb02U 
					      == (0xfffU 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						     >> 0x14U)))
					      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4472
					      : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_275))))
				      : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_275))))));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183643
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_278 = VL_ULL(0);
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if ((0xb82U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_278 
		    = (VL_ULL(0x3ffffffffffffff) & 
		       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4476 
			>> 6U));
	    } else {
		if ((0xb02U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_278 
			= (VL_ULL(0x3ffffffffffffff) 
			   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4472 
			      >> 6U));
		} else {
		    if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_275))) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_278 
			    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_282;
		    }
		}
	    }
	} else {
	    if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_275))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_278 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_282;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:182982
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp = 3U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret) {
	    if ((0x40000000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst)) {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
		    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp = 3U;
		    }
		}
	    } else {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp = 3U;
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp = 3U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183669
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_291 = VL_ULL(0);
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if ((0xb80U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_291 
		    = (VL_ULL(0x3ffffffffffffff) & 
		       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4469 
			>> 6U));
	    } else {
		if ((0xb00U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					  >> 0x14U)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_291 
			= (VL_ULL(0x3ffffffffffffff) 
			   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4465 
			      >> 6U));
		} else {
		    if ((0x40U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_287)))) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_291 
			    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_295;
		    }
		}
	    }
	} else {
	    if ((0x40U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_287)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_291 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_295;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:16558
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_318 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_304) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_318 
		= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_324)
			    ? ((0x40000U & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U])
			        ? 0U : (~ (0x7ffU & 
					   (((IData)(0x3fU) 
					     << (7U 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
						    >> 9U))) 
					    >> 2U))))
			    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_322)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183131
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_prv = 3U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_prv = 3U;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183690
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa = 0x40001105U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if ((0x301U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4380) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
			= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4390;
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183107
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_cause = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_cause 
			= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_singleStepped)
			    ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1769));
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56688
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_2 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1904))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_2 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1963;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172829
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1116 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183563
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	if ((0x342U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcause 
		= (0x8000000fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcause 
			= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_call)
			    ? 0xbU : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_break)
				       ? 3U : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause));
		}
	    }
	}
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcause 
		    = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_call)
		        ? 0xbU : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_break)
				   ? 3U : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_cause));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:47197
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[0U];
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:47182
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
		     >> 0xdU));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:99489
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_22_address;
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:47194
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask__v0 
	    = (0xfU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[1U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188014
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_pc_valid) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_csr 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_csr;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:47185
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size__v0 
	    = (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
		       >> 9U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:47191
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address__v0 
	    = (0x7fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
			       << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[1U] 
					    >> 4U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183546
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	if ((0x341U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc 
		= (~ (1U | (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata)));
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc 
			= (~ (1U | (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_pc)));
		}
	    }
	}
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
	    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc 
		    = (~ (1U | (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_pc)));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56681
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1904))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2060_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1962;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128888
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1110 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x27U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128891
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1112 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x25U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128894
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1114 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x23U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128897
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1116 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x22U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128900
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1118 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x21U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128903
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1081) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1121 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107555
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1152) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1114 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
		     >> 0x13U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107558
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1152) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1116 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
		     >> 0x10U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107561
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1152) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1118 
	    = (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
		       >> 0xcU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107564
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1152) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1120 
	    = (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
		       >> 8U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:107567
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1152) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1122 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
		<< 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[2U] 
			     >> 8U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109697
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT__saved_data 
	    = (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[1U])) 
		<< 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[0U])));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109682
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT__saved_param 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
		     >> 0x10U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109679
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT__saved_opcode 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
		     >> 0x13U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109694
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT__saved_mask 
	    = (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[2U]);
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109685
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT__saved_size 
	    = (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
		       >> 0xcU));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168446
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__blockUncachedGrant 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2863)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore_drain)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__dataArb__DOT___T_113))
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__dataArb__DOT___T_113));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168151
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_141) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb__DOT___T_181)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163984
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1174_0 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1065))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1174_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1111;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7095
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2206 = 3U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2222) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2206 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2226;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7125
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2387 = 3U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2403) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2387 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2407;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37888
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_714 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42211
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_752) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_714 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:60195
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:40353
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen__v0 
	    = (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
			>> 2U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen__v0 = 1U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:59916
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7155
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570 = 7U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2588) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2595;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64475
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_986) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_lut 
		= ((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)))
		    ? 8U : ((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)))
			     ? 0xeU : ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)))
				        ? 6U : ((3U 
						 == 
						 (3U 
						  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data)))
						 ? 0xcU
						 : 0U))));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61197
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_938 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64440
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_986) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_param 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31955
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__maybe_full = 0U;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31955
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64450
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_986) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_source 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109688
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT__saved_source 
	    = (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
		       >> 8U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183053
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	    if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		VL_EXTEND_WI(101,32, __Vtemp48, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
		vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie 
		    = (1U & (__Vtemp48[0U] >> 3U));
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret) {
		    if ((0x40000000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst)) {
			if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
			    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
				vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie = 0U;
			    }
			}
		    } else {
			vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie 
			    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie;
		    }
		} else {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
			if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
			    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie = 0U;
			}
		    }
		}
	    }
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret) {
		if ((0x40000000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst)) {
		    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
			if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
			    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie = 0U;
			}
		    }
		} else {
		    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie 
			= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie;
		}
	    } else {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
		    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
			vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie = 0U;
		    }
		}
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41238
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_640) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_636 
	    = (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
			>> 2U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41187
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_380 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_366) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_380 
		= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_386)
			     ? ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))
				 ? 0U : (~ (0x1fffffU 
					    & (((IData)(0xffU) 
						<< (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					       >> 2U))))
			     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_384)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109668
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT__full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_29) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT__full = 0U;
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_24) {
		vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT__full = 1U;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41209
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_492 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_493) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_492 
		= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81)));
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183167
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	if ((0x7b1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				  >> 0x14U)))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc 
		= (~ (1U | (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata)));
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
		if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
		    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
			vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc 
			    = (~ (1U | (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_pc)));
		    }
		}
	    }
	}
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
		if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
		    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc 
			= (~ (1U | (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_pc)));
		}
	    }
	}
    }
    vlTOPp->io_success = (1U == vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fexit);
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41246
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_682) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_678 
	    = (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
			>> 2U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41254
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_724) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_720 
	    = (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
			>> 2U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168410
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1466 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1441) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore_drain)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64465
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_986) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:109691
    if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT___T_24) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__Repeater__DOT__saved_address 
	    = ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[3U] 
		<< 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_986[2U] 
			     >> 8U));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:775
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1084 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8317
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1084 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:772
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1082 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8314
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1082 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:781
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1088 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8323
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1088 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183222
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4504) {
	    if ((0x7a1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch 
		    = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
			     >> 7U));
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:778
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1086 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:8320
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1120) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1086 
	    = vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:47188
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source__v0 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
			>> 4U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:60175
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 
	    = (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
		       >> 1U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:60163
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
			     >> 0x2aU)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:60166
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
			     >> 0x27U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:60172
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
			     >> 0x21U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:60178
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_error__v0 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_error__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_error__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:60160
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
			     >> 0x2cU)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:60188
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:183262
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4504) {
	    if ((0x7a2U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				      >> 0x14U)))) {
		vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
		    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
	    }
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:60169
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 
	    = (0x1fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
				>> 0x22U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31955
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_58) {
	    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full 
		= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__do_enq;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64435
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_986) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_opcode 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61203
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_942 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31941
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31920
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_opcode__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31923
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_param__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31932
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_sink__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31935
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31938
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_error__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_error__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31948
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31948
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:188158
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_valid 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ctrl_killm)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:111352
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_346_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_530) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_346_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_533;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:111359
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_346_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_535) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_346_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_538;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7213
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2917_2 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2782))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2917_2 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2838;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7206
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2917_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2782))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2917_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2837;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:111366
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_672_0 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_809) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_672_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_812;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:111373
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_672_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_814) {
	    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_672_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_817;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7199
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2917_0 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2782))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2917_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2836;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64470
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_986) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_fifoId 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_407;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:59899
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[0U];
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:59884
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
		     >> 0xdU));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:59896
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask__v0 
	    = (0xfU & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[1U]);
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:59890
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source__v0 
	    = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2176[2U] 
			>> 4U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64460
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_986) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:61209
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_976) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_946 
	    = vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64445
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_986) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64523
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_915_0 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_831))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_915_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_852;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64530
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_915_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_831))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_915_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_853;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7072
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2120_0 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2011))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2120_0 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2057;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:7079
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2120_1 = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2011))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2120_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2058;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:47207
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__do_deq) {
	    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1 
		= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_57;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31935
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data__v0 
	    = (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
		       >> 1U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31923
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param__v0 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
			     >> 0x27U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31932
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink__v0 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
			     >> 0x21U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31938
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error__v0 
	    = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:31926
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size__v0 
	    = (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_845 
			       >> 0x23U)));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168390
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1345) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:64455
    if (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_986) {
	if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state))) {
	    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
		= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data;
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:168426
    if (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__advance_pstore1) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore2_storegen_mask 
	    = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:47179
    if (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__do_enq) {
	vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 
	    = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2357[2U] 
		     >> 0x10U));
	vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 = 1U;
	vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 
	    = vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133232
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1042 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x33U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133235
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1044 
	    = (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x30U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133238
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1046 
	    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x2eU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133241
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1048 
	    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x2dU)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133244
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1080) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1050 
	    = (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				 >> 0x24U)));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:133258
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1158) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1110 
	    = (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				    >> 0x33U))));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:157200
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_28) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__mem_0_opcode 
	    = (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				    >> 0x33U))));
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155694
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_53585) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1 
		= (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
			    >> 8U));
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8359) {
		if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_1) {
		    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 8U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1 = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155707
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_53629) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2 
		= (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
			    >> 0x10U));
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8360) {
		if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_2) {
		    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x10U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2 = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155720
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_53673) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3 
		= (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
			    >> 0x18U));
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8361) {
		if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_3) {
		    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 0x18U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3 = 0U;
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:155746
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q) {
	if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_65245) {
	    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_1 
		= (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
			    >> 8U));
	} else {
	    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_8363) {
		if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_1) {
		    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_1 
			= (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					    >> 8U)));
		}
	    }
	}
    } else {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_1 = 0U;
    }
}
