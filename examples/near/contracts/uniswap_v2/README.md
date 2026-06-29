# Uniswap V2 — Lean NEAR Implementation

A Lean implementation of Uniswap V2 Core for NEAR, with formal verification.

## Architecture

```
examples/near/contracts/uniswap_v2/
├── Math.lean              — sqrt (Babylonian method), min, max
├── UQ112x112.lean         — Q112.112 fixed-point arithmetic (price oracle)
├── FTInterface.lean       — NEAR FT standard cross-contract calls
├── UniswapV2ERC20.lean    — LP token (ERC-20 for liquidity tokens)
├── UniswapV2Pair.lean     — AMM core (mint/burn/swap + K invariant)
├── UniswapV2Factory.lean  — pair creation and registry
├── scripts/sandbox_test.sh — local sandbox test framework
└── README.md
```

## NEAR FT Integration

Unlike Solidity's synchronous `token.transfer()`, NEAR cross-contract calls
are asynchronous. The Pair contract uses NEAR's `ft_on_transfer` callback
pattern:

### addLiquidity flow

```
User → ft_transfer_call(token0, pair, amount0, "addLiquidity")
     → pair.ft_on_transfer(user, amount0, "addLiquidity")
User → ft_transfer_call(token1, pair, amount1, "addLiquidity")
     → pair.ft_on_transfer(user, amount1, "addLiquidity")
     → pair mints LP tokens to user
```

### swap flow

```
User → ft_transfer_call(tokenIn, pair, amountIn, "swap:<outIdx>:<amountOut>")
     → pair.ft_on_transfer(user, amountIn, "swap:...")
     → pair validates K invariant
     → pair sends tokenOut via Promise (ft_transfer)
```

### removeLiquidity flow

```
User → pair.burn(to)
     → pair burns LP tokens
     → pair sends token0 and token1 back via Promise
```

## Formal verification

### K invariant (swap safety)

The core AMM invariant: after a swap with 0.3% fee, the product of
adjusted balances must not decrease:

```
balance0Adjusted * balance1Adjusted >= reserve0 * reserve1 * 1000^2
```

where `balanceNAdjusted = balanceN * 1000 - amountNIn * 3`.

**Proven**: `k_non_decreasing` — if the adjusted K invariant holds, then
the unadjusted product `balance0 * balance1 >= reserve0 * reserve1`.

This is the single most important safety property of any AMM: it ensures
no trader can extract more value than they put in (after fees).

## Solidity → NEAR mapping

| Solidity concept | NEAR adaptation |
|---|---|
| `IERC20(token).transfer()` | `ft_transfer_call` → `ft_on_transfer` callback |
| `msg.sender` | `predecessor_account_id` |
| `block.timestamp` | NEAR block timestamp |
| `create2` for pair deployment | Subaccount creation (`factory.pair0`) |
| `uint112` overflow guard | Arbitrary precision `Nat` |
| Reentrancy guard (`unlocked`) | Storage-backed lock flag |
| Sync balance check | Internal balance tracking in storage |

## Sandbox testing

```bash
# Start local NEAR sandbox
examples/near/contracts/uniswap_v2/scripts/sandbox_test.sh
```

## Status

- **Complete**: AMM math (mint/burn/swap), K invariant, formal proofs,
  FT interface, Factory, ERC20 LP token, reentrancy guard
- **Next**: compile to WASM, full sandbox integration test, testnet deploy
