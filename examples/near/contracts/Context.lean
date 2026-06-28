/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/

import Lean.Near

/-!
Environment/context example showing typed account IDs, gas, deposit, block
metadata, and guard helpers.
-/

open Near

namespace ContextExample

def init : Contract.Method .init := Contract.initializer "init" do
  let ok ← Contract.requireNotInitialized
  if ok then
    let signer ← Env.signerAccount
    let _ ← Contract.initStateAs signer
    Contract.returnAccountId signer

def context : Contract.Method .view := Contract.view "context" do
  let ctx ← Env.context
  Contract.returnJson
    ("{\"current\":\"" ++ toString ctx.currentAccount ++
      "\",\"predecessor\":\"" ++ toString ctx.predecessorAccount ++
      "\",\"signer\":\"" ++ toString ctx.signerAccount ++
      "\",\"block_height\":\"" ++ toString ctx.blockHeight ++
      "\",\"storage_usage\":\"" ++ toString ctx.storageUsage ++ "\"}")

def owner : Contract.Method .view := Contract.view "owner" do
  match (← Contract.loadStateAs? (α := AccountId)) with
  | some account => Contract.returnAccountId account
  | none => Contract.returnText ""

def privatePing : Contract.Method .update := Contract.update "private_ping" do
  let _ ← Contract.requirePrivate "private_ping"
  Contract.returnText "pong"

end ContextExample

def main : IO UInt32 := ContextExample.context.run
