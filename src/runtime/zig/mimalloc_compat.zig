// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Minimal mimalloc-compatible C ABI shims.
//!
//! Provides the 5 mimalloc symbols used by non-mimalloc code:
//!   mi_malloc, mi_free, mi_free_size, mi_malloc_small, mi_new_n
//!
//! Backed by libc malloc/free. Replaces the full mimalloc implementation
//! (323 symbols, ~100KB) with ~50 lines of Zig.

const std = @import("std");

// ── C ABI exports ───────────────────────────────────────────────────────────

/// mi_malloc — allocate `size` bytes, returns null on failure.
export fn mi_malloc(size: usize) callconv(.c) ?*anyopaque {
    const ptr = std.c.malloc(size);
    return @ptrCast(ptr);
}

/// mi_malloc_small — same as mi_malloc for small objects.
/// mimalloc has a fast-path for small allocations; libc malloc handles
/// this adequately via its own size-class bins.
export fn mi_malloc_small(size: usize) callconv(.c) ?*anyopaque {
    const ptr = std.c.malloc(size);
    return @ptrCast(ptr);
}

/// mi_free — free a previously allocated pointer.
export fn mi_free(ptr: ?*anyopaque) callconv(.c) void {
    if (ptr) |p| {
        std.c.free(@ptrCast(p));
    }
}

/// mi_free_size — free with known size. libc free ignores the size,
/// same as mimalloc's mi_free (which also ignores it in practice).
export fn mi_free_size(ptr: ?*anyopaque, size: usize) callconv(.c) void {
    _ = size;
    if (ptr) |p| {
        std.c.free(@ptrCast(p));
    }
}

/// mi_new_n — allocate `count * size` bytes (nmemb-style).
/// Used by mi_stl_allocator::allocate. Never returns null (aborts on OOM).
export fn mi_new_n(count: usize, size: usize) callconv(.c) ?*anyopaque {
    const total = count *% size;
    const ptr = std.c.malloc(total);
    if (ptr == null) {
        // mimalloc's mi_new_n calls the error handler on OOM;
        // we abort to match the "never returns null" contract.
        @panic("mi_new_n: out of memory");
    }
    return @ptrCast(ptr);
}