# EVM Codegen Design

## Overview

This document describes the design for compiling Lean smart contracts to EVM
bytecode via a new `EmitYul` backend: `Lean → LCNF → Yul → solc → EVM bytecode`.

EVM differs fundamentally from the existing WASM targets (NEAR, Solana): it is
not a WASM target, so the existing `EmitZig` backend cannot be reused. EVM is a
256-bit stack machine whose only native word size is 256 bits, with byte-addressed
volatile memory and a separate persistent key/value storage. Yul — the IR shared
by Solidity and Vyper — is the natural compilation target because `solc` already
optimizes it into gas-efficient EVM bytecode.

The architecture mirrors `EmitZig`:

```
Lean contract (.lean)         ← User writes this
    │  Compiler.LCNF.EmitYul (in-process)
    ▼
Yul source (.yul)             ← Compiler-generated
    │  solc --strict-assembly --bin
    ▼
EVM bytecode (deployed)
```

## Current status

**Complete and verified end-to-end.** All phases implemented:

- **Phase 0** — feasibility spike. ✅
- **Phase 1** — `EmitYul` codegen covering full LCNF. ✅
- **Phase 2** — Lean object runtime in Yul (Nat arithmetic, Array, String). ✅
- **Phase 3** — `Lean.Evm` SDK (Storage, Env, externs). ✅
- **Phase 4** — `tools/evmc` toolchain + selector dispatch. ✅
- **Phase 5** — forge test suite (`tests/emitzig_evm/`). ✅
- **Phase 6** — example contracts (`examples/evm/contracts/`). ✅

Verified contracts (forge tests, all pass):
- Counter: get/set/increment/decrement (gas ~33k)
- SimpleToken: init/owner/supply/balanceOf/transfer/revert (gas ~117k)
- ArrayExample: array size/index/sum (gas ~10k)

- **Scalar box/unbox**: `lean_box(n) = (n << 1) | 1`, `lean_unbox(o) = o >> 1`.
  Verified `5 + 7 = 12` through a full box → add → unbox round-trip.
- **Constructor object model**: header word (tag/size/rc packed) + N × 32-byte
  fields, allocated via the Solidity free-memory-pointer convention (`mload(0x40)`).
  Verified a 2-field ctor alloc, set, get cycle returns the correct field sum.
- **Selector dispatch**: `shr(224, calldataload(0))` + `switch` over 4-byte
  function selectors. Verified a `set(uint256)`/`get()` pair dispatches correctly.
- **Persistent storage**: `sload`/`sstore` round-trip. Verified `set(42)` then
  `get()` returns `42` across two separate calls.
- **Toolchain**: `solc 0.8.34`, Foundry `forge`/`cast`/`anvil 0.3.0`, Zig `0.16.0`
  all installed and working on this machine.

Spike artifacts live in `/tmp/yul-spike/` (not committed). The hand-written Yul
files there are the reference for Phase 1's codegen output.

## Key EVM constraints (vs. WASM)

