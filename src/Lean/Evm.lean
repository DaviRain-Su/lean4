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

/-! ## Transaction context -/

/-- Remaining gas (`gas()` in EVM). -/
@[extern "lean_evm_gas"] opaque gas : IO Nat

/-- Transaction origin (`ORIGIN` opcode). -/
@[extern "lean_evm_origin"] opaque origin : IO Nat

/-- Gas price (`GASPRICE` opcode). -/
@[extern "lean_evm_gasprice"] opaque gasprice : IO Nat

/-! ## Block context -/

/-- Block coinbase (`COINBASE` opcode). -/
@[extern "lean_evm_coinbase"] opaque coinbase : IO Nat

/-- Block gas limit (`GASLIMIT` opcode). -/
@[extern "lean_evm_gaslimit"] opaque gaslimit : IO Nat

/-- Block base fee (`BASEFEE` opcode, EIP-1559). -/
@[extern "lean_evm_basefee"] opaque basefee : IO Nat

/-- Chain ID (`CHAINID` opcode, EIP-155). -/
@[extern "lean_evm_chainid"] opaque chainId : IO Nat

/-- Balance of any address (`BALANCE` opcode). -/
@[extern "lean_evm_balance"] opaque balanceOf (addr : Nat) : IO Nat

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

/-- Revert with a Solidity-style Error(string) reason.
    Encodes as: 0x08c379a0 (Error(string) selector) + offset(0x20) + len + data.
    The caller sees a standard revert reason parseable by ethers.js/web3.
    The reason string must be pre-written to memory at offset 68 by the caller. -/
@[inline] def revertWithReason (reasonLen : Nat) : IO Unit := do
  mstore 0 147846272  -- Error(string) selector 0x08c379a0 (left-shifted by caller)
  mstore 4 32  -- string data offset
  mstore 36 reasonLen  -- string length
  revertMem 0 (68 + ((reasonLen + 31) / 32 * 32))

/-! ## Storage helpers -/

namespace Storage

  /-- Read a U256 from storage slot `k`. -/
  @[inline] def load (k : Nat) : IO Nat := sload k

  /-- Write a U256 `v` to storage slot `k`. -/
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

  /-- Compute a nested mapping slot: keccak256(keccak256(innerKey || outerKey) || slot).
      Mirrors Solidity's `mapping(k1 => mapping(k2 => v))` layout. -/
  @[inline] def map2Slot (slot outerKey innerKey : Nat) : IO Nat := do
    let inner ← mapSlot outerKey innerKey
    mstore 0 inner
    mstore 32 slot
    keccak256 0 64

  /-- Read from a nested mapping (`slot`, `k1`, `k2`). -/
  @[inline] def map2Load (slot k1 k2 : Nat) : IO Nat := do
    let k ← map2Slot slot k1 k2
    sload k

  /-- Write to a nested mapping (`slot`, `k1`, `k2`, `v`). -/
  @[inline] def map2Store (slot k1 k2 val : Nat) : IO Unit := do
    let k ← map2Slot slot k1 k2
    sstore k val

end Storage

/-! ## Typed storage data structures

These mirror the NEAR `Storage.Key` / `Store.LookupMap` pattern and Solidity's
storage variable system, providing compile-time slot assignment and type safety.

Usage in a contract:

```lean
-- Declare storage layout at the top of the contract
let owner := Storage.Var.ofSlot 0          -- like `address public owner`
let reserves := Storage.Var.ofSlot 1       -- like `uint256 reserves`
let balances := Storage.Map.ofSlot 2       -- like `mapping(address => uint256)`
-- Read/write with type safety
let o ← owner.read
owner.write newOwner
let bal ← balances.get depositor
balances.set depositor amount
```
-/

/-- A named storage variable at a fixed slot (Solidity `uint256 public x`). -/
structure Storage.Var (α : Type) where
  slot : Nat

namespace Storage.Var

  /-- Create a variable at a specific storage slot. -/
  @[inline] def ofSlot (n : Nat) : Storage.Var α := { slot := n }

  /-- Read the variable's value. -/
  @[inline] def read (v : Storage.Var α) : IO Nat := sload v.slot

  /-- Write a value to the variable. -/
  @[inline] def write (v : Storage.Var α) (val : Nat) : IO Unit := sstore v.slot val

end Storage.Var

/-- A persistent mapping in storage (Solidity `mapping(keyType => valueType)`). -/
structure Storage.Map (α : Type) where
  slot : Nat

