/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Init.While
public import Init.Internal.Order.MonadTail

set_option linter.missingDocs true

@[expose] public section

/-!
# Order-theoretic unfolding for `whileM`

`Init.While` defines `whileM_eq` conditionally on the existence of a fixed point of
`whileM.body f`. This module derives that hypothesis automatically for any monad with a
`Lean.Order.MonadTail` (or `Lean.Order.MonoBind`) instance, by exhibiting the
order-theoretic least fixed point `Lean.Order.fix (whileM.body f)`.

The corresponding unfolding lemmas (`whileM_eq_of_monadTail`, `whileM_eq_of_monoBind`,
and `Lean.Loop.forIn_eq`) do not appear in `Init.While` itself to keep that module's
import closure small; clients that want to unfold `whileM`/`Loop.forIn` should import
this file.
-/

variable {α : Type u} {m : Type u → Type v} [Monad m]

/-- `whileM.body f` is monotone in its `recur` argument whenever `m` admits `MonadTail`. -/
private theorem whileM.body_monotone_of_monadTail [Lean.Order.MonadTail m] [Nonempty β]
    (f : α → m (α ⊕ β)) :
    Lean.Order.monotone (whileM.body f) :=
  fun _ _ h _ => Lean.Order.MonadTail.bind_mono_right fun
    | .inl a' => h a'
    | .inr _ => Lean.Order.PartialOrder.rel_refl

/-- For any `MonadTail m`, `whileM.body f` has a fixed point (the order-theoretic
`Lean.Order.fix`). -/
private theorem whileM.body_has_fixpoint_of_monadTail [Lean.Order.MonadTail m] [Nonempty β]
    (f : α → m (α ⊕ β)) :
    ∃ g, whileM.body f g = g :=
  ⟨Lean.Order.fix (whileM.body f) (whileM.body_monotone_of_monadTail f),
   (Lean.Order.fix_eq (whileM.body_monotone_of_monadTail f)).symm⟩

/-- One-step unfolding of `whileM` for any `MonadTail m`. -/
public theorem whileM_eq_of_monadTail [Lean.Order.MonadTail m] [Nonempty β]
    {f : α → m (α ⊕ β)} (a : α) :
    whileM f a = whileM.body f (whileM f) a :=
  whileM_eq a (whileM.body_has_fixpoint_of_monadTail f)

/-- `whileM.body f` is monotone in its `recur` argument whenever `m` admits `MonoBind`. -/
private theorem whileM.body_monotone_of_monoBind
    [∀ α, Lean.Order.PartialOrder (m α)] [Lean.Order.MonoBind m] [Nonempty β]
    (f : α → m (α ⊕ β)) :
    Lean.Order.monotone (whileM.body f) :=
  fun _ _ h _ => Lean.Order.MonoBind.bind_mono_right fun
    | .inl a' => h a'
    | .inr _ => Lean.Order.PartialOrder.rel_refl

/-- For any `MonoBind m` with a CCPO on every `m β`, `whileM.body f` has a fixed point
(the order-theoretic `Lean.Order.fix`). -/
private theorem whileM.body_has_fixpoint_of_monoBind
    [∀ α, Lean.Order.CCPO (m α)] [Lean.Order.MonoBind m] [Nonempty β]
    (f : α → m (α ⊕ β)) :
    ∃ g, whileM.body f g = g :=
  ⟨Lean.Order.fix (whileM.body f) (whileM.body_monotone_of_monoBind f),
   (Lean.Order.fix_eq (whileM.body_monotone_of_monoBind f)).symm⟩

/-- One-step unfolding of `whileM` for any `MonoBind m` with a CCPO on every `m β`. -/
public theorem whileM_eq_of_monoBind
    [∀ α, Lean.Order.CCPO (m α)] [Lean.Order.MonoBind m] [Nonempty β]
    {f : α → m (α ⊕ β)} (a : α) :
    whileM f a = whileM.body f (whileM f) a :=
  whileM_eq a (whileM.body_has_fixpoint_of_monoBind f)

namespace Lean

/-- One-step unfolding of `Lean.Loop.forIn` for any `MonadTail m`. -/
public theorem Loop.forIn_eq_of_monadTail [LawfulMonad m] [Lean.Order.MonadTail m] [Nonempty β]
    {l : Loop} {b : β} {f : Unit → β → m (ForInStep β)} :
    Loop.forIn l b f = (do
      match ← f () b with
      | .done val => pure val
      | .yield val => Loop.forIn l val f) := by
  show whileM _ b = _
  rw [whileM_eq_of_monadTail]; unfold whileM.body; rw [bind_assoc]
  exact bind_congr fun
    | .done _  => by simp
    | .yield _ => by simp [Loop.forIn]

/-- One-step unfolding of `Lean.Loop.forIn` for any `MonoBind m` with a CCPO on every `m β`. -/
public theorem Loop.forIn_eq_of_monoBind [LawfulMonad m]
    [∀ α, Lean.Order.CCPO (m α)] [Lean.Order.MonoBind m] [Nonempty β]
    {l : Loop} {b : β} {f : Unit → β → m (ForInStep β)} :
    Loop.forIn l b f = (do
      match ← f () b with
      | .done val => pure val
      | .yield val => Loop.forIn l val f) := by
  show whileM _ b = _
  rw [whileM_eq_of_monoBind]; unfold whileM.body; rw [bind_assoc]
  exact bind_congr fun
    | .done _  => by simp
    | .yield _ => by simp [Loop.forIn]

end Lean
