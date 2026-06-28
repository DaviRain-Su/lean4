#!/usr/bin/env bash
set -euo pipefail

# End-to-end test: Lean source → EmitZig → NEAR-compatible WASM module.
# Verifies that the full pipeline produces a valid MVP WASM module without
# post-MVP instructions (bulk_memory, sign_ext, simd, etc.).

LEAN="${LEAN:-lean}"
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
BUILD_DIR="${BUILD_DIR:-$ROOT/build/release/stage1}"
ZIGC_NEAR="$ROOT/tools/zigc-near"

OUT_DIR="${LEAN_ZIG_OUT_DIR:-/tmp/emitzig_near}"
mkdir -p "$OUT_DIR"

if [[ "$#" -eq 0 ]]; then
  TESTS=()
  for TEST in ./*.lean; do
    TESTS+=("$TEST")
  done
else
  TESTS=("$@")
fi

for TEST in "${TESTS[@]}"; do
  BASENAME="$(basename "$TEST" .lean)"
  ZIG_FILE="$OUT_DIR/$BASENAME.zig"
  WASM_FILE="$OUT_DIR/$BASENAME.wasm"
  METHODS_FILE="$(dirname "$TEST")/$BASENAME.near-methods"
  NEAR_METHODS=()
  NEAR_METHOD_EXPORTS=()
  if [[ -f "$METHODS_FILE" ]]; then
    while IFS= read -r line || [[ -n "$line" ]]; do
      [[ -n "$line" ]] || continue
      [[ "$line" != \#* ]] || continue
      NEAR_METHODS+=("$line")
      NEAR_METHOD_EXPORTS+=("${line%%=*}")
    done < "$METHODS_FILE"
  fi
  # Step 1: Emit Zig code from Lean source.
  "$LEAN" "$TEST" -z "$ZIG_FILE"

  # Step 2: Verify the generated Zig is syntactically valid.
  [[ -s "$ZIG_FILE" ]] || { echo "Zig output is empty for $TEST"; exit 1; }

  if command -v zig &> /dev/null; then
    zig ast-check "$ZIG_FILE"
  fi

  # Step 3: Compile to NEAR-compatible WASM.
  if [[ -f "$METHODS_FILE" ]]; then
    NEAR_METHODS_FILE="$METHODS_FILE" \
    LEAN_RT_ZIG="$ROOT/src/runtime/zig/lean_rt.zig" \
      bash "$ZIGC_NEAR" "$ZIG_FILE" "$WASM_FILE"
  else
    LEAN_RT_ZIG="$ROOT/src/runtime/zig/lean_rt.zig" \
      bash "$ZIGC_NEAR" "$ZIG_FILE" "$WASM_FILE"
  fi

  # Step 4: Verify it's a valid MVP WASM module.
  [[ -s "$WASM_FILE" ]] || { echo "WASM output is empty for $TEST"; exit 1; }

  # Step 5: Check for post-MVP instructions (must be zero).
  NON_MVP=$(zig objdump -d "$WASM_FILE" 2>/dev/null | grep -icE "memory.copy|memory.fill|i8x16|i16x8|sign_extend" || true)
  if [[ "$NON_MVP" -gt 0 ]]; then
    echo "Found $NON_MVP post-MVP instructions in $TEST — NEAR VM will reject this"
    exit 1
  fi

  if [[ "${#NEAR_METHOD_EXPORTS[@]}" -gt 0 ]]; then
    node - "$WASM_FILE" "${NEAR_METHOD_EXPORTS[@]}" <<'JS'
const fs = require("fs");
const [wasmPath, ...expected] = process.argv.slice(2);
const module = new WebAssembly.Module(fs.readFileSync(wasmPath));
const exported = new Set(WebAssembly.Module.exports(module).map((entry) => entry.name));
const missing = expected.filter((name) => !exported.has(name));
if (missing.length > 0) {
  console.error(`Missing NEAR method exports in ${wasmPath}: ${missing.join(", ")}`);
  process.exit(1);
}
JS
  fi
done

echo "ok"