namespace Storage.Map

  /-- Create a mapping at a base storage slot. -/
  @[inline] def ofSlot (n : Nat) : Storage.Map α := { slot := n }

  /-- Get the value for `key`, defaulting to 0. -/
  @[inline] def get (m : Storage.Map α) (key : Nat) : IO Nat := Storage.mapLoad m.slot key

  /-- Set the value for `key`. -/
  @[inline] def set (m : Storage.Map α) (key val : Nat) : IO Unit := Storage.mapStore m.slot key val

  /-- Modify the value for `key` using function `f`. -/
  @[inline] def modify (m : Storage.Map α) (key : Nat) (f : Nat → Nat) : IO Nat := do
    let current ← m.get key
    let next := f current
    m.set key next
    pure next

end Storage.Map

/-- A nested mapping (Solidity `mapping(k1 => mapping(k2 => v))`). -/
structure Storage.Map2 (α : Type) where
  slot : Nat

namespace Storage.Map2

  /-- Create a nested mapping at a base storage slot. -/
  @[inline] def ofSlot (n : Nat) : Storage.Map2 α := { slot := n }

  /-- Get the value for (`k1`, `k2`). -/
  @[inline] def get (m : Storage.Map2 α) (k1 k2 : Nat) : IO Nat := Storage.map2Load m.slot k1 k2

  /-- Set the value for (`k1`, `k2`). -/
  @[inline] def set (m : Storage.Map2 α) (k1 k2 val : Nat) : IO Unit := Storage.map2Store m.slot k1 k2 val

end Storage.Map2

/-- A dynamic-length array in storage (Solidity `uint256[] storage`).
    Length is at `slot`, elements at `keccak256(slot) + index`. -/
structure Storage.Array (α : Type) where
  slot : Nat

namespace Storage.Array

  /-- Create a storage array at a base slot. -/
  @[inline] def ofSlot (n : Nat) : Storage.Array α := { slot := n }

  /-- Get the array length (stored at `slot`). -/
  @[inline] def length (a : Storage.Array α) : IO Nat := sload a.slot

  /-- Compute the element slot: keccak256(slot) + index (Solidity layout). -/
  @[inline] def elemSlot (a : Storage.Array α) (index : Nat) : IO Nat := do
    mstore 0 a.slot
    let base ← keccak256 0 32
    pure (base + index)

  /-- Get element at `index` (returns 0 if out of bounds). -/
  @[inline] def get (a : Storage.Array α) (index : Nat) : IO Nat := do
    let len ← a.length
    if index ≥ len then pure 0
    else do
      let slot ← a.elemSlot index
      sload slot

  /-- Push a value to the end of the array (increments length). -/
  @[inline] def push (a : Storage.Array α) (val : Nat) : IO Unit := do
    let len ← a.length
    let slot ← a.elemSlot len
    sstore slot val
    sstore a.slot (len + 1)

  /-- Set element at `index`. -/
  @[inline] def set (a : Storage.Array α) (index val : Nat) : IO Unit := do
    let slot ← a.elemSlot index
    sstore slot val

end Storage.Array

/-! ## Environment -/

namespace Env

  -- ## msg (Vyper: msg.sender, msg.value, msg.gas, msg.data)

  /-- The sender of the current call (`msg.sender`). -/
  @[inline] def sender : IO Address := Evm.caller

  /-- The wei value attached to the current call (`msg.value`). -/
  @[inline] def value : IO UInt256 := Evm.callvalue

  /-- The remaining gas (`msg.gas`). -/
  @[inline] def gas : IO Nat := Evm.gas

  -- ## tx (Vyper: tx.origin, tx.gasprice)

  /-- The original sender of the transaction (`tx.origin`). -/
  @[inline] def origin : IO Address := Evm.origin

  /-- The gas price of the transaction (`tx.gasprice`). -/
  @[inline] def gasprice : IO Nat := Evm.gasprice

  -- ## block (Vyper: block.number, block.timestamp, block.coinbase, etc.)

  /-- The current block timestamp (`block.timestamp`). -/
  @[inline] def blockTimestamp : IO UInt256 := Evm.timestamp

  /-- The current block number (`block.number`). -/
  @[inline] def blockNumber : IO UInt256 := Evm.number

  /-- The current block coinbase address (`block.coinbase`). -/
  @[inline] def coinbase : IO Address := Evm.coinbase

  /-- The current block gas limit (`block.gaslimit`). -/
  @[inline] def gaslimit : IO Nat := Evm.gaslimit

  /-- The current block base fee (`block.basefee`). -/
  @[inline] def basefee : IO Nat := Evm.basefee

  /-- The block hash of a recent block (`blockhash(n)`). -/
  @[inline] def blockHash (n : Nat) : IO Nat := Evm.blockhash n

  /-- The contract's own balance (`self.balance`). -/
  @[inline] def balance : IO UInt256 := Evm.selfbalance

  /-- The balance of any address (`address.balance`). -/
  @[inline] def balanceOf (addr : Address) : IO Nat := Evm.balanceOf addr

  -- ## chain (Vyper: chain.id)

  /-- The current chain ID (`chain.id`). -/
  @[inline] def chainId : IO Nat := Evm.chainId

  /-- The deployed code hash at an address. -/
  @[inline] def codehash (addr : Address) : IO Nat := extcodehash addr

  /-- The deployed code size at an address. -/
  @[inline] def codesize (addr : Address) : IO Nat := extcodesize addr

