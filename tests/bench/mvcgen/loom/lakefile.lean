import Lake
open Lake DSL

package loom where
  precompileModules := false

@[test_driver]
lean_lib Loom where
  globs := #[`Loom.+]
  moreLeanArgs := #["--tstack=102400"]
