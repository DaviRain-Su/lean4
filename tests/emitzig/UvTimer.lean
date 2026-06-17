module
prelude
import Init.System.IO
import Std.Internal.UV

/-! Smoke test that libuv timers resolve promises through the Zig runtime. -/

open Std.Internal.UV

def main : IO Unit := do
  let timer ← Timer.mk 50 false
  let promise ← timer.next
  let _ := promise.result?.get
  IO.println "ok"
