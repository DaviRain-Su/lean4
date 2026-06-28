/-! End-to-end EmitZig test for constructors with object and scalar fields. -/

structure Mixed where
  label : String
  flag : Bool

def mkMixed (flag : Bool) : Mixed :=
  { label := if flag then "enabled" else "disabled", flag }

def printMixed (mixed : Mixed) : IO Unit := do
  IO.println mixed.label
  IO.println mixed.flag

def main : IO Unit := do
  printMixed (mkMixed true)
  printMixed (mkMixed false)
