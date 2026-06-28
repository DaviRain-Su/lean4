/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/

import Lean.Near

/-!
A small DeFi-style vault that keeps executable contract code and formal
specification in one Lean file.

The important pattern is:

1. Model the financial state transitions as pure Lean functions.
2. Prove invariants about those transitions.
3. Make the NEAR entrypoints call the verified transition functions.

The proof section below is erased from runtime code, but Lean checks it before
EmitZig generates the contract WASM.
-/

open Near

namespace VerifiedVault

namespace Spec

abbrev Amount := Near.Amount.U128

/-- Pure model of the vault's financial state. -/
structure State where
  reserves : Amount
  shares : Amount
  deriving Repr

/-- The vault is fully collateralized: every share is backed 1:1 by reserves. -/
def solvent (s : State) : Prop :=
  s.reserves = s.shares

def empty : State := { reserves := Near.Amount.U128.zero, shares := Near.Amount.U128.zero }

/-- Mint one share per deposited yoctoNEAR. -/
def deposit? (s : State) (amount : Amount) : Option State := do
  let reserves ← s.reserves.checkedAdd amount
  let shares ← s.shares.checkedAdd amount
  pure { reserves, shares }

/-- Burn one share per withdrawn yoctoNEAR. Callers must check affordability first. -/
def withdraw? (s : State) (amount : Amount) : Option State := do
  let reserves ← s.reserves.checkedSub amount
  let shares ← s.shares.checkedSub amount
  pure { reserves, shares }

/-- Logical guard used before applying `withdraw`. -/
def canWithdraw (s : State) (amount : Amount) : Prop :=
  amount.le s.reserves = true ∧ amount.le s.shares = true

/-- Runtime form of `canWithdraw`. -/
def canWithdrawBool (s : State) (amount : Amount) : Bool :=
  amount.le s.reserves && amount.le s.shares

theorem empty_solvent : solvent empty := by
  rfl

theorem deposit_preserves_solvent {s next : State} {amount : Amount}
    (h : solvent s) (hn : deposit? s amount = some next) : solvent next := by
  cases s with
  | mk reserves shares =>
    unfold solvent at h
    cases h
    unfold deposit? at hn
    cases hAdd : Near.Amount.U128.checkedAdd reserves amount <;> simp [hAdd] at hn
    cases hn
    rfl

theorem withdraw_preserves_solvent {s next : State} {amount : Amount}
    (h : solvent s) (hn : withdraw? s amount = some next) : solvent next := by
  cases s with
  | mk reserves shares =>
    unfold solvent at h
    cases h
    unfold withdraw? at hn
    cases hSub : Near.Amount.U128.checkedSub reserves amount <;> simp [hSub] at hn
    cases hn
    rfl

theorem canWithdraw_implies_reserve_bound {s : State} {amount : Amount}
    (h : canWithdraw s amount) : amount.le s.reserves = true := by
  exact h.left

theorem canWithdraw_implies_share_bound {s : State} {amount : Amount}
    (h : canWithdraw s amount) : amount.le s.shares = true := by
  exact h.right

end Spec

def parseUInt64? (raw : String) : Option UInt64 := do
  let amount ← Storage.parseNat? raw
  some amount.toUInt64

def parseAmount (raw : String) : Option Spec.Amount := do
  let amount ← parseUInt64? raw
  some (Near.Amount.U128.ofUInt64 amount)

namespace StorageState

def reserves : Storage.U128Key := Storage.U128Key.make "vault:reserves"
def shares : Storage.U128Key := Storage.U128Key.make "vault:shares"

def read : IO Spec.State := do
  let r ← reserves.read
  let s ← shares.read
  pure { reserves := r, shares := s }

def write (s : Spec.State) : IO Unit := do
  reserves.write s.reserves
  shares.write s.shares

end StorageState

def returnStateJson (s : Spec.State) : IO Unit :=
  Contract.returnJson
    ("{\"reserves\":\"" ++ toString s.reserves ++
      "\",\"shares\":\"" ++ toString s.shares ++ "\"}")

def init : Contract.Method .init := Contract.initializer "init" do
  let ok ← Contract.requireNotInitialized
  if ok then
    let _ ← Contract.initStateAs true
    StorageState.write Spec.empty
    returnStateJson Spec.empty

def status : Contract.Method .view := Contract.view "status" do
  returnStateJson (← StorageState.read)

def deposit : Contract.Method .update := Contract.update "deposit" do
  let _ ← Contract.requireInitialized
  let amount ← Env.attachedDepositAmount
  let _ ← Contract.require (!amount.isZero) "deposit requires attached NEAR"
  let current ← StorageState.read
  match Spec.deposit? current amount with
  | none => Contract.panic "vault deposit overflow"
  | some next =>
    StorageState.write next
    Event.emit "near-lean-vault" "1.0.0" "deposit"
      ("[{\"amount\":\"" ++ toString amount ++ "\"}]")
    returnStateJson next

def withdraw : Contract.Method .update := Contract.update "withdraw" do
  let _ ← Contract.requireInitialized
  let attachedDeposit ← Env.attachedDepositAmount
  let _ ← Contract.require (attachedDeposit == Near.Amount.U128.zero) "Method is not payable"
  let raw ← Env.inputString
  match parseAmount raw with
  | none => Contract.panic "withdraw amount must be a decimal yoctoNEAR string"
  | some amount =>
    let current ← StorageState.read
    let _ ← Contract.require (Spec.canWithdrawBool current amount) "insufficient vault shares"
    match Spec.withdraw? current amount with
    | none => Contract.panic "vault withdraw underflow"
    | some next =>
      StorageState.write next
      Event.emit "near-lean-vault" "1.0.0" "withdraw"
        ("[{\"amount\":\"" ++ toString amount ++ "\"}]")
      let receiver ← Env.predecessorAccount
      let promise ← Promise.new receiver
      let promise ← promise.transfer (NearToken.fromU128 amount)
      Promise.returnPromise promise

end VerifiedVault

def main : IO UInt32 := VerifiedVault.deposit.run
