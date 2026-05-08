/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Init.Core
public import Init.Classical
public import Init.Control.Ensures
public import Init.Control.Lawful.MonadAttach

/-!
# `whileM`

`whileM f a` iterates `f : α → m (α ⊕ β)`, recursing on `.inl` and terminating on
`.inr`. There are two unfolding regimes:

* `whileM_eq` exposes the body whenever `whileM.body f` has a global fixed point.
  The auto-derived corollary `whileM_eq_of_monadTail` (for monads with a `MonadTail`
  instance) lives in `Init.Internal.Order.While`.
* `whileM_eq_of_acc` exposes the body at any input that is `Acc`-reachable under
  `whileM.IsPlausibleStep f`, for monads admitting `MonadAttach`. This regime is
  the only one available for monads where no global fixpoint exists (e.g. `List`,
  `Set`).
-/

variable {α : Type u} {m : Type u → Type v} [Monad m]

/-- The body of `whileM`: run `f a`, recurse via `recur` on `.inl`, return on `.inr`. -/
@[inline] public abbrev whileM.body (f : α → m (α ⊕ β)) (recur : α → m β) (a : α) : m β := do
  match ← f a with
  | .inl a' => recur a'
  | .inr a' => pure a'

/-- `a' ≺ a` iff `f a` may return `.inl a'`. -/
public abbrev whileM.IsPlausibleStep (f : α → m (α ⊕ β)) : α → α → Prop :=
  fun a' a => Internal.MayReturn (f a) (.inl a')

/-- The classical `Acc`-induction defining `whileM`'s value at `a`, used in the
`Acc`/`MonadAttach` branch of `whileM.Pred`. -/
private noncomputable def whileM.fix {β : Type u} (f : α → m (α ⊕ β))
    (hAttach : Exists (Internal.IsAttach (m := m))) {a : α}
    (h_a : Acc (whileM.IsPlausibleStep f) a) : m β :=
  h_a.recOn (motive := fun _ _ => m β) (fun x _ ih => do
    let ⟨s, hp⟩ ← hAttach.choose (f x)
    match s, hp with
    | .inl x', hp => ih x' hp
    | .inr b, _ => pure b)

/-- Pinning predicate for `whileM.impl`: pins `r` to a global fixpoint when one exists,
otherwise to `whileM.fix` if `m` is `Attach`-witnessed and `a` is `Acc`-reachable, otherwise
trivial. -/
private noncomputable abbrev whileM.Pred (f : α → m (α ⊕ β)) (a : α) (r : m β) : Prop :=
  open scoped Classical in
  if h : ∃ g, whileM.body f g = g then
    r = h.choose a
  else if h : Acc (whileM.IsPlausibleStep f) a ∧ Exists Internal.IsAttach then
    r = whileM.fix f h.2 h.1
  else
    True

private noncomputable instance [Nonempty β] {f : α → m (α ⊕ β)} {a : α} :
    Nonempty (Subtype (whileM.Pred f a)) :=
  open scoped Classical in
  if h : ∃ g, whileM.body f g = g then
    ⟨⟨h.choose a, by simp only [whileM.Pred, dif_pos h]⟩⟩
  else if h2 : Acc (whileM.IsPlausibleStep f) a ∧ Exists Internal.IsAttach then
    ⟨⟨whileM.fix f h2.2 h2.1, by simp only [whileM.Pred, dif_neg h, dif_pos h2]⟩⟩
  else
    ⟨⟨pure (Classical.choice inferInstance), by simp only [whileM.Pred, dif_neg h, dif_neg h2]⟩⟩

/-- Under `Acc` plus an `IsAttach` witness, `whileM.body f g` agrees with `whileM.fix` at
`x`, where `g` is the `Pred`-pinned recursive call. The proof navigates the second branch
of `Pred` at the recursive points, so it requires that the global-fixpoint branch has been
ruled out. -/
private theorem whileM.body_eq_fix
    (f : α → m (α ⊕ β)) (hNoFix : ¬ ∃ g, whileM.body f g = g)
    (hAttach : Exists (Internal.IsAttach (m := m)))
    (g : (a : α) → Subtype (whileM.Pred f a))
    {x : α} (h_x : Acc (whileM.IsPlausibleStep f) x) :
    whileM.body f (g · |>.val) x = whileM.fix f hAttach h_x := by
  cases h_x with | intro x next =>
  simp only [whileM.body, whileM.fix]
  rw [← ((hAttach.choose_spec.erases (f x)).bind_eq)]
  apply bind_congr
  intro ⟨s, hp⟩
  cases s with
  | inr b => rfl
  | inl x' =>
    have hp_x' := (g x').property
    simp only [whileM.Pred, dif_neg hNoFix,
      dif_pos (show Acc _ x' ∧ _ from ⟨next x' hp, hAttach⟩)] at hp_x'
    exact hp_x'

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
    · split <;> rename_i h2
      · exact whileM.body_eq_fix f h h2.2 (whileM.impl f) h2.1
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

/-- One-step unfolding of `whileM` at an `Acc`-reachable input. Applies to monads where
no global fixpoint of `whileM.body f` exists but `m` admits `MonadAttach` and the user
has shown `a` is well-founded under `whileM.IsPlausibleStep f`. -/
public theorem whileM_eq_of_acc [LawfulMonad m] [MonadAttach m] [LawfulMonadAttach m] [Nonempty β]
    {f : α → m (α ⊕ β)} (a : α) (h : Acc (whileM.IsPlausibleStep f) a) :
    whileM f a = whileM.body f (whileM f) a := by
  cases Classical.em (∃ g, whileM.body f g = g) with
  | inl hFix => exact whileM_eq a hFix
  | inr hFix =>
    have hAttach : Exists (Internal.IsAttach (m := m)) := ⟨_, Internal.IsAttach.of_attach⟩
    have hp_a := (whileM.impl f a).property
    simp only [whileM.Pred, dif_neg hFix, dif_pos (⟨h, hAttach⟩ : _ ∧ _)] at hp_a
    show (whileM.impl f a).val = _
    rw [hp_a]
    exact (whileM.body_eq_fix f hFix hAttach (whileM.impl f) h).symm

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
