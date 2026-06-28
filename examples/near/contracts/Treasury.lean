/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/

import Lean.Near

/-!
A small payable treasury example.

It demonstrates the Layer 3 amount helpers: attached deposit is read as a
bounded U128 value, persisted with `Storage.U128Key`, and announced through a
NEP-297-style event log.
-/

open Near

namespace Treasury

def totalDeposits : Storage.U128Key := Storage.U128Key.make "treasury:total-deposits"

def init : Contract.Method .init := Contract.initializer "init" do
  let ok ← Contract.requireNotInitialized
  if ok then
    let owner ← Env.predecessorAccount
    let _ ← Contract.initStateAs owner
    totalDeposits.write Amount.U128.zero
    Contract.returnAccountId owner

def balance : Contract.Method .view := Contract.view "balance" do
  let total ← totalDeposits.read
  Contract.returnJson ("{\"total\":\"" ++ toString total ++ "\"}")

def owner : Contract.Method .view := Contract.view "owner" do
  match (← Contract.loadStateAs? (α := AccountId)) with
  | some account => Contract.returnAccountId account
  | none => Contract.returnText ""

def deposit : Contract.Method .update := Contract.update "deposit" do
  let _ ← Contract.requireInitialized
  let amount ← Env.attachedDepositAmount
  let _ ← Contract.require (!amount.isZero) "deposit requires attached NEAR"
  let current ← totalDeposits.read
  match current.checkedAdd amount with
  | none => Contract.panic "treasury total deposit overflow"
  | some next =>
    totalDeposits.write next
    Event.emit "lean-near-treasury" "1.0.0" "deposit"
      ("[{\"amount\":\"" ++ toString amount ++
        "\",\"total\":\"" ++ toString next ++ "\"}]")
    Contract.returnJson ("{\"total\":\"" ++ toString next ++ "\"}")

end Treasury

def main : IO UInt32 := Treasury.deposit.run
