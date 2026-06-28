module
prelude
import Init.System.IO
import Std.Sat.AIG.If
import Std.Sat.AIG.RefVecOperator.Fold
import Std.Sat.AIG.RefVecOperator.Map
import Std.Sat.AIG.RefVecOperator.Zip
import Std.Sat.AIG.RelabelNat

/-! End-to-end stdlib-linked EmitZig test for SAT AIG vector operations. -/

open Std Sat

def assignStrings : String → Bool
  | "a" => true
  | "b" => false
  | _ => false

def assignNat : Nat → Bool
  | 0 => true
  | 1 => false
  | _ => false

def showNat? : Option Nat → String
  | some n => toString n
  | none => "none"

def baseVec : AIG.RefVecEntry String 2 :=
  let a := (AIG.empty : AIG String).mkAtomCached "a"
  let b := a.aig.mkAtomCached "b"
  let aRef := a.ref.cast (by
    apply AIG.LawfulOperator.le_size (f := AIG.mkAtomCached))
  let vec := ((AIG.RefVec.emptyWithCapacity (aig := b.aig) 2).push aRef).push b.ref
  ⟨b.aig, vec⟩

def notVec : AIG.RefVecEntry String 2 :=
  let base := baseVec
  AIG.RefVec.map base.aig { vec := base.vec, func := AIG.mkNotCached }

def eqVec : AIG.RefVecEntry String 2 :=
  let nots := notVec
  AIG.RefVec.zip nots.aig ⟨nots.vec, nots.vec⟩ AIG.mkBEqCached

def foldedEq : AIG.Entrypoint String :=
  let eqs := eqVec
  AIG.RefVec.fold eqs.aig eqs.vec AIG.mkAndCached

def muxVec : AIG.RefVecEntry String 2 :=
  let nots := notVec
  AIG.RefVec.ite nots.aig {
    discr := nots.vec.get 0 (by decide),
    lhs := nots.vec,
    rhs := nots.vec
  }

def bothAtoms : AIG.Entrypoint String :=
  let base := baseVec
  base.aig.mkAndCached ⟨base.vec.get 0 (by decide), base.vec.get 1 (by decide)⟩

def printVec2 (entry : AIG.RefVecEntry String 2) : IO Unit := do
  IO.println (AIG.denote assignStrings ⟨entry.aig, entry.vec.get 0 (by decide)⟩)
  IO.println (AIG.denote assignStrings ⟨entry.aig, entry.vec.get 1 (by decide)⟩)

def main : IO Unit := do
  IO.println baseVec.aig.decls.size
  printVec2 notVec
  printVec2 muxVec

  IO.println eqVec.aig.decls.size
  IO.println (AIG.denote assignStrings foldedEq)

  let relabeled := bothAtoms.relabelNat'
  IO.println (showNat? relabeled.snd["a"]?)
  IO.println (showNat? relabeled.snd["b"]?)
  IO.println (AIG.denote assignNat relabeled.fst)
