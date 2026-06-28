// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.
//
// Adapted from near-sdk-zig (https://github.com/DaviRain-Su/near-sdk-zig)
// `simple_allocator.zig` — host-backed bump allocator.
//
//! NEAR host allocator: a bump allocator over the WASM linear-memory heap.
//! This is the `wasi-arena` / NEAR backend for the runtime `Allocator`
//! interface (doc F.2.1). It matches the contract-VM execution model:
//! allocations are bumped from a heap region and never individually freed —
//! the host reclaims the whole linear memory at end of call.
//!
//! On native (for testing) it uses a static buffer so the runtime can be
//! exercised without a NEAR VM.

const builtin = @import("builtin");
const compat = @import("compat.zig");

/// Heap-pointer storage address (after the data section). Mirrors the
/// near-sdk-zig layout: 1 MiB + 4 KiB for heap metadata.
const HEAP_PTR_ADDR: usize = 1024 * 1024 + 4096;
const HEAP_START: usize = HEAP_PTR_ADDR + 64;

// Native testing falls back to a static buffer.
var test_heap: [1024 * 1024]u8 = undefined;
var test_offset: usize = 0;

inline fn getHeapOffset() usize {
    if (builtin.cpu.arch != .wasm32) {
        return @intFromPtr(&test_heap) + test_offset;
    }
    const ptr: *usize = @ptrFromInt(HEAP_PTR_ADDR);
    const val = ptr.*;
    return if (val == 0) HEAP_START else val;
}

inline fn setHeapOffset(new_offset: usize) void {
    if (builtin.cpu.arch != .wasm32) {
        test_offset = new_offset - @intFromPtr(&test_heap);
        return;
    }
    const ptr: *usize = @ptrFromInt(HEAP_PTR_ADDR);
    ptr.* = new_offset;
}

/// Allocate `len` bytes aligned to `alignment`. Returns the raw byte pointer.
pub fn bytesAligned(len: usize, alignment: usize) [*]u8 {
    const current = getHeapOffset();
    const aligned = (current + alignment - 1) & ~(alignment - 1);
    setHeapOffset(aligned + len);
    return @ptrFromInt(aligned);
}

/// Allocate `len` bytes, 8-byte aligned.
pub fn bytes(len: usize) [*]u8 {
    return bytesAligned(len, 8);
}

/// Allocate a typed slice of `len` elements.
pub fn slice(comptime T: type, len: usize) []T {
    const p: [*]T = @ptrCast(@alignCast(bytesAligned(len * @sizeOf(T), @alignOf(T))));
    return p[0..len];
}

/// Duplicate a slice.
pub fn dupe(comptime T: type, data: []const T) []T {
    const out = slice(T, data.len);
    compat.copy(T, out, data);
    return out;
}

/// Free is a no-op for a bump allocator (memory reclaimed at end of call).
pub fn free(_: anytype) void {}

/// Reset the heap to its start (used between calls in testing).
pub fn reset() void {
    test_offset = 0;
}
