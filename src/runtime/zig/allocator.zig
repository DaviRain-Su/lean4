// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Backend allocator interface for the Lean Zig runtime.
//!
//! This is the seam at which raw memory is obtained. The ObjectAdapter in
//! `alloc.zig` (small-object pool, AllocationMeta tracking, large-object
//! fallback) sits on top of one `Allocator` value and is identical across all
//! backends — only the raw alloc/free call at the bottom differs.
//!
//! A backend is selected at `comptime` via `runtime_options.allocator_backend`,
//! so each build compiles exactly one backend with zero runtime dispatch
//! overhead and no dead branches for unselected backends.

const std = @import("std");
const runtime_options_src = @import("runtime_options.zig");
const runtime_options = @import("runtime_options");

/// Raw-memory backend: "where does memory come from?".
/// One resolved value per build; the ObjectAdapter holds a single global.
pub const Allocator = struct {
    ctx: *anyopaque,
    alloc: *const fn (ctx: *anyopaque, size: usize, alignment: Alignment) ?[*]u8,
    free: *const fn (ctx: *anyopaque, ptr: [*]u8, size: usize, alignment: Alignment) void,

    pub const Alignment = std.mem.Alignment;

    /// Allocate `size` bytes with `alignment`, returning the byte slice.
    /// Panics on out-of-memory to match the existing runtime contract.
    pub fn allocBytes(_: Allocator, size: usize, alignment: Alignment) [*]u8 {
        ensureResolved();
        return allocator.alloc(allocator.ctx, size, alignment) orelse @panic("out of memory");
    }
};

// ---------------------------------------------------------------------------
// Backends
// ---------------------------------------------------------------------------

/// `libc` backend: wraps `std.c.malloc` / `std.c.free`.
/// Valid wherever libc is linked (native, wasm32-wasi).
const LibcBackend = struct {
    var instance: Allocator = .{
        .ctx = undefined,
        .alloc = &libcAlloc,
        .free = &libcFree,
    };

    fn libcAlloc(_: *anyopaque, size: usize, _: Allocator.Alignment) ?[*]u8 {
        const p = std.c.malloc(size) orelse return null;
        return @ptrCast(p);
    }

    fn libcFree(_: *anyopaque, ptr: [*]u8, _: usize, _: Allocator.Alignment) void {
        std.c.free(@ptrCast(ptr));
    }
};

/// `page` backend: wraps `std.heap.page_allocator`.
/// Used for the small-object fresh-page path; returns page-aligned memory.
const PageBackend = struct {
    var instance: Allocator = .{
        .ctx = undefined,
        .alloc = &pageAlloc,
        .free = &pageFree,
    };

    fn pageAlloc(_: *anyopaque, size: usize, _: Allocator.Alignment) ?[*]u8 {
        // The existing small-object path allocates in usize words.
        const word_count = (size + @sizeOf(usize) - 1) / @sizeOf(usize);
        const words = std.heap.page_allocator.alloc(usize, word_count) catch return null;
        return @ptrCast(words.ptr);
    }

    fn pageFree(_: *anyopaque, ptr: [*]u8, size: usize, _: Allocator.Alignment) void {
        const word_count = (size + @sizeOf(usize) - 1) / @sizeOf(usize);
        const words: []usize = @as([*]usize, @ptrCast(@alignCast(ptr)))[0..word_count];
        std.heap.page_allocator.free(words);
    }
};

/// `external_cpp` backend: delegates to the C++ runtime's `lean_alloc_object`
/// / `lean_free_object`. Used during incremental migration when the Zig
/// runtime coexists with the C++ allocator (export_allocator_symbols=false).
const ExternalCppBackend = struct {
    const cpp = struct {
        extern fn lean_alloc_object(sz: usize) callconv(.c) *anyopaque;
        extern fn lean_free_object(o: *anyopaque) callconv(.c) void;
    };

    var instance: Allocator = .{
        .ctx = undefined,
        .alloc = &cppAlloc,
        .free = &cppFree,
    };

    fn cppAlloc(_: *anyopaque, size: usize, _: Allocator.Alignment) ?[*]u8 {
        return @ptrCast(cpp.lean_alloc_object(size));
    }

    fn cppFree(_: *anyopaque, ptr: [*]u8, _: usize, _: Allocator.Alignment) void {
        cpp.lean_free_object(@ptrCast(ptr));
    }
};

/// `near` backend: NEAR host bump allocator over the WASM linear-memory heap.
/// Allocations are bumped and never individually freed (the host reclaims the
/// whole memory at end of call). This is the `wasi-arena` backend (doc F.2.1).
const NearBackend = struct {
    const near_alloc = @import("host/near/mod.zig").allocator;

    var instance: Allocator = .{
        .ctx = undefined,
        .alloc = &nearAlloc,
        .free = &nearFree,
    };

    fn nearAlloc(_: *anyopaque, size: usize, alignment: Allocator.Alignment) ?[*]u8 {
        return near_alloc.bytesAligned(size, alignment.toByteUnits());
    }

    fn nearFree(_: *anyopaque, _: [*]u8, _: usize, _: Allocator.Alignment) void {
        // Bump allocator: free is a no-op.
    }
};

/// The process-global allocator, unresolved until first use (lazy resolve)
/// or `resolveBackend()` runs. Lazy init lets any test file trigger allocation
/// without each one needing a `test {}` setup block.
pub var allocator: Allocator = .{
    .ctx = undefined,
    .alloc = &noopAlloc,
    .free = &noopFree,
};

var resolved: bool = false;

fn ensureResolved() void {
    if (!resolved) resolveBackend();
}

fn noopAlloc(_: *anyopaque, _: usize, _: Allocator.Alignment) ?[*]u8 {
    @panic("runtime allocator used before initializeRuntimeAllocator");
}
fn noopFree(_: *anyopaque, _: [*]u8, _: usize, _: Allocator.Alignment) void {
    @panic("runtime allocator used before initializeRuntimeAllocator");
}

/// Resolve `allocator` from the build-time backend selector. Called once at
/// runtime startup, or lazily on first allocation. Reads the comptime
/// source-file constant (not the addOptions-injected module, which Zig 0.16
/// cannot resolve at comptime).
pub fn resolveBackend() void {
    allocator = switch (runtime_options_src.allocator_backend) {
        0 => LibcBackend.instance,
        1 => PageBackend.instance,
        2 => ExternalCppBackend.instance,
        3 => NearBackend.instance,
        else => LibcBackend.instance,
    };
    resolved = true;
}
