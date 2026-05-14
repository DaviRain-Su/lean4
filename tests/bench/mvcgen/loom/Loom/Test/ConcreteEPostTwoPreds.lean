import Lean
import Loom.Test.Driver
import Loom.Test.Specs
import Loom.Tactic.VCGen
import Std.Internal.Do.Triple.SpecLemmas

open Loom Lean Meta Order Std.Internal.Do

namespace ConcreteEPostTwoPreds

abbrev M := ExceptT Nat (ExceptT String (StateM Nat))

@[lspec]
theorem Spec.M_getThe_Nat :
  Triple (fun s => post s s) (get (m := M)) post epost := by
  rw [Triple.iff]
  intros s posth;
  unfold wp WPMonad.wpTrans ExceptT.instWPMonad; simp [get, getThe, ExceptT.run, StateT.run]
  simp only [MonadStateOf.get, liftM, monadLift, MonadLift.monadLift, ExceptT.lift]
  unfold wp  WPMonad.wpTrans Id.instWPMonad;
  simp [ExceptT.mk, Functor.map, ExceptT.map, Bind.bind, StateT.bind, StateT.map, StateT.get, pure, StateT.pure]
  assumption

def throwNatOrString (n : Nat) : M Nat := do
  let s ← get
  if s > 0 then
    throwThe Nat 7
  else if s < 0 then
    throwThe String "inner"
  else
    pure n

@[lspec]
theorem spec_throwNatOrString (n : Nat) :
    Triple (fun _ => True) (throwNatOrString n)
      (fun k s => s = 0 ∧ k = n)
      epost⟨fun e s => s > 0 ∧ e = 7,
            fun e s => s < 0 ∧ e = "inner"⟩ := by
  rw [Triple.iff]; unfold throwNatOrString;
  intro s; dsimp only
  lmvcgen <;> grind


def step (n : Nat) : M PUnit := do
  let _ ← throwNatOrString n

def loop (n : Nat) : M PUnit := do
  match n with
  | 0 => pure ()
  | n + 1 =>
    step n
    loop n

def Goal (n : Nat) : Prop := forall s,
  True ⊑
    wp (loop n) (fun _ s => s = 0)
     epost⟨fun e s => s > 0 ∧ e = 7,
           fun e s => s < 0 ∧ e = "inner"⟩ s

set_option maxRecDepth 10000
set_option maxHeartbeats 10000000

def runTests := runBenchUsingTactic
    ``Goal [``loop, ``step]
    `(tactic| (intro s; lmvcgen with grind))
    `(tactic| fail)

-- #eval runTests [100]

end ConcreteEPostTwoPreds
