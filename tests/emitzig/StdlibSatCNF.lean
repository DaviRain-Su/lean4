module
prelude
import Init.System.IO
import Std.Sat.CNF

/-! End-to-end stdlib-linked EmitZig test for SAT CNF operations. -/

open Std Sat

def cnf : CNF Nat :=
  (CNF.empty.add [(0, true), (1, true)]).add [(2, false), (0, true)]

def assignA : Nat → Bool
  | 0 => true
  | 1 => false
  | 2 => true
  | _ => false

def assignB : Nat → Bool
  | 0 => false
  | 1 => false
  | 2 => true
  | _ => false

def main : IO Unit := do
  IO.println cnf.clauses.size
  IO.println (cnf.eval assignA)
  IO.println (cnf.eval assignB)
  IO.print cnf.dimacs
  let relabeled := cnf.relabel (fun n => n + 10)
  IO.println (relabeled.eval (fun n => assignA (n - 10)))
  IO.print relabeled.dimacs
