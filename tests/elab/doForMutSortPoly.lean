import Lean

/-!
Test that `getLevel` instantiates and normalizes level metavariables.

Without this, `getDecLevel` fails on sort-polymorphic types with `Prop` components:
`PProd.{?u, ?v} Nat True` has sort `max ?u ?v`. After `?u := 1`, `?v := 0`, this should
normalize to `1` (decrementable to `0`), but without instantiation `decLevel` sees
`max ?u ?v`, tries to decrement each arm independently inside the `max`, follows
`?v → 0`, and fails because `dec 0 = none`.
-/

-- Direct reproducer: getDecLevel on PProd with assigned-but-uninstantiated level mvars
open Lean Meta in
#eval show MetaM _ from do
  let u ← mkFreshLevelMVar
  let v ← mkFreshLevelMVar
  let ty := mkApp2 (mkConst ``PProd [u, v]) (mkConst ``Nat) (mkConst ``True)
  assignLevelMVar u.mvarId! (.succ .zero)
  assignLevelMVar v.mvarId! .zero
  let lvl ← getDecLevel ty
  assert! lvl == .zero

-- End-to-end: for loop with sort-polymorphic mut var
def foo : Unit := Id.run do
  let mut x : PProd Nat True := ⟨0, trivial⟩
  for _ in [true] do
    x := ⟨0, trivial⟩
    break
