#!/usr/bin/env bash
# Copyright (c) 2026 DaviRain. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

"$SCRIPT_DIR/sandbox-counter.sh"
"$SCRIPT_DIR/sandbox-verified-vault.sh"

echo "near sandbox examples passed"
