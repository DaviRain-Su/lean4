/-!
Test that the new do elaborator propagates the outer expected type into the
terminal action of a `try`/`catch` body, so that structural coercions such as
`Bool → Option Bool` inside a tuple literal work.

The tuple case cannot be handled by the "fresh inner type + post-hoc coercion"
strategy used for monad-polymorphic terms (see `doTryCatchCoerce.lean`), because
there is no `Coe (Bool × Bool) (Option Bool × Bool)` instance. Instead, the
expected type `Option Bool × Bool` must propagate into `pure (a, false)` so the
first component gets `Option Bool` as its expected type, enabling the
`Bool → Option Bool` coercion on `a`.

When no monad transformer is added by the `ControlLifter` (no `return`/`break`/
`continue`/mut vars in the body), the body is elaborated with `origCont.resultType`
as the expected inner type, mirroring the legacy elaborator's behavior of passing
the body through unwrapped in the `.regular` case with empty `uvars`.
-/

def foo (x : IO Bool) : IO (Option Bool × Bool) := do
  try
    let a ← x
    pure (a, false)
  catch _ =>
    pure (none, false)

/-- info: (some true, false) -/
#guard_msgs in
#eval foo (pure true)
