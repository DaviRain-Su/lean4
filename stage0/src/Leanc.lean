/-
Copyright (c) 2022 Sebastian Ullrich. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich
-/
import Lean.Compiler.FFI

open Lean.Compiler.FFI

/-- Split a compiler command string into (cmd, extraArgs).
    "zig cc" → ("zig", ["cc"])
    "zig cc -target x86_64-linux" → ("zig", ["cc", "-target", "x86_64-linux"])
    "clang" → ("clang", []) -/
def splitCcCommand (cc : String) : String × Array String :=
  match cc.splitOn " " |>.filter (!·.isEmpty) with
  | [] => ("cc", #[])
  | [cmd] => (cmd, #[])
  | cmd :: rest => (cmd, rest.toArray)

def main (args : List String) : IO UInt32 := do
  let root ← match (← IO.getEnv "LEAN_SYSROOT") with
    | some root => pure <| System.FilePath.mk root
    | none      => pure <| (← IO.appDir).parent.get!
  let mut cc := "@LEANC_CC@".replace "ROOT" root.toString

  if args.isEmpty then
    IO.println s!"Lean C compiler

A simple wrapper around a C compiler. Defaults to `{cc}`,
which can be overridden with the environment variable `LEAN_CC`. All parameters are passed
as-is to the wrapped compiler.

Interesting options:
* `--print-cflags`: print C compiler flags necessary for building against the Lean runtime and exit
* `--print-ldflags`: print C compiler flags necessary for statically linking against the Lean library and exit"
    return 1

  -- It is difficult to identify the correct minor version here, leading to linking warnings like:
  -- `ld64.lld: warning: /usr/lib/system/libsystem_kernel.dylib has version 13.5.0, which is newer than target minimum of 13.0.0`
  -- In order to suppress these we set the MACOSX_DEPLOYMENT_TARGET variable into the far future.
  -- Skip this when using zig cc — zig uses -target triples instead.
  let isZigCc := cc.startsWith "zig"
  let env := match (← IO.getEnv "MACOSX_DEPLOYMENT_TARGET") with
    | some _ => #[]
    | none   => if isZigCc then #[] else #[("MACOSX_DEPLOYMENT_TARGET", "99.0")]

  -- let compileOnly := args.contains "-c"
  let linkStatic := !(args.contains "-shared" || args.contains "-leanshared")
  let args := args.erase "-leanshared"

  -- We assume that the CMake variables do not contain escaped spaces
  let cflags := getCFlags root
  let mut cflagsInternal := getInternalCFlags root
  let mut ldflagsInternal := getInternalLinkerFlags root
  let mut ldflags := getLinkerFlags root linkStatic
  if System.Platform.isWindows && !args.contains "-shared" then
    ldflags := ldflags ++ #["-Wl,--whole-archive", "-lleanmanifest", "-Wl,--no-whole-archive"]

  for arg in args do
    match arg with
    | "--print-cflags" =>
      IO.println <| " ".intercalate cflags.toList
      return 0
    | "--print-ldflags" =>
      IO.println <| " ".intercalate (cflags ++ ldflags).toList
      return 0
    | _ => pure ()

  let mut extraArgs : Array String := #[]
  let mut isZig := false
  if let some cc' ← IO.getEnv "LEAN_CC" then
    -- Support multi-word commands like "zig cc" or "zig cc -target x86_64-linux"
    let (cmd, args') := splitCcCommand cc'
    cc := cmd
    extraArgs := args'
    isZig := cc'.contains "zig"
    -- these are intended for the bundled compiler only
    cflagsInternal := #[]
    ldflagsInternal := #[]
  let mut args := cflags ++ cflagsInternal ++ args ++ ldflagsInternal ++ ldflags ++ ["-Wno-unused-command-line-argument"]
  args := (extraArgs ++ args).filter (!·.isEmpty)
  if isZig then
    let mut rewritten := #[]
    let mut skipNext := false
    for arg in args do
      if skipNext then
        rewritten := rewritten.push arg
        skipNext := false
      else if arg == "-o" then
        rewritten := rewritten.push arg
        skipNext := true
      else if (arg.endsWith ".o.export" || arg.endsWith ".a.export") && (← (System.FilePath.mk arg).pathExists) then
        let canon := (arg.dropEnd ".export".length).copy
        if (← (System.FilePath.mk canon).pathExists) then
          IO.FS.removeFile (System.FilePath.mk canon)
        try IO.FS.hardLink (System.FilePath.mk arg) (System.FilePath.mk canon) catch _ => pure ()
        rewritten := rewritten.push canon
      else
        rewritten := rewritten.push arg
    args := rewritten
  if args.contains "-v" then
    IO.eprintln s!"{cc} {" ".intercalate args.toList}"
  let child ← IO.Process.spawn { cmd := cc, args, env }
  child.wait