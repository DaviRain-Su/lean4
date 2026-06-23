module

import Lean

/-!
Checks `Expr.replace` parity against the Zig-only replacement entrypoint.
-/

open Lean

private def natExpr : Expr := mkConst `Nat

private partial def mkTree : Nat → Expr
  | 0 => mkConst `leaf
  | n + 1 => mkApp2 (mkConst `node) (mkTree n) (mkBVar n)

private def corpus : Array Expr := #[
  mkConst `leaf,
  mkApp (mkConst `f) (mkConst `x),
  mkApp2 (mkConst `f) (mkBVar 0) (mkBVar 1),
  mkLambda `x .default natExpr (mkApp (mkConst `f) (mkBVar 0)),
  mkForall `x .implicit natExpr (mkApp (mkConst `p) (mkBVar 0)),
  mkLet `x natExpr (mkRawNatLit 1) (mkApp (mkConst `f) (mkBVar 0)),
  mkHave `x natExpr (mkRawNatLit 1) (mkApp (mkConst `f) (mkBVar 0)),
  mkMData (KVMap.empty.insert `pp.explicit true) (mkApp (mkConst `f) (mkConst `x)),
  mkProj `Prod 0 (mkApp (mkConst `mkPair) (mkConst `x)),
  mkTree 4
]

private def replaceConst (e : Expr) : Option Expr :=
  match e with
  | .const `f _ => some (mkConst `g)
  | .const `leaf _ => some (mkConst `twig)
  | _ => none

private def replaceBVar (e : Expr) : Option Expr :=
  match e with
  | .bvar i => some (mkBVar (i + 1))
  | _ => none

private def replaceRootApp (e : Expr) : Option Expr :=
  match e with
  | .app (.const `f _) _ => some (mkConst `rewritten)
  | _ => none

private def noReplace (_ : Expr) : Option Expr :=
  none

private def replacements : Array (Expr → Option Expr) :=
  #[noReplace, replaceConst, replaceBVar, replaceRootApp]

run_cmd do
  for i in [:corpus.size] do
    let e := corpus[i]!
    for j in [:replacements.size] do
      let f := replacements[j]!
      let prod := Expr.replace f e
      let zig := Expr.replaceZig f e
      unless Expr.equal prod zig do
        throwError "Expr.replace parity mismatch at expression {i}, replacement {j}"
