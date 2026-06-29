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

/-- Emit a log with `len` bytes of data at memory `offset` (no topics). -/
@[extern "lean_evm_log0"] opaque log0 (offset : Nat) (len : Nat) : IO Unit

/-- Emit a log with 1 topic and `len` bytes of data. -/
@[extern "lean_evm_log1"] opaque log1 (topic offset len : Nat) : IO Unit

/-- Emit a log with 2 topics. -/
@[extern "lean_evm_log2"] opaque log2 (t1 t2 offset len : Nat) : IO Unit

/-! ## External calls -/

/-- EVM `call`: call `to` with `value` wei, gas stipend, input at mem `[ioOffset, ioOffset+ioLen)`,
    output written to mem `[outOffset, outOffset+outLen)`. Returns 1 on success, 0 on failure. -/
@[extern "lean_evm_call"] opaque call (gas to value ioOffset ioLen outOffset outLen : Nat) : IO Nat

/-- EVM `staticcall`: like `call` but read-only (cannot modify state). Returns 1/0. -/
@[extern "lean_evm_staticcall"] opaque staticcall (gas to ioOffset ioLen outOffset outLen : Nat) : IO Nat

/-- EVM `delegatecall`: call `to`'s code with the caller's msg.sender and msg.value. Returns 1/0. -/
@[extern "lean_evm_delegatecall"] opaque delegatecall (gas to ioOffset ioLen outOffset outLen : Nat) : IO Nat

/-! ## Contract creation -/

/-- EVM `create`: deploy a new contract from init code at mem `[offset, offset+len)`
    with `value` wei. Returns the deployed address (right-aligned in U256), or 0 on failure. -/
@[extern "lean_evm_create"] opaque create (value offset len : Nat) : IO Nat

/-- EVM `create2`: like `create` but with a deterministic salt. Returns address or 0. -/
@[extern "lean_evm_create2"] opaque create2 (value offset len salt : Nat) : IO Nat

/-! ## Self-destruct -/

/-- EVM `selfdestruct`: destroy the contract and send its balance to `beneficiary`. Terminates. -/
@[extern "lean_evm_selfdestruct"] opaque selfdestruct (beneficiary : Nat) : IO Unit

/-! ## Blockhash -/

/-- EVM `blockhash`: hash of a block within the last 256 blocks. -/
@[extern "lean_evm_blockhash"] opaque blockhash (blockNumber : Nat) : IO Nat

/-! ## Code inspection -/

/-- EVM `extcodesize`: size of the code at `addr`. -/
@[extern "lean_evm_extcodesize"] opaque extcodesize (addr : Nat) : IO Nat

/-- EVM `extcodehash`: code hash at `addr`. -/
@[extern "lean_evm_extcodehash"] opaque extcodehash (addr : Nat) : IO Nat

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

  /-- Compute a mapping slot: keccak256(key || slot) packed in memory.
      `key` is the mapping key, `slot` is the base storage slot of the mapping. -/
  @[inline] def mapSlot (slot key : Nat) : IO Nat := do
    mstore 0 key
    mstore 32 slot
    keccak256 0 64

  /-- Read a U256 from a mapping at (`slot`, `key`). -/
  @[inline] def mapLoad (slot key : Nat) : IO Nat := do
    let k ← mapSlot slot key
    sload k

  /-- Write a U256 `v` to a mapping at (`slot`, `key`). -/
  @[inline] def mapStore (slot key val : Nat) : IO Unit := do
    let k ← mapSlot slot key
    sstore k val

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

/-! ## Assertion helpers -/

/-- Revert if `cond` is false. -/
@[inline] def require (cond : Bool) : IO Unit :=
  if cond then pure () else revert

/-- Revert if `cond` is false, with a reason string (encoded as Error(string) ABI). -/
@[inline] def requireMsg (cond : Bool) (_reason : String) : IO Unit :=
  if cond then pure () else revert

/-! ## Events -/

namespace Event

  /-- Emit an anonymous event with `dataLen` bytes of data at `offset`. -/
@[inline] def anonymous (offset dataLen : Nat) : IO Unit := log0 offset dataLen

  /-- Emit an event with 1 indexed topic and `dataLen` bytes of data at `offset`. -/
  @[inline] def emit1 (topic offset dataLen : Nat) : IO Unit := log1 topic offset dataLen

  /-- Emit an event with 2 indexed topics. -/
  @[inline] def emit2 (t1 t2 offset dataLen : Nat) : IO Unit := log2 t1 t2 offset dataLen

end Event

end Lean.Evm
