import Lean
open Lean

/-!
Regression test for Zig `Expr.liftLooseBVars` / `Expr.lowerLooseBVars`
without relying on `Expr.dbgToString`.
-/

private def checkLiftLower : IO Unit := do
  let t1 := mkApp2 (mkConst `f) (mkBVar 0) (mkBVar 1)
  let t2 := mkForall `x BinderInfo.default (mkConst `Nat) t1

  match t1.liftLooseBVars 0 1 with
  | .app (.app (.const n _) (.bvar i1)) (.bvar i2) =>
      unless n == `f && i1 == 1 && i2 == 2 do
        throw <| IO.userError "unexpected lifted app shape"
  | _ =>
      throw <| IO.userError "unexpected lifted app constructor"

  let t3 := (t2.liftLooseBVars 0 1).lowerLooseBVars 1 1
  unless t2 == t3 do
    throw <| IO.userError "lift/lower roundtrip mismatch"

#eval checkLiftLower
