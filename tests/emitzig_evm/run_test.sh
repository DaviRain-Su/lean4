#!/usr/bin/env bash
set -euo pipefail

# End-to-end test: Lean EVM contract → EmitYul → Yul → solc → bytecode → forge test.
#
# This script:
#   1. Compiles each example contract with evmc.
#   2. Deploys the bytecode via vm.etch in a forge test.
#   3. Runs assertions on contract behavior.
#
# Requires: lean (stage1), solc, forge/cast/anvil (foundry).
#
# Usage:
#   tests/emitzig_evm/run_test.sh           # run all tests
#   tests/emitzig_evm/run_test.sh Counter   # run a specific test

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
export PATH="$HOME/.foundry/bin:$PATH"
EVMC="$ROOT/tools/evmc"
LEAN="${LEAN:-$ROOT/build/release/stage1/bin/lean}"
LEAN_LIB="${LEAN_LIB:-$ROOT/build/release/stage1/lib/lean}"
SOLC="${SOLC:-solc}"
CONTRACTS_DIR="$ROOT/examples/evm/contracts"
OUT_DIR="${EVM_OUT_DIR:-/tmp/emitzig_evm}"
FORGE_DIR="${EVM_FORGE_DIR:-/tmp/emitzig_evm_forge}"

mkdir -p "$OUT_DIR"

