/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Ownable — access control primitive (OpenZeppelin `access/Ownable.sol`).

Provides single-owner authorization via a `onlyOwner` guard. The owner is
set at initialization and can be transferred.

Solidity equivalent:
```solidity
contract Ownable {
    address private _owner;
    modifier onlyOwner() { ... }
    function owner() public view returns (address) { ... }
    function transferOwnership(address newOwner) public onlyOwner { ... }
}
```
-/
import Lean.Evm
open Lean.Evm

namespace Ownable

-- ## Storage layout
def ownerSlot : Storage.Var Nat := Storage.Var.ofSlot 0

-- ## Pure model + proofs

namespace Spec

structure State where
  owner : Nat

def initialized (s : State) : Prop := s.owner ≠ 0

/-- Only `s.owner` is authorized. -/
def isOwner (s : State) (caller : Nat) : Prop := caller = s.owner

theorem isOwner_refl (s : State) : isOwner s s.owner := by rfl

end Spec

-- ## Storage boundary

def read : IO Spec.State := do
  let o ← ownerSlot.read
  pure { owner := o }

def write (s : Spec.State) : IO Unit := ownerSlot.write s.owner

-- ## Guards

/-- Revert if caller is not the owner. -/
def onlyOwner : IO Unit := do
  let s ← read
  let caller ← Env.sender
  if caller != s.owner then revert

/-- Revert if not initialized. -/
def requireInitialized : IO Unit := do
  let o ← ownerSlot.read
  if o == 0 then revert

-- ## Entrypoints

/-- Initialize ownership. Caller becomes owner. -/
@[export l_Ownable_init]
def init : IO Unit := do
  let o ← ownerSlot.read
  if o != 0 then revert
  let caller ← Env.sender
  ownerSlot.write caller

/-- Get the current owner. -/
@[export l_Ownable_owner]
def owner : IO Nat := ownerSlot.read

/-- Transfer ownership to a new address. Only the current owner can call this. -/
@[export l_Ownable_transferOwnership]
def transferOwnership (newOwner : Nat) : IO Unit := do
  onlyOwner
  if newOwner == 0 then revert
  ownerSlot.write newOwner

/-- Renounce ownership (set to zero). Only the current owner can call this. -/
@[export l_Ownable_renounceOwnership]
def renounceOwnership : IO Unit := do
  onlyOwner
  ownerSlot.write 0

end Ownable
