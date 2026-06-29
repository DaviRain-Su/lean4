/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

A DeFi-style vault contract with formal verification, using typed storage
data structures (Storage.Var, Storage.Map) that mirror Solidity's storage
variable system.

Compare the storage layout section to the equivalent Solidity:

```solidity
address public owner;           // Storage.Var Nat 0
uint256 public reserves;        // Storage.Var Nat 2
uint256 public totalShares;     // Storage.Var Nat 3
mapping(address => uint256) public balanceOf;  // Storage.Map Nat 4
```

The formal specification and proofs guarantee that reserves == totalShares
(the vault is always fully collateralized) after every deposit and withdraw.
-/
import Lean.Evm
open Lean.Evm

namespace VerifiedVault

-- ## Typed storage layout (Solidity-style)

/-- slot 0: contract owner -/
def owner : Storage.Var Nat := Storage.Var.ofSlot 0

/-- slot 1: initialized flag -/
def initialized : Storage.Var Nat := Storage.Var.ofSlot 1

/-- slot 2: total reserves -/
def reservesVar : Storage.Var Nat := Storage.Var.ofSlot 2

/-- slot 3: total shares outstanding -/
def totalSharesVar : Storage.Var Nat := Storage.Var.ofSlot 3

/-- slot 4: depositor => share balance (mapping) -/
def balances : Storage.Map Nat := Storage.Map.ofSlot 4

-- ## Pure financial model + proofs

namespace Spec

structure State where
  reserves : Nat
  shares   : Nat

def solvent (s : State) : Prop := s.reserves = s.shares

def empty : State := { reserves := 0, shares := 0 }

def deposit? (s : State) (amount : Nat) : Option State :=
  some { reserves := s.reserves + amount, shares := s.shares + amount }

def withdraw? (s : State) (amount : Nat) : Option State :=
  if amount ≤ s.reserves ∧ amount ≤ s.shares then
    some { reserves := s.reserves - amount, shares := s.shares - amount }
  else none

def canWithdraw (s : State) (amount : Nat) : Bool :=
  amount ≤ s.reserves ∧ amount ≤ s.shares

theorem empty_solvent : solvent empty := by rfl

theorem deposit_preserves_solvent {s next : State} {amount : Nat}
    (h : solvent s) (hn : deposit? s amount = some next) : solvent next := by
  unfold deposit? at hn
  simp at hn
  rw [← hn]
  show s.reserves + amount = s.shares + amount
  rw [h]

theorem withdraw_preserves_solvent {s next : State} {amount : Nat}
    (h : solvent s) (hn : withdraw? s amount = some next) : solvent next := by
  unfold withdraw? at hn
  by_cases w : amount ≤ s.reserves ∧ amount ≤ s.shares
  · simp [w] at hn
    rw [← hn]; show s.reserves - amount = s.shares - amount; rw [h]
  · simp [w] at hn

end Spec

-- ## Storage boundary: read/write the verified State through typed vars

namespace StorageState

def read : IO Spec.State := do
  let r ← reservesVar.read
  let s ← totalSharesVar.read
  pure { reserves := r, shares := s }

def write (s : Spec.State) : IO Unit := do
  reservesVar.write s.reserves
  totalSharesVar.write s.shares

end StorageState

-- ## EVM entrypoints

/-- Initialize the vault. Caller becomes owner. -/
@[export l_VerifiedVault_init]
def init : IO Unit := do
  let o ← Env.sender
  owner.write o
  initialized.write 1
  StorageState.write Spec.empty

/-- Deposit ether, mint 1:1 shares to caller. -/
@[export l_VerifiedVault_deposit]
def deposit : IO Unit := do
  let depositor ← Env.sender
  let amount ← Env.value
  if amount == 0 then revert
  else do
    let current ← StorageState.read
    match Spec.deposit? current amount with
    | none => revert
    | some next =>
      StorageState.write next
      let _ ← balances.modify depositor (· + amount)

/-- Withdraw `amount` shares, send ether back to caller. -/
@[export l_VerifiedVault_withdraw]
def withdraw (amount : Nat) : IO Unit := do
  let caller ← Env.sender
  let current ← StorageState.read
  let bal ← balances.get caller
  if amount > bal then revert
  else if ! Spec.canWithdraw current amount then revert
  else
    match Spec.withdraw? current amount with
    | none => revert
    | some next =>
      StorageState.write next
      let _ ← balances.modify caller (· - amount)
      let _ ← call 50000 caller amount 0 0 0 0

/-- Query: total reserves. -/
@[export l_VerifiedVault_reserves]
def reserves : IO Nat := reservesVar.read

/-- Query: total shares outstanding. -/
@[export l_VerifiedVault_totalShares]
def totalShares : IO Nat := totalSharesVar.read

/-- Query: a depositor's share balance. -/
@[export l_VerifiedVault_balanceOf]
def balanceOf (depositor : Nat) : IO Nat := balances.get depositor

end VerifiedVault
