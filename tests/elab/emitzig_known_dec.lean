module
public meta import Lean.Compiler.LCNF.EmitZig

/-! Unit coverage for EmitZig known-object decrement rendering. -/

#guard EmitZig.renderDecRefKnownLines "obj" 1 2 =
  ["  lean_dec_ref_known(obj, 2);"]

#guard EmitZig.renderDecRefKnownLines "obj" 3 2 =
  [
    "  {",
    "    var i: usize = 0;",
    "    while (i < 3) : (i += 1) {",
    "      lean_dec_ref_known(obj, 2);",
    "    }",
    "  }"
  ]

#guard
  match EmitZig.renderCoreLetValueLines? `x Lean.Compiler.LCNF.ImpureType.object
      (.lit (.str "a\x00b\x1fc\\\"?\n\t\r")) with
  | some [line] =>
      line.contains "\\x00" &&
      line.contains "\\x1f" &&
      !line.contains "\x00" &&
      !line.contains "\x1f"
  | _ => false
