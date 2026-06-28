module
prelude
import Init.System.IO
import Std.Sat.CNF

/-! End-to-end stdlib-linked EmitZig test for SAT CNF operations. -/

open Std Sat

def cnf : CNF Nat :=
  (CNF.empty.add [(0, true), (1, true)]).add [(2, false), (0, true)]

def cnfExtra : CNF Nat :=
  (CNF.emptyWithCapacity 2).add [(3, true), (4, false)]

def assignA : Nat → Bool
  | 0 => true
  | 1 => false
  | 2 => true
  | 3 => true
  | 4 => false
  | _ => false

def assignB : Nat → Bool
  | 0 => false
  | 1 => false
  | 2 => true
  | 3 => false
  | 4 => false
  | _ => false

def showNat? : Option Nat → String
  | some n => toString n
  | none => "none"

def showLiteral (lit : Literal Nat) : String :=
  let sign := if lit.2 then "+" else "-"
  s!"{sign}{lit.1}"

def main : IO Unit := do
  IO.println cnf.clauses.size
  IO.println (cnf.eval assignA)
  IO.println (cnf.eval assignB)
  IO.print cnf.dimacs
  let relabeled := cnf.relabel (fun n => n + 10)
  IO.println (relabeled.eval (fun n => assignA (n - 10)))
  IO.print relabeled.dimacs
  IO.println (showLiteral (Literal.negate (4, true)))
  let appended := cnf ++ cnfExtra
  IO.println appended.clauses.size
  IO.println (showNat? appended.maxLiteral)
  IO.println appended.numLiterals
  IO.println (appended.eval assignA)
  IO.println (appended.eval assignB)
  let finCnf := appended.relabelFin
  IO.println finCnf.clauses.size
  IO.println (finCnf.eval fun lit => assignA lit.val)
  let backToNat := finCnf.relabel (fun lit => lit.val)
  IO.print backToNat.dimacs
  IO.println (backToNat.eval assignA)
  let emptyBound : CNF Nat := CNF.emptyWithCapacity 4
  IO.println emptyBound.numLiterals
