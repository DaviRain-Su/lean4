#!/usr/bin/env bash
# Copyright (c) 2026 DaviRain. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
EXAMPLES_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"
ROOT="$(cd "$EXAMPLES_DIR/../.." && pwd)"
OUT_DIR="${LEAN_NEAR_EXAMPLES_OUT:-/tmp/lean_near_examples}"
LEAN_BIN="${LEAN:-$ROOT/build/release/stage1/bin/lean}"

(
  cd "$ROOT/src/runtime/zig"
  zig build -Dtarget="${WASM_TARGET:-wasm32-wasi}" -Dcpu="${WASM_CPU:-mvp}" -Doptimize="${NEAR_OPTIMIZE:-ReleaseSmall}" --prefix zig-out
)

LEAN="$LEAN_BIN" \
LEAN_ZIG_OUT_DIR="$OUT_DIR" \
  bash "$ROOT/tests/emitzig_near/run_test.sh" "$EXAMPLES_DIR"/contracts/*.lean

echo "built examples into $OUT_DIR"
