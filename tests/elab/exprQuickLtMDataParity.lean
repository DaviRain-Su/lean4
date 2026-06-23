module

import Lean

/-!
Checks `Expr.quickLt` parity for metadata maps with different keys and `DataValue` constructors.
-/

open Lean

private def base : Expr :=
  mkConst ``Nat

private def eBoolTrue : Expr :=
  mkMData (KVMap.empty.insert `pp.explicit true) base

private def eBoolFalse : Expr :=
  mkMData (KVMap.empty.insert `pp.explicit false) base

private def eName : Expr :=
  mkMData (KVMap.empty.insert `pp.explicit (DataValue.ofName `foo)) base

private def eNat : Expr :=
  mkMData (KVMap.empty.insert `pp.explicit (DataValue.ofNat 1)) base

private def eString : Expr :=
  mkMData (KVMap.empty.insert `pp.explicit (DataValue.ofString "x")) base

private def eOtherKey : Expr :=
  mkMData (KVMap.empty.insert `pp.universes true) base

private def eTwoEntries : Expr :=
  mkMData ((KVMap.empty.insert `pp.explicit true).insert `pp.universes false) base

private def checkPair (a b : Expr) : Bool :=
  Expr.quickLt a b == Expr.quickLtZig a b

run_cmd do
  let exprs := #[
    eBoolTrue,
    eBoolFalse,
    eName,
    eNat,
    eString,
    eOtherKey,
    eTwoEntries
  ]
  for i in [:exprs.size] do
    let a := exprs[i]!
    if Expr.quickLt a a then
      throwError "quickLt reported an expression as less than itself at index {i}"
    for j in [:exprs.size] do
      let b := exprs[j]!
      unless checkPair a b do
        throwError "quickLt metadata parity mismatch at ({i}, {j})"
      if Expr.quickLt a b && Expr.quickLt b a then
        throwError "quickLt metadata ordering is not asymmetric at ({i}, {j})"
