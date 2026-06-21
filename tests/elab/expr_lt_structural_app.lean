import Lean

/-!
Regression test for `Expr.lt` comparing applications with structurally equal
function parts allocated as distinct objects. This catches the Zig runtime port
using pointer inequality where the C++ implementation uses structural equality.
-/

open Lean Elab Tactic Meta

set_option linter.unusedVariables false

example (b p k : Int) : True := by
  run_tac do
    let lctx ← getLCtx
    let b := (lctx.findFromUserName? `b).get!.toExpr
    let p := (lctx.findFromUserName? `p).get!.toExpr
    let k := (lctx.findFromUserName? `k).get!.toExpr
    let lhs ← mkAppM ``HMul.hMul #[b, p]
    let kToNat ← mkAppM ``Int.toNat #[k]
    let kOfNat ← mkAppM ``Int.ofNat #[kToNat]
    let rhs ← mkAppM ``HMul.hMul #[b, kOfNat]
    if !Expr.lt lhs rhs || Expr.lt rhs lhs then
      throwError "Expr.lt failed to compare application arguments after structurally equal functions"
  trivial
