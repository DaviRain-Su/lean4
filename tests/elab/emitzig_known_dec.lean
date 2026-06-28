module
public meta import Lean.Compiler.LCNF.EmitZig

/-! Unit coverage for EmitZig known-object decrement rendering. -/

#guard EmitZig.renderDecRefKnownLines "obj" 1 2 =
  ["  lean_dec_ref_known(obj, @as(c_uint, 2));"]

#guard EmitZig.renderDecRefKnownLines "obj" 3 2 =
  [
    "  {",
    "    var i: usize = 0;",
    "    while (i < @as(usize, 3)) : (i += 1) {",
    "      lean_dec_ref_known(obj, @as(c_uint, 2));",
    "    }",
    "  }"
  ]
