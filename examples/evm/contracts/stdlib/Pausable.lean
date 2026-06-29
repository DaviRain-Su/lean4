/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Pausable — emergency stop primitive (OpenZeppelin `utils/Pausable.sol`).

Provides `whenNotPaused` / `whenPaused` guards for emergency halting.

Solidity equivalent:
```solidity
contract Pausable {
    bool private _paused;
    modifier whenNotPaused() { require(!_paused); _; }
    function paused() public view returns (bool) { return _paused; }
    function pause() public onlyOwner { _paused = true; }
    function unpause() public onlyOwner { _paused = false; }
}
```
-/
import Lean.Evm
open Lean.Evm

namespace Pausable

def pausedSlot : Storage.Var Nat := Storage.Var.ofSlot 0

-- ## Pure model

namespace Spec

/-- Paused state invariant: once paused, all nonPaused operations must revert. -/
def paused (s : Nat) : Prop := s ≠ 0

theorem not_paused_zero : ¬ paused 0 := by simp [paused]

end Spec

-- ## Guards

/-- Revert if the contract is paused. -/
def whenNotPaused : IO Unit := do
  let p ← pausedSlot.read
  if p != 0 then revert

/-- Revert if the contract is NOT paused. -/
def whenPaused : IO Unit := do
  let p ← pausedSlot.read
  if p == 0 then revert

-- ## Entrypoints

/-- Check if the contract is paused. -/
@[export l_Pausable_paused]
def paused : IO Nat := pausedSlot.read

/-- Pause the contract. Must be called by an authorized caller (owner). -/
@[export l_Pausable_pause]
def pause : IO Unit := do
  whenNotPaused
  pausedSlot.write 1

/-- Unpause the contract. -/
@[export l_Pausable_unpause]
def unpause : IO Unit := do
  whenPaused
  pausedSlot.write 0

end Pausable
