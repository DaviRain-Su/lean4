/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Lean EVM SDK

A Lean library for writing EVM smart contracts that compile to Yul via the
EmitYul backend (`lean -y` + `solc --strict-assembly`).

The extern functions `lean_evm_*` are recognized by EmitYul and lowered
directly to EVM opcodes. They do not have a C/Zig runtime implementation —
the EVM is their runtime.
-/
module

prelude
public import Init.Prelude
public import Init.Data.String
public import Init.Data.Bool
public import Init.Data.UInt
public import Init.Data.Nat
public import Init.System.IO

public section

namespace Lean.Evm

/-!
## Primitive EVM externs

These map 1:1 to EVM opcodes via EmitYul. Arguments and return values use `Nat`
(Lean's arbitrary-precision natural; EmitYul caps it at U256).
-/

/-- Read a 32-byte word from calldata at byte offset `i`. -/
@[extern "lean_evm_calldataload"] opaque calldataload (i : Nat) : IO Nat

/-- Write a 32-byte word to EVM memory at byte offset `i`. -/
@[extern "lean_evm_mstore"] opaque mstore (i : Nat) (v : Nat) : IO Unit

/-- Read a 32-byte word from EVM memory at byte offset `i`. -/
@[extern "lean_evm_mload"] opaque mload (i : Nat) : IO Nat

/-- Read a 32-byte word from persistent storage at key `k`. -/
@[extern "lean_evm_sload"] opaque sload (k : Nat) : IO Nat

/-- Write a 32-byte word `v` to persistent storage at key `k`. -/
@[extern "lean_evm_sstore"] opaque sstore (k : Nat) (v : Nat) : IO Unit

/-- The caller (`msg.sender`) as a raw 160-bit address right-aligned in U256. -/
@[extern "lean_evm_caller"] opaque caller : IO Nat

/-- The value attached to the call (`msg.value`) in wei. -/
@[extern "lean_evm_callvalue"] opaque callvalue : IO Nat

/-- The current block timestamp. -/
@[extern "lean_evm_timestamp"] opaque timestamp : IO Nat

/-- The current block number. -/
@[extern "lean_evm_number"] opaque number : IO Nat

/-- The contract's own balance in wei. -/
@[extern "lean_evm_selfbalance"] opaque selfbalance : IO Nat

/-- Return `len` bytes starting at memory offset `offset`, ending the call. -/
@[extern "lean_evm_return"] opaque returnMem (offset : Nat) (len : Nat) : IO Unit

/-- Revert with the revert reason at memory `[offset, offset+len)`. -/
@[extern "lean_evm_revert"] opaque revertMem (offset : Nat) (len : Nat) : IO Unit

/-- Compute keccak256 of memory `[offset, offset+len)`, returning the hash. -/
@[extern "lean_evm_keccak256"] opaque keccak256 (offset : Nat) (len : Nat) : IO Nat

/-! ## Typed aliases -/

/-- A 256-bit unsigned integer, EVM's native word. -/
abbrev UInt256 := Nat

/-- A 20-byte EVM address. -/
abbrev Address := Nat

/-! ## Calldata helpers -/

/-- Read the i-th (0-indexed) 32-byte argument from calldata (after the selector). -/
@[inline] def arg (i : Nat) : IO Nat := calldataload (4 + i * 32)

/-! ## Return helpers -/

/-- Return a single U256 word to the caller (ABI-encoded). -/
@[inline] def returnU256 (v : Nat) : IO Unit := do
  mstore 0 v
  returnMem 0 32

/-- Revert the call with no data. -/
@[inline] def revert : IO Unit := revertMem 0 0

/-! ## Storage helpers -/

namespace Storage

  /-- Read a U256 from storage key `k`. -/
  @[inline] def load (k : Nat) : IO Nat := sload k

  /-- Write a U256 `v` to storage key `k`. -/
  @[inline] def store (k : Nat) (v : Nat) : IO Unit := sstore k v

end Storage

/-! ## Environment -/

namespace Env

  /-- The sender of the current call. -/
  @[inline] def sender : IO Address := Evm.caller

  /-- The wei value attached to the current call. -/
  @[inline] def value : IO UInt256 := Evm.callvalue

  /-- The current block timestamp. -/
  @[inline] def blockTimestamp : IO UInt256 := Evm.timestamp

  /-- The current block number. -/
  @[inline] def blockNumber : IO UInt256 := Evm.number

  /-- The contract's own balance. -/
  @[inline] def balance : IO UInt256 := Evm.selfbalance

end Env

end Lean.Evm
