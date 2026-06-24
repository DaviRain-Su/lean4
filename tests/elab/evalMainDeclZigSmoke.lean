module

import Lean
public meta import Lean.Shell

/-!
Checks the Zig-only `lean_eval_main_decl` entrypoint on the same compiled-IR path used by `lean --run`.
-/

open Lean

public def main (args : List String) : IO UInt32 := do
  if args == ["alpha", "beta"] then
    return 13
  return 2

run_cmd do
  let env ← getEnv
  let opts : Options := {}
  let (_, s) ← (Lean.compileDecls #[`main]).toIO
    { fileName := "evalMainDeclZigSmoke.lean", fileMap := default, options := opts }
    { env := env }
  let some decl := Lean.IR.findEnvDecl s.env `main
    | throwError "missing IR declaration for main"
  let code ← runMainZig s.env opts ["alpha", "beta"] decl
  unless code == 13 do
    throwError "unexpected Zig runMain exit code: {code}"
