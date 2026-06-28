/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/

import Lean.Near

/-!
A minimal NEAR counter contract written against the Lean Layer 3 SDK.
-/

open Near

namespace Counter

def count : Storage.Key UInt64 := Storage.Key.make "count"

def init : Contract.Method .init := Contract.initializer "init" do
  let ok ← Contract.requireNotInitialized
  if ok then
    let _ ← Contract.initStateAs true
    let _ ← count.write 0
    Contract.returnU64 0

def get : Contract.Method .view := Contract.view "get" do
  Contract.returnU64 (← count.read 0)

def increment : Contract.Method .update := Contract.update "increment" do
  let _ ← Contract.requireInitialized
  let next ← count.modify 0 (· + 1)
  Env.log ("incremented to " ++ toString next)
  Contract.returnU64 next

end Counter

def main : IO UInt32 := Counter.increment.run
