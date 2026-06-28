/-!
EmitZig test: FloatArray operations (Zig runtime exports).

Run in zigc-zigrt mode; default mode lacks inline Float comparison symbols.
-/

set_option linter.unusedVariables false

def main : IO Unit := do
  let arr : FloatArray := FloatArray.mk #[1.0, 2.0]
  IO.println (toString arr.size)
  let arr2 := arr.set! 1 3.5
  let v := arr2.get! 1
  -- Avoid Float equality (inline in C++ runtime) by using the value structurally.
  let arr3 := arr2.push v
  IO.println (toString arr3.size)
