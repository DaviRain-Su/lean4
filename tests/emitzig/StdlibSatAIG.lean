module
prelude
import Init.System.IO
import Std.Sat.AIG.CachedGates
import Std.Sat.AIG.CNF

/-! End-to-end stdlib-linked EmitZig test for SAT AIG operations. -/

open Std Sat

def assignTrue : Nat → Bool
  | 0 => true
  | _ => false

def assignFalse : Nat → Bool
  | _ => false

def cachedAtom : AIG.Entrypoint Nat :=
  let atom := (AIG.empty : AIG Nat).mkAtomCached 7
  atom.aig.mkAtomCached 7

def simplifiedAnd : AIG.Entrypoint Nat :=
  let atom := (AIG.empty : AIG Nat).mkAtomCached 0
  let trueRef := atom.aig.mkConstCached true
  atom.aig.mkAndCached ⟨atom.ref, trueRef⟩

def tautology : AIG.Entrypoint Nat :=
  let andEntry := simplifiedAnd
  let falseRef := andEntry.aig.mkConstCached false
  let orEntry := andEntry.aig.mkOrCached ⟨andEntry.ref, falseRef⟩
  orEntry.aig.mkXorCached ⟨orEntry.ref, orEntry.ref.not⟩

def cnfAssign (entry : AIG.Entrypoint Nat) (assign : Nat → Bool) (var : Nat) : Bool :=
  if h : var < entry.aig.decls.size then
    AIG.denote assign ⟨entry.aig, ⟨var, false, h⟩⟩
  else
    assign (var - entry.aig.decls.size)

def main : IO Unit := do
  IO.println cachedAtom.aig.decls.size
  IO.println cachedAtom.ref.gate
  IO.println cachedAtom.ref.invert

  IO.println simplifiedAnd.aig.decls.size
  IO.println simplifiedAnd.ref.gate
  IO.println (AIG.denote assignTrue simplifiedAnd)
  IO.println (AIG.denote assignFalse simplifiedAnd)

  IO.println tautology.aig.decls.size
  IO.println tautology.ref.gate
  IO.println tautology.ref.invert
  IO.println (AIG.denote assignTrue tautology)
  IO.println (AIG.denote assignFalse tautology)

  let cnf := AIG.toCNF tautology
  IO.println cnf.clauses.size
  IO.println (cnf.eval (cnfAssign tautology assignTrue))
  IO.println (cnf.eval (cnfAssign tautology assignFalse))
