/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Std.Do.Triple.SpecLemmas
public import Init.Internal.Order.While
import Std.Tactic.Do.Syntax

set_option linter.missingDocs true

@[expose] public section

namespace Std.Do

/-!
# Specification theorems for `whileM`-based loops

This file contains the `@[spec]` theorems for `whileM` and `forIn` over `Lean.Loop`. Both lemmas
require only `Lean.Order.MonadTail m` for the unfolding step (no `MonadAttach`/`WPAdequate`),
which lets the variant and the invariant range over monadic state via `SVal`/`SPred`.
-/

set_option mvcgen.warning false

/--
An invariant for a `whileM` loop, given as a `PostCond` over the `α ⊕ β` cursor:
`.inl a` is the `continue` case at `a`; `.inr b` is the `break` case with result `b`.
Naturally state-aware via `PostCond` (and carries an `ExceptConds` component).
-/
@[spec_invariant_type]
abbrev WhileInvariant (α β : Type u) (ps : PostShape.{u}) :=
  PostCond (α ⊕ β) ps

/--
A termination measure for a `whileM` loop, SVal-typed so it can read monadic state.
-/
@[spec_invariant_type]
abbrev WhileVariant (α : Type u) (ps : PostShape.{u}) :=
  α → SVal ps.args (ULift Nat)

set_option linter.missingDocs false in
abbrev WhileVariant.eval {α} {ps} (variant : WhileVariant α ps) (a : α) (n : Nat) : SPred ps.args :=
  SPred.evalsTo (variant a) ⟨n⟩

section

variable {α β : Type u} {m : Type u → Type v} {ps : PostShape.{u}}

private theorem WhileVariant.eval_total {P : SPred ps.args} (variant : WhileVariant α ps) (a : α) :
    P ⊢ₛ ∃ m, WhileVariant.eval variant a m := by
  mintro _
  mhave h2 := SPred.evalsTo_total (variant a)
  mcases h2 with ⟨m, h2⟩
  mexists m.down

private theorem WhileVariant.add_eval {P Q : SPred ps.args} (variant : WhileVariant α ps) (a : α)
    (h : spred(∃ m, WhileVariant.eval variant a m ∧ P) ⊢ₛ Q) : P ⊢ₛ Q := by
  apply SPred.entails.trans _ h
  mintro _
  mhave h2 := WhileVariant.eval_total variant a
  mcases h2 with ⟨m, h2⟩
  mexists m
  mconstructor <;> massumption

end

section

variable {α β : Type u} {m : Type u → Type v} {ps : PostShape.{u}}
variable [Monad m] [Lean.Order.MonadTail m] [WPMonad m ps]

/--
Specification for `whileM`. The user supplies a (possibly state-dependent) termination
`measure`, an invariant, and a step `Triple` whose pre asserts the variant evaluates to `ma`
and the in-progress invariant holds, and whose post either continues with a strictly smaller
variant value (the invariant still holding) or finishes with the `.inr` invariant.
-/
@[spec]
theorem Spec.whileM
    {init : α} {f : α → m (α ⊕ β)} [Nonempty β]
    (measure : WhileVariant α ps)
    (inv : WhileInvariant α β ps)
    (step : ∀ a ma,
      Triple (f a)
        spred(WhileVariant.eval measure a ma ∧ inv.1 (.inl a))
        (fun r => match r with
          | .inl a' => spred(∃ ma', WhileVariant.eval measure a' ma' ∧ ⌜ma' < ma⌝ ∧ inv.1 (.inl a'))
          | .inr b  => inv.1 (.inr b),
         inv.2)) :
    Triple (whileM f init) spred(inv.1 (.inl init))
      (fun b => inv.1 (.inr b), inv.2) := by
  apply WhileVariant.add_eval measure init
  apply SPred.exists_elim
  intro minit
  induction minit using Nat.strongRecOn generalizing init with
  | _ minit ih =>
    rw [whileM_eq_of_monadTail (f := f) init]
    mvcgen [step, ih] with
    | vc1.ind.success.h_1 =>
      apply SPred.exists_elim
      intro ma'
      mintro h
      mcases h with ⟨hmeasure, ⌜hma'⌝, h⟩
      mspec Triple.of_entails_wp (ih ma' hma')

/--
An invariant for a `repeat`/`while` loop expressed via `forIn` over `Lean.Loop`.
The cursor `(done?, b)` carries a `Bool` flag (`false` = still iterating, `true` = finished).
-/
@[spec_invariant_type]
abbrev RepeatInvariant (β : Type u) (ps : PostShape.{u}) :=
  PostCond (Bool × β) ps