# --- Compile all contracts ---
echo "Compiling EVM contracts..."
FAILURES=0
for LEAN_FILE in "$CONTRACTS_DIR"/*.lean; do
  BASENAME="$(basename "$LEAN_FILE" .lean)"
  OUTPUT="$OUT_DIR/$BASENAME.bin"
  if LEAN="$LEAN" LEAN_LIB="$LEAN_LIB" SOLC="$SOLC" bash "$EVMC" "$LEAN_FILE" "$OUTPUT" 2>/dev/null; then
    echo "  ✔ $BASENAME compiled"
  else
    echo "  ✗ $BASENAME failed to compile"
    FAILURES=$((FAILURES + 1))
  fi
done
[[ "$FAILURES" -eq 0 ]] || { echo "Compilation failures"; exit 1; }

# --- Set up forge test environment ---
echo ""
echo "Setting up forge environment..."
if [[ ! -d "$FORGE_DIR" ]]; then
  forge init --no-git --no-commit "$FORGE_DIR" 2>/dev/null
fi

# Generate Solidity test files from bytecode.
TEST_DIR="$FORGE_DIR/test"
mkdir -p "$TEST_DIR"

# --- Counter test ---
COUNTER_BIN=$(cat "$OUT_DIR/Counter.bin")
cat > "$TEST_DIR/CounterTest.t.sol" <<SOL
// SPDX-License-Identifier: MIT
pragma solidity ^0.8.20;
import "forge-std/Test.sol";
contract CounterTest is Test {
    function test_counter() public {
        bytes memory code = hex"${COUNTER_BIN}";
        address d = address(0xCAFE);
        vm.etch(d, code);
        // get() initial = 0
        (bool ok1, bytes memory r1) = d.call(abi.encodeWithSignature("get()"));
        assertTrue(ok1);
        assertEq(abi.decode(r1, (uint256)), 0);
        // set(42)
        (bool ok2,) = d.call(abi.encodeWithSignature("set(uint256)", uint256(42)));
        assertTrue(ok2);
        // get() = 42
        (bool ok3, bytes memory r3) = d.call(abi.encodeWithSignature("get()"));
        assertTrue(ok3);
        assertEq(abi.decode(r3, (uint256)), 42);
        // increment
        (bool ok4,) = d.call(abi.encodeWithSignature("increment()"));
        assertTrue(ok4);
        (bool ok5, bytes memory r5) = d.call(abi.encodeWithSignature("get()"));
        assertTrue(ok5);
        assertEq(abi.decode(r5, (uint256)), 43);
        // decrement
        (bool ok6,) = d.call(abi.encodeWithSignature("decrement()"));
        assertTrue(ok6);
        (bool ok7, bytes memory r7) = d.call(abi.encodeWithSignature("get()"));
        assertTrue(ok7);
        assertEq(abi.decode(r7, (uint256)), 42);
    }
}
SOL

# --- SimpleToken test ---
TOKEN_BIN=$(cat "$OUT_DIR/SimpleToken.bin")
cat > "$TEST_DIR/SimpleTokenTest.t.sol" <<SOL
// SPDX-License-Identifier: MIT
pragma solidity ^0.8.20;
import "forge-std/Test.sol";
contract SimpleTokenTest is Test {
    function test_tokenLifecycle() public {
        bytes memory code = hex"${TOKEN_BIN}";
        address token = address(0x70C);
        vm.etch(token, code);
        address alice = address(0xA11CE);
        address bob = address(0xB0B);
        // init(1000000)
        vm.prank(alice);
        (bool i,) = token.call(abi.encodeWithSignature("init(uint256)", uint256(1000000)));
        assertTrue(i);
        // getOwner = alice
        (bool o, bytes memory or) = token.call(abi.encodeWithSignature("getOwner()"));
        assertTrue(o);
        assertEq(abi.decode(or, (uint256)), uint256(uint160(alice)));
        // totalSupply = 1000000
        (bool ts, bytes memory tsr) = token.call(abi.encodeWithSignature("totalSupply()"));
        assertTrue(ts);
        assertEq(abi.decode(tsr, (uint256)), 1000000);
        // balanceOf(alice) = 1000000
        (bool ba, bytes memory bar) = token.call(abi.encodeWithSignature("balanceOf(uint256)", uint256(uint160(alice))));
        assertTrue(ba);
        assertEq(abi.decode(bar, (uint256)), 1000000);
        // transfer alice -> bob 300000
        vm.prank(alice);
        (bool t,) = token.call(abi.encodeWithSignature("transfer(uint256,uint256)", uint256(uint160(bob)), uint256(300000)));
        assertTrue(t);
        // alice = 700000
        (, bytes memory bar2) = token.call(abi.encodeWithSignature("balanceOf(uint256)", uint256(uint160(alice))));
        assertEq(abi.decode(bar2, (uint256)), 700000);
        // bob = 300000
        (, bytes memory bbr2) = token.call(abi.encodeWithSignature("balanceOf(uint256)", uint256(uint160(bob))));
        assertEq(abi.decode(bbr2, (uint256)), 300000);
        // overdraft reverts
        vm.prank(bob);
        (bool rev,) = token.call(abi.encodeWithSignature("transfer(uint256,uint256)", uint256(uint160(alice)), uint256(999999)));
        assertFalse(rev);
    }
}
SOL

# --- ArrayExample test ---
ARRAY_BIN=$(cat "$OUT_DIR/ArrayExample.bin")
cat > "$TEST_DIR/ArrayTest.t.sol" <<SOL
// SPDX-License-Identifier: MIT
pragma solidity ^0.8.20;
import "forge-std/Test.sol";
contract ArrayTest is Test {
    function test_array() public {
        bytes memory code = hex"${ARRAY_BIN}";
        address d = address(0xA7);
        vm.etch(d, code);
        // sizeOf3 = 3
        (bool ok1, bytes memory r1) = d.call(abi.encodeWithSignature("sizeOf3()"));
        assertTrue(ok1);
        assertEq(abi.decode(r1, (uint256)), 3);
        // getElem = 20
        (bool ok2, bytes memory r2) = d.call(abi.encodeWithSignature("getElem()"));
        assertTrue(ok2);
        assertEq(abi.decode(r2, (uint256)), 20);
        // sumOf3 = 60
        (bool ok3, bytes memory r3) = d.call(abi.encodeWithSignature("sumOf3()"));
        assertTrue(ok3);
        assertEq(abi.decode(r3, (uint256)), 60);
    }
}
SOL

# --- Run tests ---
echo ""
echo "Running forge tests..."

if [[ "$#" -gt 0 ]]; then
  # Run specific test
  TEST_NAME="$1"
  cd "$FORGE_DIR" && forge test --match-test "$TEST_NAME" -vv 2>&1
else
  cd "$FORGE_DIR" && forge test -vv 2>&1
fi

RESULT=$?
if [[ $RESULT -eq 0 ]]; then
  echo ""
  echo "✅ All EVM contract tests passed."
else
  echo ""
  echo "❌ Some tests failed."
fi
exit $RESULT
