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

/-- Pure model of the vault's financial state. -/
structure State where
  reserves : Nat
  shares : Nat
  deriving Repr, BEq

/-- The vault is fully collateralized: every share is backed 1:1 by reserves. -/
def solvent (s : State) : Prop :=
  s.reserves = s.shares

def empty : State := { reserves := 0, shares := 0 }

/-- Mint one share per deposited yoctoNEAR. -/
def deposit (s : State) (amount : Nat) : State :=
  { reserves := s.reserves + amount, shares := s.shares + amount }

/-- Burn one share per withdrawn yoctoNEAR. Callers must check affordability first. -/
def withdraw (s : State) (amount : Nat) : State :=
  { reserves := s.reserves - amount, shares := s.shares - amount }

/-- Logical guard used before applying `withdraw`. -/
def canWithdraw (s : State) (amount : Nat) : Prop :=
  amount <= s.reserves ∧ amount <= s.shares

/-- Runtime form of `canWithdraw`. -/
def canWithdrawBool (s : State) (amount : Nat) : Bool :=
  decide (amount <= s.reserves) && decide (amount <= s.shares)

theorem empty_solvent : solvent empty := by
  rfl

theorem deposit_preserves_solvent {s : State} {amount : Nat}
    (h : solvent s) : solvent (deposit s amount) := by
  unfold solvent deposit
  rw [h]

theorem withdraw_preserves_solvent {s : State} {amount : Nat}
    (h : solvent s) : solvent (withdraw s amount) := by
  unfold solvent withdraw
  rw [h]

theorem canWithdraw_implies_reserve_bound {s : State} {amount : Nat}
    (h : canWithdraw s amount) : amount <= s.reserves := by
  exact h.left

theorem canWithdraw_implies_share_bound {s : State} {amount : Nat}
    (h : canWithdraw s amount) : amount <= s.shares := by
  exact h.right

end Spec

namespace StorageState

def reserves : Storage.Key Nat := Storage.Key.make "vault:reserves"
def shares : Storage.Key Nat := Storage.Key.make "vault:shares"

def read : IO Spec.State := do
  let reserves ← reserves.read 0
  let shares ← shares.read 0
  pure { reserves, shares }

def write (s : Spec.State) : IO Unit := do
  let _ ← reserves.write s.reserves
  let _ ← shares.write s.shares

end StorageState

def parseAmount (raw : String) : Option Nat :=
  Storage.parseNat? raw

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
  let ctx ← Env.context
  let amount := ctx.attachedDeposit.yoctoNear
  let _ ← Contract.require (0 < amount) "deposit requires attached NEAR"
  let current ← StorageState.read
  let next := Spec.deposit current amount
  StorageState.write next
  Env.log ("deposit " ++ toString amount)
  returnStateJson next

def withdraw : Contract.Method .update := Contract.update "withdraw" do
  let _ ← Contract.requireInitialized
  let attachedDeposit ← Env.attachedDeposit
  let _ ← Contract.require (attachedDeposit.yoctoNear == 0) "Method is not payable"
  let raw ← Env.inputString
  match parseAmount raw with
  | none => Contract.panic "withdraw amount must be a decimal yoctoNEAR string"
  | some amount =>
    let current ← StorageState.read
    let _ ← Contract.require (Spec.canWithdrawBool current amount) "insufficient vault shares"
    let next := Spec.withdraw current amount
    StorageState.write next
    let receiver ← Env.predecessorAccount
    let promise ← Promise.new receiver
    Promise.batchActionTransferRaw promise.index.value (toString amount)
    Promise.returnPromise promise

end VerifiedVault

def main : IO UInt32 := VerifiedVault.deposit.run
