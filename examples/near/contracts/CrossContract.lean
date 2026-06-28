/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/

import Lean.Near

/-!
Promise example. `call_ping` schedules a self-call to `ping`, attaches the
private `on_ping` callback, and returns the promise.
-/

open Near

namespace CrossContract

def init : Contract.Method .init := Contract.initializer "init" do
  let ok ← Contract.requireNotInitialized
  if ok then
    let _ ← Contract.initStateAs true
    Contract.done

def ping : Contract.Method .view := Contract.view "ping" do
  Contract.returnText "pong"

def callPing : Contract.Method .update := Contract.update "call_ping" do
  let _ ← Contract.requireInitialized
  let ctx ← Env.context
  let promise ← Promise.create ctx.currentAccount "ping" "{}" NearToken.zero (Gas.fromTgas 5)
  let callback ← promise.thenCall ctx.currentAccount "on_ping" "{}" NearToken.zero (Gas.fromTgas 5)
  Promise.returnPromise callback

def onPing : Contract.Method .update := Contract.update "on_ping" do
  let _ ← Contract.requirePrivate "on_ping"
  let count ← Promise.resultsCount
  Contract.returnU64 count

end CrossContract

def main : IO UInt32 := CrossContract.callPing.run
