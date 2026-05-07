/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Init.Core
public import Init.Classical

/-!
# `whileM`

`whileM f a` iterates `f : α → m (α ⊕ β)`, recursing on `.inl` and terminating on
`.inr`. `whileM_eq` exposes the body whenever `whileM.body f` has a fixed point;
the auto-derived corollary `whileM_eq_of_monadTail`, which discharges that hypothesis
from a `Lean.Order.MonadTail m` instance, lives in `Init.Internal.Order.While` to keep
this module's import closure small.
-/

variable {α : Type u} {m : Type u → Type v} [Monad m]

/-- The body of `whileM`: run `f a`, recurse via `recur` on `.inl`, return on `.inr`. -/
@[inline] public abbrev whileM.body (f : α → m (α ⊕ β)) (recur : α → m β) (a : α) : m β := do
  match ← f a with
  | .inl a' => recur a'
  | .inr a' => pure a'

/-- Pinning predicate for `whileM.impl`: trivial unless `whileM.body f` has a fixed point,
in which case `r` is pinned to that fixed point applied to `a`. -/
private noncomputable abbrev whileM.Pred (f : α → m (α ⊕ β)) (a : α) (r : m β) : Prop :=
  open scoped Classical in
  if h : ∃ g, whileM.body f g = g then
    r = h.choose a
  else
    True

private noncomputable instance [Nonempty β] {f : α → m (α ⊕ β)} {a : α} :
    Nonempty (Subtype (whileM.Pred f a)) :=
  open scoped Classical in
  if h : ∃ g, whileM.body f g = g then
    ⟨⟨h.choose a, by simp only [whileM.Pred, dif_pos h]⟩⟩
  else
    ⟨⟨pure (Classical.choice inferInstance), by simp only [whileM.Pred, dif_neg h]⟩⟩

/-- Computational core of `whileM`: returns the loop value paired with its
`whileM.Pred` proof. -/
@[specialize] partial def whileM.impl [Nonempty β]
    (f : α → m (α ⊕ β)) (a : α) :
    Subtype (whileM.Pred f a) :=
  ⟨whileM.body f (whileM.impl f · |>.val) a, by
    simp only [whileM.Pred]
    split <;> rename_i h
    · have key : (fun x => (whileM.impl f x).val) = h.choose := funext fun x => by
        simpa only [whileM.Pred, dif_pos h] using (whileM.impl f x).property
      rw [key]; exact congrFun h.choose_spec a
    · trivial⟩

/--
An erased version of `whileM.impl` that eta-expands better in the compiler.
Can be removed once `whileM.impl` optimizes to the same code.
-/
@[specialize] private partial def whileM.erased [Nonempty β] (f : α → m (α ⊕ β)) (a : α) : m β :=
  whileM.body f (whileM.erased f ·) a

/-- `whileM f a` iterates `f` at `a`, recursing on `.inl` and terminating on `.inr`. -/
@[inline, implemented_by whileM.erased] -- See comment above `whileM.erased`.
public def whileM [Nonempty β] (f : α → m (α ⊕ β)) (a : α) : m β :=
  (whileM.impl f a).val

/-- One-step unfolding of `whileM`, conditional on `whileM.body f` having a fixed point.
The `Init.Internal.Order.While` module re-derives this lemma without a fixed-point hypothesis
for any monad with `Lean.Order.MonadTail`. -/
public theorem whileM_eq [Nonempty β] {f : α → m (α ⊕ β)} (a : α)
    (h : ∃ g, whileM.body f g = g) :
    whileM f a = whileM.body f (whileM f) a := by
  have key : (fun x => (whileM.impl f x).val) = h.choose := funext fun x => by
    simpa only [whileM.Pred, dif_pos h] using (whileM.impl f x).property
  show (whileM.impl f a).val = whileM.body f (fun x => (whileM.impl f x).val) a
  rw [key, congrFun key a]; exact (congrFun h.choose_spec a).symm

namespace Lean

/-!
# `Loop` type backing `repeat`/`while`/`repeat ... until`

The parsers and elaborators for `repeat`, `while`, and `repeat ... until` live in
`Lean.Parser.Do` and `Lean.Elab.BuiltinDo.Repeat`. This module only provides the
`Loop` type (and `ForIn` instance) that those elaborators expand to.
-/

public structure Loop

@[inline, expose] public protected def Loop.forIn {β : Type u} {m : Type u → Type v} [Monad m]
    (_ : Loop) (init : β) (f : Unit → β → m (ForInStep β)) : m β :=
  haveI : Nonempty β := ⟨init⟩
  whileM (fun b => do
    match ← f () b with
    | .done b'  => pure (.inr b')
    | .yield b' => pure (.inl b')) init

public instance [Monad m] : ForIn m Loop Unit where
  forIn := Loop.forIn

end Lean