end Env

/-! ## Math builtins (Vyper-style) -/

/-- Minimum of two Nats. -/
@[inline] def min (a b : Nat) : Nat := if a ≤ b then a else b

/-- Maximum of two Nats. -/
@[inline] def max (a b : Nat) : Nat := if a ≥ b then a else b

/-- Absolute difference (a - b if a ≥ b, else 0). -/
@[inline] def absDiff (a b : Nat) : Nat := if a ≥ b then a - b else 0

/-- Integer square root via binary search. Uses decreasing range. -/
def isqrt (n : Nat) : Nat :=
  if n ≤ 1 then n
  else Nat.sqrt n

/-- Square root (same as isqrt for integers, returns floor sqrt). -/
@[inline] def sqrt (n : Nat) : Nat := isqrt n

/-- Floor division (a / b rounded down). Same as Nat division for non-negative. -/
@[inline] def floorDiv (a b : Nat) : Nat := a / b

/-- Ceiling division (a / b rounded up). -/
@[inline] def ceilDiv (a b : Nat) : Nat := (a + b - 1) / b

/-- Exponentiation (a ^ b mod 2^256). Uses EVM EXP. -/
@[extern "lean_evm_exp"] opaque natPow (base exp : Nat) : IO Nat

/-- Bitwise NOT (~n mod 2^256). -/
@[extern "lean_evm_not"] opaque bitNot (n : Nat) : IO Nat

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

/-! ## Cryptography (EVM precompiles) -/

/-- SHA-256 hash via EVM precompile at address 0x02.
    Input at mem [offset, offset+len), output (32 bytes) written to mem[outOffset]. -/
@[inline] def sha256 (offset len outOffset : Nat) : IO Nat := do
  let _ ← staticcall 3000 0x02 offset len outOffset 32
  mload outOffset

/-- ECDSA public key recovery via EVM precompile at address 0x01.
    Input: hash(32) + v(32) + r(32) + s(32) at mem [offset, offset+128).
    Output: recovered address (32 bytes) at mem[outOffset]. -/
@[inline] def ecrecover (offset outOffset : Nat) : IO Nat := do
  let _ ← staticcall 3000 0x01 offset 128 outOffset 32
  mload outOffset

/-! ## Bytecode helpers -/

/-- Compute a Solidity function selector (first 4 bytes of keccak256(sig)).
    The signature string must be at mem [offset, offset+len). Returns the
    4-byte selector right-shifted to fit in a U256 (e.g. 0x6d4ce63c). -/
@[inline] def methodId (offset len : Nat) : IO Nat := do
  let h ← keccak256 offset len
  pure (h / (2 ^ 224))  -- take top 4 bytes

/-- Copy `len` bytes from src to dst in 32-byte chunks. -/
@[inline] def memcpy (dst src len : Nat) : IO Unit := do
  let chunks := len / 32
  for i in [:chunks] do
    mstore (dst + i * 32) (← mload (src + i * 32))
  if len % 32 > 0 then
    mstore (dst + chunks * 32) (← mload (src + chunks * 32))

/-- Concatenate two 32-byte words at mem [dst, dst+64). -/
@[inline] def concat64 (dst a b : Nat) : IO Unit := do
  mstore dst a
  mstore (dst + 32) b

end Lean.Evm
