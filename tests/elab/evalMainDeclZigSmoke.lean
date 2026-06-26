module

import Lean
public meta import Lean.Shell

/-!
Checks both the production and Zig `lean_eval_main_decl` entrypoints on the same
compiled-IR path used by `lean --run`.
-/

open Lean


public def main (args : List String) : IO UInt32 := do
  if args == ["alpha", "beta"] then
    return 13
  return 2

public def altMain (args : List String) : IO UInt32 := do
  if args == ["alpha", "beta"] then
    return 29
  return 7

run_cmd do
  let env ← getEnv
  let opts : Options := {}
  let (_, s) ← (Lean.compileDecls #[`main, `altMain]).toIO
    { fileName := "evalMainDeclZigSmoke.lean", fileMap := default, options := opts }
    { env := env }
  let some mainDecl := Lean.IR.findEnvDecl s.env `main
    | throwError "missing IR declaration for main"
  let some altDecl := Lean.IR.findEnvDecl s.env `altMain
    | throwError "missing IR declaration for altMain"

  let mainCode ← Lean.runMain s.env opts ["alpha", "beta"] mainDecl
  let mainCodeZig ← runMainZig s.env opts ["alpha", "beta"] mainDecl
  unless mainCode == 13 do
    throwError "unexpected production runMain exit code: {mainCode}"
  unless mainCodeZig == mainCode do
    throwError "runMain parity mismatch for main: production={mainCode}, zig={mainCodeZig}"

  let altCode ← Lean.runMain s.env opts ["alpha", "beta"] altDecl
  let altCodeZig ← runMainZig s.env opts ["alpha", "beta"] altDecl
  unless altCode == 29 do
    throwError "unexpected production altMain exit code: {altCode}"
  unless altCodeZig == altCode do
    throwError "runMain parity mismatch for altMain: production={altCode}, zig={altCodeZig}"
