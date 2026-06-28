#!/usr/bin/env bash
# Copyright (c) 2026 DaviRain. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
EXAMPLES_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"
ROOT="$(cd "$EXAMPLES_DIR/../.." && pwd)"
OUT_DIR="${LEAN_NEAR_EXAMPLES_OUT:-/tmp/lean_near_examples}"

"$SCRIPT_DIR/build.sh"

LEAN="${LEAN:-$ROOT/build/release/stage1/bin/lean}" \
LEAN_ZIG_OUT_DIR="$OUT_DIR" \
  bash "$ROOT/tests/emitzig_near/run_workspaces_test.sh" "$OUT_DIR/Counter.wasm"
