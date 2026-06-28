/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module

prelude
public import Init.Prelude
public import Init.Data.String
public import Init.Data.Bool
public import Init.Data.Option
public import Init.Data.UInt
public import Init.Data.Nat
public import Init.System.IO

public section

/-!
# Lean NEAR SDK

A Lean library for writing NEAR smart contracts that compile to WASM via
the Zig backend (`lean -z` + `tools/zigc-near`).

Adapted from near-sdk-zig (https://github.com/DaviRain-Su/near-sdk-zig).

## Architecture

```
Lean contract (.lean)         ← User writes this
    │  @[extern "lean_near_*"]
    ▼
EmitZig (.zig)                ← Compiler-generated
    │  extern fn lean_near_* → host/near/lean_near.zig
    ▼
wasm32-wasi WASM (.wasm)      ← Deployed to NEAR
```

## Quick Example: Counter Contract

```lean
import Lean.Near

open Near

def main : IO UInt32 := do
  let counter := Counter.make "count"
  let n ← counter.increment
  Env.log s!"incremented to {n}"
  Contract.returnValue (toString n)
  pure 0
```
-/

namespace Near

-- ============================================================================
-- Types (adapted from near-sdk-zig types/token.zig, types/gas.zig)
-- ============================================================================

/-- Token amount in yoctoNEAR (10^-24 NEAR). -/
structure NearToken where
  yoctoNear : UInt64
  deriving Repr

namespace NearToken

def zero : NearToken := ⟨0⟩
def fromYocto (amount : UInt64) : NearToken := ⟨amount⟩
def fromNear (amount : UInt64) : NearToken := ⟨amount * 1000000000000⟩
def add (a b : NearToken) : NearToken := ⟨a.yoctoNear + b.yoctoNear⟩
def isZero (t : NearToken) : Bool := t.yoctoNear == 0

instance : Add NearToken := ⟨add⟩
instance : Repr NearToken := ⟨fun t _ => toString t.yoctoNear ++ " yoctoNEAR"⟩

end NearToken

/-- Gas units for NEAR transactions. One TGas = 10^12 gas. -/
structure Gas where
  inner : UInt64
  deriving Repr

namespace Gas

def zero : Gas := ⟨0⟩
def fromGas (gas : UInt64) : Gas := ⟨gas⟩
def fromTgas (tgas : UInt64) : Gas := ⟨tgas * 1000000000000⟩

end Gas

-- ============================================================================
-- Account ID (adapted from near-sdk-zig types/account_id.zig)
-- ============================================================================

/-- A NEAR account ID (owned string). -/
structure AccountId where
  id : String
  deriving Repr

namespace AccountId

def minLen : Nat := 2
def maxLen : Nat := 64

/-- Validate a string as a NEAR account ID (length check). -/
def isValid (s : String) : Bool :=
  s.length >= minLen && s.length <= maxLen

def parse (s : String) : Option AccountId :=
  if isValid s then some ⟨s⟩ else none

def asStr (a : AccountId) : String := a.id

instance : ToString AccountId := ⟨fun a => a.id⟩
instance : Repr AccountId := ⟨fun a _ => "\"" ++ a.id ++ "\""⟩

end AccountId

-- ============================================================================
-- Storage (adapted from near-sdk-zig storage.zig)
-- ============================================================================

namespace Storage

/-- Low-level raw storage write. Returns true if key was newly created. -/
@[extern "lean_near_storage_write"]
opaque rawWrite (key : String) (value : String) : IO Bool

/-- Low-level raw storage read. Returns none if key doesn't exist. -/
@[extern "lean_near_storage_read"]
opaque rawRead (key : String) : IO (Option String)

/-- Check if a key exists in storage. -/
@[extern "lean_near_storage_has_key"]
opaque hasKey (key : String) : IO Bool

/-- Remove a key from storage. Returns true if key was present. -/
@[extern "lean_near_storage_remove"]
opaque remove (key : String) : IO Bool

/-- Write a String value to storage. -/
def write (key : String) (value : String) : IO Bool := rawWrite key value

/-- Read a String value from storage, with a default. -/
def read (key : String) (default : String) : IO String := do
  match (← rawRead key) with
  | some v => pure v
  | none => pure default

/-- Read a String value from storage as Option. -/
def read? (key : String) : IO (Option String) := rawRead key

/-- Write a UInt64 to storage. -/
def writeU64 (key : String) (value : UInt64) : IO Bool := rawWrite key (toString value)

/-- Increment a numeric counter in storage, return new value. -/
def increment (key : String) : IO UInt64 := do
  let current := (← rawRead key).getD "0"
  let n := current.toNat?.getD 0
  let next := n + 1
  let _ ← rawWrite key (toString next)
  pure next.toUInt64

end Storage

-- ============================================================================
-- Environment (adapted from near-sdk-zig env.zig)
-- ============================================================================

namespace Env

/-- Get the current contract's account ID. -/
@[extern "lean_near_current_account_id"]
opaque currentAccountId : IO String

/-- Get the predecessor (caller) account ID. -/
@[extern "lean_near_predecessor_account_id"]
opaque predecessorAccountId : IO String

/-- Get the current block timestamp (nanoseconds since epoch). -/
@[extern "lean_near_block_timestamp"]
opaque blockTimestamp : IO UInt64

/-- Get the current block height. -/
@[extern "lean_near_block_height"]
opaque blockHeight : IO UInt64

/-- Read the raw input of the contract call. -/
@[extern "lean_near_input"]
opaque input : IO String

/-- Return a value to the caller (for view methods). -/
@[extern "lean_near_value_return"]
opaque valueReturn (data : String) : IO Unit

/-- Log a message to the transaction receipt. -/
@[extern "lean_near_log"]
opaque log (msg : String) : IO Unit

end Env

-- ============================================================================
-- Contract framework (adapted from near-sdk-zig contract.zig)
-- ============================================================================

namespace Contract

/-- Check if the contract is initialized (STATE key exists). -/
def isInitialized : IO Bool := Storage.hasKey "STATE"

/-- Return a value (string) to the caller. -/
def returnValue (value : String) : IO Unit := Env.valueReturn value

/-- Return success with no body. -/
def done : IO Unit := Env.valueReturn ""

/-- Return a boolean as a string. -/
def returnBool (b : Bool) : IO Unit := Env.valueReturn (if b then "true" else "false")

/-- Require a condition, log error if false. -/
def require (condition : Bool) (msg : String) : IO Unit := do
  if !condition then Env.log msg

/-- Initialize the contract state. -/
def initState (value : String) : IO Bool := Storage.write "STATE" value

/-- Load contract state. -/
def loadState : IO (Option String) := Storage.read? "STATE"

end Contract

-- ============================================================================
-- Persistent collections (adapted from near-sdk-zig collections/)
-- ============================================================================

/-- A persistent counter backed by NEAR storage. -/
structure Counter where
  key : String

namespace Counter

/-- Create a new counter at a given storage key. -/
def make (key : String) : Counter := ⟨key⟩

/-- Get the current count. -/
def get (c : Counter) : IO UInt64 := do
  let val := (← Storage.rawRead c.key).getD "0"
  pure (val.toNat?.getD 0).toUInt64

/-- Increment and return the new value. -/
def increment (c : Counter) : IO UInt64 := Storage.increment c.key

/-- Reset to 0. -/
def reset (c : Counter) : IO Bool := Storage.write c.key "0"

/-- Set to a specific value. -/
def set (c : Counter) (n : UInt64) : IO Bool := Storage.write c.key (toString n)

end Counter

/-- A simple string-to-string persistent map using storage prefixes. -/
structure StringMap where
  mapPrefix : String

namespace StringMap

/-- Create a new map with a storage prefix. -/
def make (mapPrefix : String) : StringMap := ⟨mapPrefix⟩

/-- Build a storage key from the prefix and a key. -/
def storageKey (m : StringMap) (key : String) : String :=
  m.mapPrefix ++ ":" ++ key

/-- Get a value from the map. -/
def get (m : StringMap) (key : String) : IO (Option String) :=
  Storage.rawRead (m.storageKey key)

/-- Set a value in the map. -/
def set (m : StringMap) (key : String) (value : String) : IO Bool :=
  Storage.rawWrite (m.storageKey key) value

/-- Check if a key exists. -/
def contains (m : StringMap) (key : String) : IO Bool :=
  Storage.hasKey (m.storageKey key)

/-- Remove a key. -/
def remove (m : StringMap) (key : String) : IO Bool :=
  Storage.remove (m.storageKey key)

/-- Get with a default value. -/
def getOr (m : StringMap) (key : String) (default : String) : IO String := do
  match (← m.get key) with
  | some v => pure v
  | none => pure default

end StringMap

end Near
