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

## Quick Example: Storage-backed Counter Contract

```lean
import Lean.Near

open Near

def main : IO UInt32 := do
  let countKey : Storage.Key UInt64 := Storage.Key.make "count"
  let next ← countKey.modify 0 (· + 1)
  Env.log s!"incremented to {next}"
  Contract.returnU64 next
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
  deriving BEq, Repr

namespace AccountId

def minLen : Nat := 2
def maxLen : Nat := 64

/-- Construct an account ID without validation. Use for values supplied by the NEAR runtime. -/
def unchecked (s : String) : AccountId := ⟨s⟩

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

/-- String-backed serialization used by Layer 3 storage helpers. -/
class Codec (α : Type) where
  encode : α → String
  decode : String → Option α

@[inline] def parseNat? (s : String) : Option Nat :=
  match s.toList with
  | [] => none
  | chars =>
    chars.foldl (fun acc? c =>
      match acc? with
      | none => none
      | some acc =>
      let code := c.toNat
      let zeroCode := '0'.toNat
      let nineCode := '9'.toNat
      if code < zeroCode || code > nineCode then
        none
      else
        some (acc * 10 + (code - zeroCode))) (some 0)

instance : Codec String where
  encode := id
  decode := some

instance : Codec UInt64 where
  encode := toString
  decode s :=
    match parseNat? s with
    | some n => some n.toUInt64
    | none => none

instance : Codec Nat where
  encode := toString
  decode := parseNat?

instance : Codec Bool where
  encode b := if b then "true" else "false"
  decode s :=
    if s == "true" then some true
    else if s == "false" then some false
    else none

instance : Codec AccountId where
  encode := AccountId.asStr
  decode := AccountId.parse

instance : Codec NearToken where
  encode t := toString t.yoctoNear
  decode s :=
    match parseNat? s with
    | some n => some (NearToken.fromYocto n.toUInt64)
    | none => none

instance : Codec Gas where
  encode g := toString g.inner
  decode s :=
    match parseNat? s with
    | some n => some (Gas.fromGas n.toUInt64)
    | none => none

/-- Read and decode a typed value from storage. Decode failures are treated as missing values. -/
@[inline] def readAs? [Codec α] (key : String) : IO (Option α) := do
  match (← rawRead key) with
  | some value => pure (Codec.decode value)
  | none => pure none

/-- Read and decode a typed value, falling back to a caller-provided default. -/
@[inline] def readAs [Codec α] (key : String) (default : α) : IO α := do
  match (← readAs? (α := α) key) with
  | some value => pure value
  | none => pure default

/-- Encode and write a typed value to storage. -/
@[inline] def writeAs [Codec α] (key : String) (value : α) : IO Bool :=
  rawWrite key (Codec.encode value)

/-- Alias for `hasKey` that reads naturally in typed storage code. -/
@[inline] def contains (key : String) : IO Bool := hasKey key

/-- Alias for `remove`. -/
@[inline] def delete (key : String) : IO Bool := remove key

/-- Typed storage key. The phantom type pins the expected value codec. -/
structure Key (α : Type) where
  name : String
  deriving Repr

namespace Key

/-- Create a typed storage key. -/
@[inline] def make (name : String) : Key α := ⟨name⟩

/-- Read a typed key. -/
@[inline] def read? [Codec α] (key : Key α) : IO (Option α) :=
  Storage.readAs? (α := α) key.name

/-- Read a typed key with a default. -/
@[inline] def read [Codec α] (key : Key α) (default : α) : IO α :=
  Storage.readAs (α := α) key.name default

/-- Write a typed key. -/
@[inline] def write [Codec α] (key : Key α) (value : α) : IO Bool :=
  Storage.writeAs key.name value

/-- Check if a typed key exists. -/
@[inline] def contains (key : Key α) : IO Bool := Storage.contains key.name

/-- Remove a typed key. -/
@[inline] def remove (key : Key α) : IO Bool := Storage.remove key.name

/-- Modify a present typed value, returning none if the key is absent or undecodable. -/
@[inline] def modify? [Codec α] (key : Key α) (f : α → α) : IO (Option α) := do
  match (← key.read?) with
  | some current =>
    let next := f current
    let _ ← key.write next
    pure (some next)
  | none => pure none

/-- Modify a typed value using a default when the key is missing or undecodable. -/
@[inline] def modify [Codec α] (key : Key α) (default : α) (f : α → α) : IO α := do
  let current ← key.read default
  let next := f current
  let _ ← key.write next
  pure next

end Key

/-- A single typed storage slot. -/
structure Slot (α : Type) where
  key : Key α
  deriving Repr

namespace Slot

/-- Create a typed storage slot. -/
@[inline] def make (name : String) : Slot α := ⟨Key.make name⟩

@[inline] def read? [Codec α] (slot : Slot α) : IO (Option α) := slot.key.read?
@[inline] def read [Codec α] (slot : Slot α) (default : α) : IO α := slot.key.read default
@[inline] def write [Codec α] (slot : Slot α) (value : α) : IO Bool := slot.key.write value
@[inline] def contains (slot : Slot α) : IO Bool := slot.key.contains
@[inline] def remove (slot : Slot α) : IO Bool := slot.key.remove
@[inline] def modify? [Codec α] (slot : Slot α) (f : α → α) : IO (Option α) := slot.key.modify? f
@[inline] def modify [Codec α] (slot : Slot α) (default : α) (f : α → α) : IO α :=
  slot.key.modify default f

end Slot

/-- A typed string-keyed map backed by NEAR storage prefixes. -/
structure TypedMap (α : Type) where
  mapPrefix : String
  deriving Repr

namespace TypedMap

/-- Create a typed map using the given storage prefix. -/
@[inline] def make (mapPrefix : String) : TypedMap α := ⟨mapPrefix⟩

/-- Build the concrete storage key for a map entry. -/
@[inline] def storageKey (m : TypedMap α) (key : String) : String :=
  m.mapPrefix ++ ":" ++ key

/-- Read and decode a map entry. -/
@[inline] def get [Codec α] (m : TypedMap α) (key : String) : IO (Option α) :=
  Storage.readAs? (α := α) (m.storageKey key)

/-- Read a map entry with a default. -/
@[inline] def getOr [Codec α] (m : TypedMap α) (key : String) (default : α) : IO α :=
  Storage.readAs (α := α) (m.storageKey key) default

/-- Set a typed map entry. -/
@[inline] def set [Codec α] (m : TypedMap α) (key : String) (value : α) : IO Bool :=
  Storage.writeAs (m.storageKey key) value

/-- Check if a map entry exists. -/
@[inline] def contains (m : TypedMap α) (key : String) : IO Bool :=
  Storage.contains (m.storageKey key)

/-- Remove a map entry. -/
@[inline] def remove (m : TypedMap α) (key : String) : IO Bool :=
  Storage.remove (m.storageKey key)

/-- Modify a map entry using a default when the entry is missing or undecodable. -/
@[inline] def modify [Codec α] (m : TypedMap α) (key : String) (default : α) (f : α → α) : IO α := do
  let current ← m.getOr key default
  let next := f current
  let _ ← m.set key next
  pure next

end TypedMap

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

/-- Get the current contract account as an `AccountId`. -/
@[inline] def currentAccount : IO AccountId := do
  pure (AccountId.unchecked (← currentAccountId))

/-- Get the predecessor account as an `AccountId`. -/
@[inline] def predecessorAccount : IO AccountId := do
  pure (AccountId.unchecked (← predecessorAccountId))

/-- Alias for raw contract input as a UTF-8 string. -/
@[inline] def inputString : IO String := input

/-- Snapshot of the NEAR execution context currently exposed by the bridge. -/
structure Context where
  currentAccount : AccountId
  predecessorAccount : AccountId
  blockHeight : UInt64
  blockTimestamp : UInt64
  input : String
  deriving Repr

/-- Read the execution context with typed account IDs. -/
@[inline] def context : IO Context := do
  let currentAccount ← currentAccount
  let predecessorAccount ← predecessorAccount
  let blockHeight ← blockHeight
  let blockTimestamp ← blockTimestamp
  let input ← input
  pure { currentAccount, predecessorAccount, blockHeight, blockTimestamp, input }

/-- Log any value with a `ToString` instance. -/
@[inline] def logValue [ToString α] (value : α) : IO Unit :=
  log (toString value)

end Env

-- ============================================================================
-- Contract framework (adapted from near-sdk-zig contract.zig)
-- ============================================================================

namespace Contract

/-- Contract method kind tracked at the Lean API level. -/
inductive Mode where
  | init
  | view
  | update
  deriving BEq, Repr

abbrev InitM := IO
abbrev ViewM := IO
abbrev UpdateM := IO

/-- A named contract method with its access mode tracked by a phantom type. -/
structure Method (mode : Mode) where
  name : String
  run : IO UInt32

/-- Run a contract action and return a NEAR-compatible success code. -/
@[inline] def entry (action : IO Unit) : IO UInt32 := do
  action
  pure 0

/-- Define an initializer method. -/
@[inline] def initializer (name : String) (action : InitM Unit) : Method .init :=
  { name, run := entry action }

/-- Define a view method. -/
@[inline] def view (name : String) (action : ViewM Unit) : Method .view :=
  { name, run := entry action }

/-- Define an update method. -/
@[inline] def update (name : String) (action : UpdateM Unit) : Method .update :=
  { name, run := entry action }

/-- Check if the contract is initialized (STATE key exists). -/
@[inline] def isInitialized : IO Bool := Storage.contains "STATE"

/-- Return a value (string) to the caller. -/
@[inline] def returnValue (value : String) : IO Unit := Env.valueReturn value

/-- Return a UTF-8 text value to the caller. -/
@[inline] def returnText (value : String) : IO Unit := returnValue value

/-- Return a JSON payload to the caller. The caller is responsible for valid JSON. -/
@[inline] def returnJson (value : String) : IO Unit := returnValue value

/-- Return success with no body. -/
@[inline] def done : IO Unit := Env.valueReturn ""

/-- Return a boolean as a string. -/
@[inline] def returnBool (b : Bool) : IO Unit := Env.valueReturn (if b then "true" else "false")

/-- Return a `UInt64` as a string. -/
@[inline] def returnU64 (n : UInt64) : IO Unit := returnValue (toString n)

/-- Return a `Nat` as a string. -/
@[inline] def returnNat (n : Nat) : IO Unit := returnValue (toString n)

/-- Return an account ID as a string. -/
@[inline] def returnAccountId (account : AccountId) : IO Unit := returnValue account.id

/-- Return a storage-codec encoded value. -/
@[inline] def returnEncoded [Storage.Codec α] (value : α) : IO Unit :=
  returnValue (Storage.Codec.encode value)

/-- Require a condition. Until the bridge exposes NEAR panic, failures log and return false. -/
@[inline] def require (condition : Bool) (msg : String) : IO Bool := do
  if condition then
    pure true
  else
    Env.log msg
    pure false

/-- Require that the contract is already initialized. -/
@[inline] def requireInitialized : IO Bool := do
  require (← isInitialized) "contract is not initialized"

/-- Require that the contract is not initialized yet. -/
@[inline] def requireNotInitialized : IO Bool := do
  let initialized ← isInitialized
  require (!initialized) "contract is already initialized"

/-- Check whether the predecessor is the given account. -/
@[inline] def isPredecessor (account : AccountId) : IO Bool := do
  pure ((← Env.predecessorAccount) == account)

/-- Require the predecessor to match an expected account. -/
@[inline] def requirePredecessor (account : AccountId) : IO Bool := do
  require (← isPredecessor account) ("expected predecessor " ++ toString account)

/-- Initialize the contract state. -/
@[inline] def initState (value : String) : IO Bool := Storage.write "STATE" value

/-- Load contract state. -/
@[inline] def loadState : IO (Option String) := Storage.read? "STATE"

/-- Save typed contract state at the conventional `STATE` key. -/
@[inline] def initStateAs [Storage.Codec α] (value : α) : IO Bool :=
  Storage.writeAs "STATE" value

/-- Alias for writing typed contract state. -/
@[inline] def saveStateAs [Storage.Codec α] (value : α) : IO Bool := initStateAs value

/-- Load and decode typed contract state from the conventional `STATE` key. -/
@[inline] def loadStateAs? [Storage.Codec α] : IO (Option α) :=
  Storage.readAs? (α := α) "STATE"

/-- Load typed contract state with a default. -/
@[inline] def loadStateAs [Storage.Codec α] (default : α) : IO α :=
  Storage.readAs (α := α) "STATE" default

end Contract

-- ============================================================================
-- Persistent collections (adapted from near-sdk-zig collections/)
-- ============================================================================

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
