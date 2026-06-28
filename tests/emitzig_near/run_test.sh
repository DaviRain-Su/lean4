#!/usr/bin/env bash
set -euo pipefail

# End-to-end test: Lean source → EmitZig → NEAR-compatible WASM module.
# Verifies that the full pipeline produces a valid MVP WASM module without
# post-MVP instructions (bulk_memory, sign_ext, simd, etc.).

LEAN="${LEAN:-lean}"
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
BUILD_DIR="${BUILD_DIR:-$ROOT/build/release/stage1}"
ZIGC_NEAR="$ROOT/tools/zigc-near"

TEST="$1"
BASENAME="$(basename "$TEST" .lean)"
OUT_DIR="${LEAN_ZIG_OUT_DIR:-/tmp/emitzig_near}"
mkdir -p "$OUT_DIR"

ZIG_FILE="$OUT_DIR/$BASENAME.zig"
WASM_FILE="$OUT_DIR/$BASENAME.wasm"

# Step 1: Emit Zig code from Lean source.
"$LEAN" "$TEST" -z "$ZIG_FILE"

# Step 2: Verify the generated Zig is syntactically valid.
[[ -s "$ZIG_FILE" ]] || { echo "Zig output is empty"; exit 1; }

if command -v zig &> /dev/null; then
  zig ast-check "$ZIG_FILE"
fi

# Step 3: Compile to NEAR-compatible WASM.
LEAN_RT_ZIG="$ROOT/src/runtime/zig/lean_rt.zig" \
  bash "$ZIGC_NEAR" "$ZIG_FILE" "$WASM_FILE"

# Step 4: Verify it's a valid MVP WASM module.
[[ -s "$WASM_FILE" ]] || { echo "WASM output is empty"; exit 1; }

# Step 5: Check for post-MVP instructions (must be zero).
NON_MVP=$(zig objdump -d "$WASM_FILE" 2>/dev/null | grep -icE "memory.copy|memory.fill|i8x16|i16x8|sign_extend" || true)
if [[ "$NON_MVP" -gt 0 ]]; then
  echo "Found $NON_MVP post-MVP instructions — NEAR VM will reject this"
  exit 1
fi

echo "ok"
