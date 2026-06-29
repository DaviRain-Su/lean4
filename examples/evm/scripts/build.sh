#!/usr/bin/env bash
set -euo pipefail

# Build all EVM example contracts.
#
# Usage: examples/evm/scripts/build.sh
#
# Requires: lean (stage1), solc, cast (foundry) on PATH.

ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
export PATH="$HOME/.foundry/bin:$PATH"
EVMC="$ROOT/tools/evmc"
LEAN="${LEAN:-$ROOT/build/release/stage1/bin/lean}"
LEAN_LIB="${LEAN_LIB:-$ROOT/build/release/stage1/lib/lean}"
SOLC="${SOLC:-solc}"

CONTRACTS_DIR="$ROOT/examples/evm/contracts"
OUT_DIR="${EVM_OUT_DIR:-$ROOT/build/evm}"
mkdir -p "$OUT_DIR"

echo "Building EVM example contracts..."

FAILURES=0
for LEAN_FILE in "$CONTRACTS_DIR"/*.lean; do
  BASENAME="$(basename "$LEAN_FILE" .lean)"
  OUTPUT="$OUT_DIR/$BASENAME.bin"
  if LEAN="$LEAN" LEAN_LIB="$LEAN_LIB" SOLC="$SOLC" bash "$EVMC" "$LEAN_FILE" "$OUTPUT" 2>/tmp/evmc_build_err; then
    SIZE=$(wc -c < "$OUTPUT" | tr -d ' ')
    echo "  ✔ $BASENAME ($SIZE hex chars)"
  else
    echo "  ✗ $BASENAME FAILED"
    cat /tmp/evmc_build_err
    FAILURES=$((FAILURES + 1))
  fi
done

if [[ "$FAILURES" -gt 0 ]]; then
  echo "Build failed: $FAILURES contract(s) failed"
  exit 1
fi
echo "All contracts built successfully."
