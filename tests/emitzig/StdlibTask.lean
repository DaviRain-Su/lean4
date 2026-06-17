module
prelude
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for IO task execution. -/

def printResult (r : Except IO.Error Nat) : IO Unit := do
  match r with
  | Except.ok n => IO.println n
  | Except.error _ => IO.println "error"

def sumList (xs : List Nat) : Nat :=
  xs.foldl (fun acc n => acc + n) 0

def main : IO Unit := do
  let pureMapped := Task.map (fun n => n + 3) (Task.pure 7) (sync := true)
  IO.println "task-map"
  IO.println pureMapped.get
  let pureBound := Task.bind (Task.pure 5) (fun n => Task.pure (n * 4)) (sync := true)
  IO.println "task-bind"
  IO.println pureBound.get
  let t ← IO.asTask (pure (20 + 22))
  IO.println "io-success"
  printResult t.get
  let failed ← IO.asTask (throw (IO.userError "boom") : IO Nat)
  IO.println "io-error"
  printResult failed.get
  let base := Task.pure 34
  let mapped ← IO.mapTask (fun n => pure (n + 8)) base (sync := true)
  IO.println "io-map"
  printResult mapped.get
  let bound ← IO.bindTask base (fun n => IO.asTask (pure (n / 2))) (sync := true)
  IO.println "io-bind"
  printResult bound.get
  let t1 ← BaseIO.asTask (pure 2)
  let t2 ← BaseIO.asTask (pure 3)
  let t3 ← BaseIO.asTask (pure 5)
  let combined ← IO.mapTasks (fun ns => pure (sumList ns)) [t1, t2, t3] (sync := true)
  IO.println "io-map-tasks"
  printResult combined.get
  let finished := Task.pure 99
  IO.println "state-finished"
  if ← IO.hasFinished finished then
    IO.println "true"
  else
    IO.println "false"
  IO.println "wait"
  IO.println (← IO.wait finished)
