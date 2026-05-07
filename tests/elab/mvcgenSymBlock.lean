import Std.Tactic.Do

/-! Tests that `mvcgen'` is usable as a step inside `sym => …` blocks. -/

open Std.Do

set_option mvcgen.warning false

/-! ## Trivial postcondition: `mvcgen'` closes the goal -/

axiom G : StateM Nat Unit
axiom H : StateM Nat Unit

noncomputable def F : StateM Nat Unit := do
  G
  H

@[spec]
axiom G_spec : ⦃⌜True⌝⦄ G ⦃⇓ _ n => ⌜n = n⌝⦄

@[spec]
axiom H_spec : ⦃⌜True⌝⦄ H ⦃⇓ _ n => ⌜n = n⌝⦄

example : ⦃⌜True⌝⦄ F ⦃⇓ _ n => ⌜n = n⌝⦄ := by
  sym =>
    mvcgen' [F]

/-! ## Pre-tactic dispatches the leftover VC -/

axiom G2 : StateM Nat Unit
axiom H2 : StateM Nat Unit

noncomputable def F2 : StateM Nat Unit := do
  G2
  H2

axiom P : Nat → Prop

@[spec]
axiom G2_spec : ⦃⌜True⌝⦄ G2 ⦃⇓ _ n => ⌜P n⌝⦄

@[spec]
axiom H2_spec : ⦃fun n => ⌜P n⌝⦄ H2 ⦃⇓ _ n => ⌜True⌝⦄

example : ⦃⌜True⌝⦄ F2 ⦃⇓ _ n => ⌜True⌝⦄ := by
  sym =>
    mvcgen' [F2] with grind

/-! ## VC leftover; closed by a subsequent grind step -/

axiom G3 : StateM Nat Unit
axiom H3 : StateM Nat Unit

noncomputable def F3 : StateM Nat Unit := do
  G3
  H3

axiom Q : Nat → Prop
axiom hPQ : ∀ n, P n → Q n

@[spec]
axiom G3_spec : ⦃⌜True⌝⦄ G3 ⦃⇓ _ n => ⌜P n⌝⦄

@[spec]
axiom H3_spec : ⦃fun n => ⌜Q n⌝⦄ H3 ⦃⇓ _ n => ⌜True⌝⦄

example : ⦃⌜True⌝⦄ F3 ⦃⇓ _ n => ⌜True⌝⦄ := by
  sym =>
    mvcgen' [F3]
    finish [hPQ]

-- `sym [hPQ]` propagates to the new VC `Grind.Goal`s; no need to re-pass it.
example : ⦃⌜True⌝⦄ F3 ⦃⇓ _ n => ⌜True⌝⦄ := by
  sym [hPQ] =>
    mvcgen' [F3]
    finish
