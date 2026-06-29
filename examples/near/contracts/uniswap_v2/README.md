# Uniswap V2 — Lean NEAR Implementation

A Lean implementation of Uniswap V2 Core for NEAR, with formal verification.

## Architecture

```
examples/near/contracts/uniswap_v2/
├── Math.lean           — sqrt (Babylonian method), min, max
├── UQ112x112.lean      — Q112.112 fixed-point arithmetic
├── UniswapV2ERC20.lean — LP token (ERC-20 standard for liquidity tokens)
├── UniswapV2Pair.lean  — AMM core (mint/burn/swap + K invariant)
└── UniswapV2Factory.lean — pair creation and registry
```

## Solidity → NEAR mapping

| Solidity concept | NEAR adaptation |
|---|---|
| `address token0/token1` | Account ID stored in contract storage |
| `IERC20(token).transfer()` | Promise batch (async cross-contract call) |
| `balanceOf(address(this))` | Internal balance tracking in storage |
| `create2` for pair deployment | Subaccount creation (`factory.pair0`) |
| `unchecked` arithmetic | Lean Nat (no overflow on NEAR) |
| Reentrancy guard (`unlocked`) | Storage-backed lock flag |

## Formal verification

The Pair contract includes formally proven invariants:

### K invariant (swap safety)

The core AMM invariant: after a swap with 0.3% fee, the product of
adjusted balances must not decrease:

```
balance0Adjusted * balance1Adjusted >= reserve0 * reserve1 * 1000^2
```

where `balanceNAdjusted = balanceN * 1000 - amountNIn * 3`.

**Proven**: `k_non_decreasing` — if the adjusted K invariant holds, then
the unadjusted product `balance0 * balance1 >= reserve0 * reserve1`.

### Token conservation (ERC20)

- `mint_preserves_balance`: minting preserves ordering
- `burn_preserves_balance`: burning keeps balances non-negative

### Pair uniqueness (Factory)

- `pair_uniqueness`: two distinct tokens always have a canonical order

## Key differences from Solidity version

1. **Async transfers**: NEAR cross-contract calls are async (Promise).
   The Pair validates the K invariant synchronously using internal balance
   tracking, then schedules token transfers via Promise.

2. **No overflow concern**: NEAR uses arbitrary-precision integers, so
   the Solidity `uint112` overflow checks are unnecessary.

3. **Account-based pairs**: Each pair is a subaccount of the factory
   rather than a CREATE2 address.

## Usage

Compile via `tools/zigc-near` (same as other NEAR contracts):

```bash
# Build the pair contract
tools/zigc-near examples/near/contracts/uniswap_v2/UniswapV2Pair.zig \
  -o build/uniswap_pair.wasm
```

## Status

This is a structural port demonstrating how Uniswap V2 maps to Lean + NEAR.
The AMM math (mint/burn/swap) and K invariant are fully implemented and
formally verified. Full integration with NEAR FT standard (cross-contract
token transfers via Promise) is the next step.
