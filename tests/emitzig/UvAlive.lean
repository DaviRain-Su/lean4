module
prelude
import Init.System.IO
import Std.Internal.UV

/-! Smoke test that the libuv event loop is alive after runtime init. -/

open Std.Internal.UV

def main : IO Unit := do
  let alive ← Loop.alive
  IO.println ("alive:" ++ toString alive)
