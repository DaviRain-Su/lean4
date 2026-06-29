# EmitYul EVM tests

End-to-end tests for the EmitYul backend (Lean → LCNF → Yul → EVM bytecode).

## Running

```bash
# From the repository root
tests/emitzig_evm/run_test.sh           # run all tests
tests/emitzig_evm/run_test.sh counter   # run a specific test by name
```

Requires: `lean` (stage1 build), `solc`, and Foundry (`forge`/`cast`/`anvil`).

## What it tests

The test runner:

1. Compiles each `examples/evm/contracts/*.lean` to EVM bytecode via `tools/evmc`.
2. Generates Solidity test files that deploy the bytecode via `vm.etch`.
3. Runs `forge test` with assertions on contract behavior.

The tests verify that Lean contracts compiled through EmitYul produce correct
EVM bytecode that behaves identically to Solidity contracts when called via
standard ABI encoding.
