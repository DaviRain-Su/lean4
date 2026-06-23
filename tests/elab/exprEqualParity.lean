module

import Lean

/-!
Checks `Expr.equal` parity against the Zig-only equality entrypoint.
-/

open Lean

private def natExpr : Expr := mkConst `Nat

private def corpus : Array Expr := #[
  mkBVar 0,
  mkBVar 1,
  mkFVar { name := `x },
  mkFVar { name := `y },
  mkMVar { name := `m },
  mkSort Level.zero,
  mkSort (Level.succ Level.zero),
  natExpr,
  mkConst `List [Level.zero],
  mkApp (mkConst `f) (mkBVar 0),
  mkApp2 (mkConst `f) (mkBVar 0) (mkBVar 1),
  mkLambda `x .default natExpr (mkBVar 0),
  mkLambda `y .default natExpr (mkBVar 0),
  mkLambda `x .implicit natExpr (mkBVar 0),
  mkForall `x .default natExpr (mkBVar 0),
  mkForall `x .strictImplicit natExpr (mkBVar 0),
  mkLet `x natExpr (mkRawNatLit 1) (mkBVar 0),
  mkHave `x natExpr (mkRawNatLit 1) (mkBVar 0),
  mkMData (KVMap.empty.insert `pp.explicit true) natExpr,
  mkMData (KVMap.empty.insert `pp.explicit (DataValue.ofNat 1)) natExpr,
  mkProj `Prod 0 (mkConst `p),
  mkRawNatLit 1,
  mkStrLit "x"
]

run_cmd do
  for i in [:corpus.size] do
    let a := corpus[i]!
    for j in [:corpus.size] do
      let b := corpus[j]!
      let prod := Expr.equal a b
      let zig := Expr.equalZig a b
      unless prod == zig do
        throwError "Expr.equal parity mismatch at ({i}, {j}): production={prod}, zig={zig}"

