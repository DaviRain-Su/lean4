#!/usr/bin/env bash
set -euo pipefail

# Uniswap V2 NEAR Sandbox test
#
# Tests the Factory + Pair contracts against a local NEAR sandbox.
# Requires: near-sandbox, near-workspaces (Node.js)
#
# Usage: examples/near/contracts/uniswap_v2/scripts/sandbox_test.sh

ROOT="$(cd "$(dirname "$0")/../../../.." && pwd)"
OUT_DIR="${OUT_DIR:-/tmp/uniswap_v2_near}"
SANDBOX_BIN="${SANDBOX_BIN:-near-sandbox}"

mkdir -p "$OUT_DIR"

echo "=== Uniswap V2 NEAR Sandbox Test ==="
echo ""

# Check sandbox
if ! command -v "$SANDBOX_BIN" &> /dev/null; then
  echo "near-sandbox not found. Install with: curl --proto '=https' --tlsv1.2 -sSf https://sh.near.dev | sh"
  exit 1
fi

# Start sandbox
echo "Starting near-sandbox..."
"$SANDBOX_BIN" --home "$OUT_DIR/sandbox-data" --rpc-port 3040 > "$OUT_DIR/sandbox.log" 2>&1 &
SANDBOX_PID=$!
sleep 3

cleanup() {
  kill $SANDBOX_PID 2>/dev/null || true
}
trap cleanup EXIT

RPC="http://localhost:3040"
MASTER="$OUT_DIR/sandbox-data/testnet/founder.near"
MASTER_KEY="$OUT_DIR/sandbox-data/testnet/validator_key.json"

if [[ ! -f "$MASTER_KEY" ]]; then
  echo "Sandbox key not found at $MASTER_KEY"
  exit 1
fi

echo "Sandbox running on $RPC"
echo ""

# Create test accounts
echo "Creating test accounts..."
for acct in factory.near token0.near token1.near alice.near; do
  near create-account "$acct" --masterAccount founder.near --initialBalance 10 --networkId sandbox --nodeUrl "$RPC" 2>/dev/null || true
done

echo "Deploying Factory contract..."
# TODO: compile Factory.lean to WASM and deploy
# near deploy --accountId factory.near --wasmFile factory.wasm --nodeUrl "$RPC"

echo ""
echo "=== Test: Factory.createPair ==="
# TODO: call factory.createPair("token0.near", "token1.near")
# near call factory.near createPair '{"tokenA":"token0.near","tokenB":"token1.near"}' --accountId alice.near --nodeUrl "$RPC"

echo "=== Test: Add Liquidity ==="
# TODO: ft_transfer_call to pair with msg="addLiquidity"

echo "=== Test: Swap ==="
# TODO: ft_transfer_call to pair with msg="swap:0:<amountOut>"

echo "=== Test: Remove Liquidity ==="
# TODO: call pair.burn

echo ""
echo "Sandbox test framework ready. Compile contracts to WASM and deploy to run full tests."
