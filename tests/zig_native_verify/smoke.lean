/-! Native Zig smoke test.

Verifies that the current stage Lean executable can emit C and that the current
stage `leanc` can compile, link, and execute the produced program on the host.
-/

def main : IO Unit :=
  IO.println "native zig smoke"