/--
Specification for `forIn` over a `Lean.Loop`. Uses a `Bool × β` cursor: `(false, b)` for
"still iterating with `b`", `(true, b)` for "finished with result `b`".
-/
@[spec]
theorem Spec.forIn_loop
    {l : Lean.Loop} {init : β} {f : Unit → β → m (ForInStep β)}
    (measure : WhileVariant β ps)
    (inv : RepeatInvariant β ps)
    (step : ∀ b mb,
      Triple (f () b)
        spred(WhileVariant.eval measure b mb ∧ inv.1 (false, b))
        (fun r => match r with
          | .yield b' => spred(∃ mb', WhileVariant.eval measure b' mb' ∧ ⌜mb' < mb⌝ ∧ inv.1 (false, b'))
          | .done b'  => inv.1 (true, b'),
         inv.2)) :
    Triple (forIn l init f) spred(inv.1 (false, init))
      (fun b => inv.1 (true, b), inv.2) := by
  haveI : Nonempty β := ⟨init⟩
  change Triple (_root_.Lean.Loop.forIn l init f) _ _
  simp only [_root_.Lean.Loop.forIn]
  -- Reduce to `Spec.whileM` with a `WhileInvariant β β` cursor that mirrors the `Bool × β`.
  apply Spec.whileM (β := β)
    (measure := measure)
    (inv := (fun r => match r with | .inl b => inv.1 (false, b) | .inr b => inv.1 (true, b), inv.2))
  intro b mb
  apply Triple.bind
  · exact step b mb
  · rintro (b' | b') <;> apply Triple.pure <;> simp

end

section

variable {α β : Type u} {m : Type u → Type v} {ps : PostShape.{u}}
variable [Monad m] [LawfulMonad m] [MonadAttach m] [LawfulMonadAttach m]
variable [WPMonad m ps] [WPAdequate m ps]

/--
Specification for `whileM` for monads where no global fixpoint of `whileM.body f` exists, but
execution is structurally well-founded. The user supplies a `Nat`-valued termination measure
that strictly decreases on `.inl` results, plus a `Prop`-valued invariant. Not marked
`@[spec]` — `Spec.whileM` (which exploits `MonadTail`) is preferred when it applies.
-/
theorem Spec.whileM_of_acc
    {init : α} {f : α → m (α ⊕ β)} [Nonempty β]
    (μ : α → Nat)
    (inv : α ⊕ β → Prop)
    {exc : ExceptConds ps}
    (step : ∀ a,
      Triple (f a) (⌜inv (.inl a)⌝)
        (fun r => match r with
          | .inl a' => spred(⌜inv (.inl a') ∧ μ a' < μ a⌝)
          | .inr b => ⌜inv (.inr b)⌝, exc)) :
    Triple (_root_.whileM f init) (⌜inv (.inl init)⌝)
        (fun b => ⌜inv (.inr b)⌝, exc) := by
  refine Triple.iff.mpr <| SPred.pure_elim' fun hInv => ?_
  suffices key : ∀ a, inv (.inl a) →
      ⊢ₛ wp⟦(_root_.whileM f a : m β)⟧ (fun b => ⌜inv (.inr b)⌝, exc) from
    key init hInv
  intro a hInv'
  have (eq := hn) n := μ a
  induction n using Nat.strongRecOn generalizing a with
  | _ n ih =>
  have hacc : Acc (whileM.IsPlausibleStep f) a := by
    refine whileM.IsPlausibleStep.acc_of_wp μ a hInv' fun y =>
      Triple.iff.mpr <| (Triple.iff.mp (step y)).trans <|
        (wp _).mono _ _ ⟨fun r => ?_, ExceptConds.entails.refl _⟩
    cases r with
    | inl _ => exact SPred.pure_mono fun ⟨hI, hM⟩ =>
        ⟨hI, fun _ h => by injection h with h; exact h ▸ hM⟩
    | inr _ => exact SPred.pure_mono fun hI =>
        ⟨hI, fun _ h => by injection h⟩
  rw [whileM_eq_of_acc _ hacc]
  unfold whileM.body
  change Triple _ ⌜True⌝ _
  apply Triple.bind _ _
    (Triple.iff.mpr (Triple.entails_wp_of_pre (step a) (SPred.pure_intro hInv')))
  rintro (a' | b)
  · exact Triple.iff.mpr <| SPred.pure_elim' fun ⟨hI, hM⟩ => ih (μ a') (hn ▸ hM) a' hI rfl
  · exact Triple.pure b (by simp)

/--
Specification for `forIn` over a `Lean.Loop` for monads without `MonadTail`, mirroring
`Spec.whileM_of_acc`. Not marked `@[spec]`.
-/
theorem Spec.forIn_loop_of_acc
    {l : Lean.Loop} {init : β} {f : Unit → β → m (ForInStep β)}
    (μ : β → Nat)
    (inv : β ⊕ β → Prop)
    {exc : ExceptConds ps}
    (step : ∀ b,
      Triple
        (f () b)
        (⌜inv (.inl b)⌝)
        (fun r => match r with
          | .yield b' => spred(⌜inv (.inl b') ∧ μ b' < μ b⌝)
          | .done b' => ⌜inv (.inr b')⌝, exc)) :
    Triple (forIn l init f) (⌜inv (.inl init)⌝) (fun b => ⌜inv (.inr b)⌝, exc) := by
  change Triple (_root_.Lean.Loop.forIn l init f) _ _
  simp only [_root_.Lean.Loop.forIn]
  have : Nonempty β := ⟨init⟩
  apply Spec.whileM_of_acc μ inv
  intro a
  apply Triple.bind
  · apply step a
  · rintro (b | b) <;> apply Triple.pure <;> simp

end

end Std.Do
