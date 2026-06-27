/-! Cross-target Zig smoke test.

Verifies that a host Lean executable can emit C which is then compiled and linked
for a foreign target without executing the produced binary.
-/

def main : IO Unit := IO.println "cross smoke"
