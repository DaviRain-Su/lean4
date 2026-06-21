import Lean

/-!
Regression test for `Expr.instantiateRange` and `Expr.instantiateRevRange`
using a nonzero substitution slice. This caught the Zig cutover treating
`beginIdx` as a de Bruijn offset instead of only a slice offset.
-/

open Lean

def checkInstantiateRange : IO Unit := do
  let f := mkConst `f
  let x := mkBVar 0
  let y := mkBVar 1
  let e := mkApp3 f x y x
  let a := mkConst `a
  let b := mkApp f (mkConst `b)
  let c := mkConst `c

  let r1 := e.instantiateRange 2 4 #[c, c, a, b, c]
  let r2 := e.instantiate #[a, b]
  unless r1 == r2 do
    throw <| IO.userError s!"instantiateRange mismatch:\n{r1}\n!=\n{r2}"

  let rr1 := e.instantiateRevRange 2 4 #[c, c, a, b, c]
  let rr2 := e.instantiateRev #[a, b]
  unless rr1 == rr2 do
    throw <| IO.userError s!"instantiateRevRange mismatch:\n{rr1}\n!=\n{rr2}"

#eval checkInstantiateRange