| | NEAR (WASM) | EVM |
|---|---|---|
| Memory model | Linear memory, cross-call via host storage | Per-call scratch memory (cleared each call); grows, charged per byte |
| Allocation | Bump allocator (`host/near/allocator.zig`) | Bump allocator on EVM memory via `0x40` free-memory-pointer |
| Lean objects (RC ctor) | Direct reuse of C layout | Must be laid out in EVM memory (see Object Model) |
| `Nat` (arbitrary precision) | mpz / zig-bigint | U256 native; `> 2^256` reverts (matches VerifiedVault's bounded-amount philosophy) |
| Word size | 32/64-bit | 256-bit only |

## Object Model on EVM Memory

The full design is captured in the Phase 0 architect artifact and validated by
the spike. Summary:

- **Layout**: each LeanObj is 32-byte aligned. Header word at offset 0 packs
  `tag` (bits 0..7), `m_other`/field count (bits 8..15), `cs_sz` (bits 16..31),
  `rc` (bits 32..255). Fields follow as consecutive 32-byte words starting at
  offset 32.
- **Tagged scalars**: the low bit distinguishes immediates (`1`) from heap
  pointers (`0`, since pointers are 32-byte aligned). `lean_box(n)` encodes
  any `n < 2^255` without allocation.
- **Reference counting is elided**: EVM memory is reclaimed per-call, so RC
  inc/dec are no-ops and `lean_is_exclusive` always returns false. The codegen
  must always copy-on-write for `.reuse` (never mutate in place). This trades
  extra allocations for correctness and avoids recursive `dec` traversal.
- **Closures**: represented as a heap object with a small integer `fn_id`
  replacing the C function pointer. `lean_apply_1` dispatches through a
  generated `switch` on `fn_id`. Cost is `O(F)` per apply for `F` compiled
  functions; acceptable for small contracts, may need jump-table optimization
  later.
- **`Nat`**: U256 only, revert on overflow. `lean_nat_add` checks `sum < a`
  for unsigned overflow before re-boxing.

### Yul bitop syntax note

Yul's `shl`/`shr` take `(shift_bits, value)`, i.e. `shl(1, n)` not `shl(n, 1)`.
This is the opposite of the C convention and a common source of bugs; the
codegen must emit `shl(1, n)`.

## Toolchain

- **`solc`**: invoked as `solc --strict-assembly <file.yul> --bin` to emit EVM
  bytecode from pure Yul (no Solidity source needed). `--evm-version cancun`
  selects the target hard fork.
- **`forge`/`anvil`**: Foundry is the test stack. `anvil` provides a local EVM
  node; `forge test` runs unit tests that `vm.etch` raw Yul bytecode at an
  address and call it — the EVM analog of `near_mock_vm.js`.
- **`cast`**: CLI for ad-hoc calls against `anvil`; used by deploy scripts.
- **`revm` (Rust)**: optional local harness for codegen unit tests not needing
  a full node; deferred until Phase 5 if `forge test` proves insufficient.

## Phased plan

- **Phase 0** — feasibility spike. ✅ Done.
- **Phase 1** — `src/Lean/Compiler/LCNF/EmitYul.lean` + `EmitYul/` subdir.
  LCNF → Yul: function/let/ctor/apply·pap/if·match·jp control flow. Mirrors
  `EmitZig.lean`.
- **Phase 2** — Lean object runtime in Yul (allocator, ctor/box/unbox, minimal
  mpz, closure dispatch). Mirrors `src/runtime/zig/host/near/`.
- **Phase 3** — `src/Lean/Evm.lean` SDK: selector-dispatched contract entry,
  `Storage` (sload/sstore + typed slots), `Env` (caller/msg.value/block.*),
  `Amount` (U256 wei). Mirrors `src/Lean/Near.lean`.
- **Phase 4** — `tools/evmc`: `lean --yul` → Yul → `solc` → bytecode. Add
  `--profile=evm` to `tools/zigc`. Wire into CMake. Mirrors `tools/zigc-near`.
- **Phase 5** — test stack: `tests/emitzig_evm/` + `forge test` harness
  (local), plus a Hardhat/Foundry integration config.
- **Phase 6** — `examples/evm/contracts/`: Counter, ERC20-style Token,
  VerifiedVault (port the formal-verification DeFi pattern to EVM).

## Open questions / risks

1. **Closure dispatch scaling** — the linear `switch` over `fn_id` may need a
   jump-table or binary-search lowering for large programs.
2. **Allocation amplification** — eliding RC disables in-place reuse; Lean's
   functional style is allocation-heavy. Phase 2 must benchmark realistic LCNF
   output against the 30M-gas block limit.
3. **`Nat > 2^256`** — reverts by design. Any Lean library depending on larger
   naturals is incompatible with the EVM target.
4. **String/ByteArray serialization** — variable-length byte payloads in storage
   need length-prefixing and careful padding.
5. **Deep storage traversal** — recursive get/set could hit the EVM call stack
   limit; iterative traversal is required for production.
