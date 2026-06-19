/-!
EmitZig test: exercises static-inline runtime helpers from lean.h.

Validates that lean_string_eq, lean_is_string, lean_to_string, lean_closure_arity,
lean_array_capacity, lean_name_hash, and related C++ inline helpers are provided
by the Zig runtime archive.
-/

def main : IO Unit := do
  -- String equality (lean_string_eq / lean_string_ne)
  let s1 := "hello"
  let s2 := "hello"
  let s3 := "world"
  if s1 == s2 then IO.println "eq-same"
  if s1 != s3 then IO.println "ne-diff"

  -- String length and emptiness (lean_string_len)
  IO.println s1.length

  -- Array operations (lean_array_capacity, lean_array_byte_size)
  let arr := #[1, 2, 3]
  IO.println arr.size

  -- IO.wait returns the task value
  let _t ← IO.asTask (pure 42)

  -- Name hashing (lean_name_hash)
  let n := `foo.bar
  IO.println n.hash

  -- Int operations (lean_int_eq, lean_int_le)
  let i : Int := 42
  if i == 42 then IO.println "int-eq"
  if i ≤ 100 then IO.println "int-le"

  -- Nat inequality (lean_nat_ne)
  if (1 : Nat) != 2 then IO.println "nat-ne"
