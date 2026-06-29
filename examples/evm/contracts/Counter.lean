/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

A minimal EVM counter contract written against `Lean.Evm`.

Demonstrates: storage read/write, selector dispatch, increment logic.

Compile: `tools/evmc examples/evm/contracts/Counter.lean`
-/
import Lean.Evm
open Lean.Evm

namespace Counter

/-- Get the current counter value. -/
@[export l_Counter_get]
def get : IO Nat := Storage.load 0

/-- Set the counter to a specific value. -/
@[export l_Counter_set]
def set (v : Nat) : IO Unit := Storage.store 0 v

/-- Increment the counter by 1. -/
@[export l_Counter_increment]
def increment : IO Unit := do
  let n ← Storage.load 0
  Storage.store 0 (n + 1)

/-- Decrement the counter by 1 (floor at 0). -/
@[export l_Counter_decrement]
def decrement : IO Unit := do
  let n ← Storage.load 0
  if n > 0 then
    Storage.store 0 (n - 1)

end Counter
