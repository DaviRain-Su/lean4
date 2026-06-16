module
prelude
import Init.System.IO
import Std.Http.Data.Extensions
import Std.Http.Data.Version

/-! End-to-end stdlib-linked EmitZig test for HTTP versions and typed extensions. -/

open Std.Http

structure TraceId where
  value : String
deriving TypeName

structure RetryBudget where
  attempts : Nat
deriving TypeName

def showTrace? : Option TraceId → String
  | some trace => trace.value
  | none => "missing"

def showBudget? : Option RetryBudget → String
  | some budget => toString budget.attempts
  | none => "missing"

def main : IO Unit := do
  IO.println (toString Version.v20)
  match Version.ofNumber? 3 0 with
  | some version => IO.println (toString version)
  | none => IO.println "missing"
  IO.println (Version.ofString? "HTTP/1.1").isSome
  IO.println (Version.ofString? "HTTP/9.9").isNone
  let (major, minor) := Version.v10.toNumber
  IO.println (toString major ++ "." ++ toString minor)

  let empty := Extensions.empty
  IO.println (empty.contains TraceId)
  let withTrace := empty.insert ({ value := "trace-a" } : TraceId)
  IO.println (withTrace.contains TraceId)
  IO.println (showTrace? (withTrace.get TraceId))
  IO.println (showBudget? (withTrace.get RetryBudget))
  let replaced := withTrace.insert ({ value := "trace-b" } : TraceId)
  IO.println (showTrace? (replaced.get TraceId))
  let withBudget := replaced.insert ({ attempts := 3 } : RetryBudget)
  IO.println (showTrace? (withBudget.get TraceId))
  IO.println (showBudget? (withBudget.get RetryBudget))
  let removedTrace := withBudget.remove TraceId
  IO.println (removedTrace.contains TraceId)
  IO.println (showTrace? (removedTrace.get TraceId))
  IO.println (showBudget? (removedTrace.get RetryBudget))
