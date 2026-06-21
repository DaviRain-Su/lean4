/-! Regression test for `lean --run` keeping command elaboration tasks alive until compilation finishes. -/

def main : IO Unit :=
  IO.println "ok"
