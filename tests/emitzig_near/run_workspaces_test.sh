#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
OUT_DIR="${LEAN_ZIG_OUT_DIR:-/tmp/emitzig_near}"
WASM_FILE="${1:-$OUT_DIR/CounterContractSDK.wasm}"
WORKSPACES_DIR="${NEAR_WORKSPACES_NODE_DIR:-/tmp/lean_near_workspaces_node}"
NEAR_WORKSPACES_VERSION="${NEAR_WORKSPACES_VERSION:-5.0.0}"
WABT_VERSION="${WABT_VERSION:-1.0.39}"
WASM_TARGET="${WASM_TARGET:-wasm32-wasi}"
WASM_CPU="${WASM_CPU:-mvp}"
NEAR_OPTIMIZE="${NEAR_OPTIMIZE:-ReleaseSmall}"

if [[ "${NEAR_WORKSPACES_NETWORK:-sandbox}" == "testnet" ]] &&
   [[ -z "${TESTNET_MASTER_ACCOUNT_ID:-}" && -z "${NEAR_WORKSPACES_TESTNET_MASTER_ACCOUNT_ID:-}" ]]; then
  echo "TESTNET_MASTER_ACCOUNT_ID is required for NEAR_WORKSPACES_NETWORK=testnet" >&2
  exit 2
fi

if [[ "${NEAR_BUILD_RUNTIME:-1}" != "0" ]]; then
  (
    cd "$ROOT/src/runtime/zig"
    zig build -Dtarget="$WASM_TARGET" -Dcpu="$WASM_CPU" -Doptimize="$NEAR_OPTIMIZE" --prefix zig-out
  )
fi

if [[ ! -f "$WASM_FILE" ]]; then
  LEAN="${LEAN:-$ROOT/build/release/stage1/bin/lean}" \
  LEAN_ZIG_OUT_DIR="$OUT_DIR" \
  WASM_TARGET="$WASM_TARGET" \
  WASM_CPU="$WASM_CPU" \
  NEAR_OPTIMIZE="$NEAR_OPTIMIZE" \
    bash "$ROOT/tests/emitzig_near/run_test.sh" "$ROOT/tests/emitzig_near/CounterContractSDK.lean"
fi

mkdir -p "$WORKSPACES_DIR"
PACKAGES=()
if [[ ! -d "$WORKSPACES_DIR/node_modules/near-workspaces" ]]; then
  PACKAGES+=("near-workspaces@$NEAR_WORKSPACES_VERSION")
fi
if [[ ! -d "$WORKSPACES_DIR/node_modules/wabt" ]]; then
  PACKAGES+=("wabt@$WABT_VERSION")
fi
if [[ "${#PACKAGES[@]}" -gt 0 ]]; then
  (
    cd "$WORKSPACES_DIR"
    if [[ ! -f package.json ]]; then
      npm init -y >/dev/null
    fi
    npm install --ignore-scripts --no-audit --no-fund "${PACKAGES[@]}"
  )
fi

if [[ "${NEAR_WORKSPACES_NETWORK:-sandbox}" == "sandbox" ]]; then
  if [[ -z "${NEAR_SANDBOX_BINARY_PATH:-}" ]]; then
    SANDBOX_DIR="${NEAR_SANDBOX_CACHE_DIR:-/tmp/near-sandbox-bin}"
    if [[ ! -x "$SANDBOX_DIR/near-sandbox" ]]; then
      mkdir -p "$SANDBOX_DIR"
      PLATFORM="$(uname -s)"
      ARCH="$(uname -m)"
      case "$PLATFORM:$ARCH" in
        Darwin:arm64) SANDBOX_PLATFORM="Darwin-arm64" ;;
        Linux:x86_64) SANDBOX_PLATFORM="Linux-x86_64" ;;
        *)
          echo "near-sandbox auto-download does not support $PLATFORM $ARCH; set NEAR_SANDBOX_BINARY_PATH" >&2
          exit 2
          ;;
      esac
      SANDBOX_URL="${SANDBOX_ARTIFACT_URL:-https://s3-us-west-1.amazonaws.com/build.nearprotocol.com/nearcore/$SANDBOX_PLATFORM/2.6.2/near-sandbox.tar.gz}"
      curl -L --fail --max-time 180 -s "$SANDBOX_URL" | tar -xz --strip-components=1 -C "$SANDBOX_DIR"
    fi
    export NEAR_SANDBOX_BINARY_PATH="$SANDBOX_DIR"
  fi
  export NEAR_SANDBOX_BIN_PATH="${NEAR_SANDBOX_BIN_PATH:-1}"
fi

DEPLOY_WASM="$WASM_FILE"
if [[ "${NEAR_STRIP_WASI:-1}" != "0" ]]; then
  STRIPPED_WASM="${NEAR_STRIPPED_WASM:-${WASM_FILE%.wasm}.near.wasm}"
  NODE_PATH="$WORKSPACES_DIR/node_modules" \
    node "$ROOT/tools/near-strip-wasi-imports.cjs" "$WASM_FILE" "$STRIPPED_WASM"
  DEPLOY_WASM="$STRIPPED_WASM"
fi

NODE_PATH="$WORKSPACES_DIR/node_modules" \
  node "$ROOT/tests/emitzig_near/near_workspaces_smoke.cjs" "$DEPLOY_WASM"
