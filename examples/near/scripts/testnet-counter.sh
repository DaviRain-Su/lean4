#!/usr/bin/env bash
# Copyright (c) 2026 DaviRain. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

if [[ -z "${TESTNET_MASTER_ACCOUNT_ID:-}" && -z "${NEAR_WORKSPACES_TESTNET_MASTER_ACCOUNT_ID:-}" ]]; then
  echo "TESTNET_MASTER_ACCOUNT_ID is required for testnet" >&2
  exit 2
fi

NEAR_WORKSPACES_NETWORK="${NEAR_WORKSPACES_NETWORK:-testnet}" \
  "$SCRIPT_DIR/sandbox-counter.sh"
