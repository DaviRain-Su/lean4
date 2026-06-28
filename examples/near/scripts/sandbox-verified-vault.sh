#!/usr/bin/env bash
# Copyright (c) 2026 DaviRain. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd "$SCRIPT_DIR/../../.." && pwd)"
OUT_DIR="${LEAN_NEAR_EXAMPLES_OUT:-/tmp/lean_near_examples}"

LEAN_NEAR_EXAMPLES_OUT="$OUT_DIR" "$SCRIPT_DIR/build.sh"

NEAR_WORKSPACES_SCENARIO=vault \
  bash "$ROOT/tests/emitzig_near/run_workspaces_test.sh" "$OUT_DIR/VerifiedVault.wasm"
