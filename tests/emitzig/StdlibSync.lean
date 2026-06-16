module
prelude
import Init.System.IO
import Init.System.Promise
import Std.Sync.Mutex
import Std.Sync.Semaphore

/-! End-to-end stdlib-linked EmitZig test for synchronization primitives. -/

open Std

def printTaskResult : Except IO.Error String → IO Unit
  | .ok msg => IO.println msg
  | .error _ => IO.println "task-error"

def main : IO Unit := do
  let mutex ← Mutex.new (0 : Nat)
  mutex.atomically (·.modify (· + 1))
  IO.println (← mutex.atomically (·.get))
  match ← mutex.tryAtomically (·.modifyGet fun n => (n + 1, n + 1)) with
  | some n => IO.println n
  | none => IO.println "try-lock-failed"

  let raw ← BaseMutex.new
  raw.lock
  IO.println (← raw.tryLock)
  raw.unlock
  IO.println (← raw.tryLock)
  raw.unlock

  let sem ← Semaphore.new 1
  IO.println (← sem.availablePermits)
  IO.println (← sem.tryAcquire)
  IO.println (← sem.availablePermits)
  let permit ← sem.acquire
  IO.println (← permit.isResolved)
  sem.release
  match permit.result?.get with
  | some () => IO.println "semaphore-ready"
  | none => IO.println "semaphore-dropped"

  let cond ← Condvar.new
  let flag ← Mutex.new false
  let started ← IO.Promise.new
  let waiter ← IO.asTask do
    flag.atomically do
      started.resolve ()
      while !(← get) do
        cond.wait flag
      return "condvar-released"

  match started.result?.get with
  | some () => IO.println "condvar-started"
  | none => IO.println "condvar-start-dropped"

  flag.atomically do
    set true
    cond.notifyAll

  printTaskResult waiter.get
