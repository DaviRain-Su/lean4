/-! Regression test for control-character escaping in emitted Zig string literals. -/

def escaped : String := "a\x00b\x1fc\\\"?\n\t\r"

def main : IO Unit := do
  IO.println escaped.length
  IO.println escaped.utf8ByteSize
  for c in escaped.toList do
    IO.println c.toNat
