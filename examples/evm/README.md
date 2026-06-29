# Lean EVM examples

This directory is a self-contained example repository for writing EVM smart
contracts in Lean and compiling them through EmitYul.

It demonstrates the `Lean.Evm` SDK surface in `src/Lean/Evm.lean`:

- `Counter.lean` uses `Storage.load`/`store` for a simple counter with
  `get`/`set`/`increment`/`decrement` methods.
- `SimpleToken.lean` is an ERC-20-style token with owner access control,
  `Storage.mapLoad`/`mapStore` for balances, and conditional transfers.
- `ArrayExample.lean` demonstrates in-memory `Array Nat` literals, element
  access (`xs[i]!`), size queries, and arithmetic over array elements.

## Build all examples

From the repository root:

```bash
examples/evm/scripts/build.sh
```

This compiles each `.lean` contract to EVM bytecode via `tools/evmc`
(Lean → EmitYul → Yul → `solc --strict-assembly` → bytecode).

## Run the full test suite

```bash
tests/emitzig_evm/run_test.sh
```

This compiles all contracts, deploys the bytecode via Foundry's `vm.etch`,
and runs assertions against the deployed contracts using `forge test`.

## Current EVM support

The support is enough to write and deploy small Lean EVM contracts through
`lean -y` and `tools/evmc`:

- Contract methods: selector dispatch via 4-byte function selectors (`.evm-methods` files).
- Storage: `Storage.load`/`store` (sload/sstore), `Storage.mapLoad`/`mapStore` (mapping via keccak256).
- Environment: `Env.sender` (caller), `Env.value` (msg.value), `Env.blockNumber`, `Env.balance`.
- Arithmetic: Nat add/sub/mul/div/mod, comparisons, bitwise ops (all U256-capped).
- Control flow: if-then-else, match, Bool logic.
- Arrays: literal construction (`#[...]`), element access (`xs[i]!`), size.
- Externals: `call`, `staticcall`, `delegatecall`, `create`, `create2`, `selfdestruct`.
- Events: `log0`/`log1`/`log2`.
- Revert: bare `revert` and `revertWithReason` (Solidity `Error(string)` ABI).

There are still important limits:

- `Nat` is capped at U256 (reverts on overflow); there is no bignum/GMP on EVM.
- `String` literals are allocated but string manipulation APIs (concat, compare)
  are not fully implemented in the Yul runtime yet.
- The `lean -y` CLI option is wired into `Shell.lean` but requires a full
  bootstrap rebuild to appear in the `lean` binary; use the `runFrontend`-based
  `tools/evmc` harness for now.
