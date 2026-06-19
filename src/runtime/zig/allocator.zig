// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Pluggable allocator interface for the Lean Zig runtime.
//!
//! Provides a unified allocation path that works across environments:
//! - x86/macOS/Linux: wraps libc malloc/free or mimalloc (via lean_alloc_object)
//! - Solana SBF/eBPF: wraps a bump allocator or SBF-provided allocator
//!
//! All runtime modules that need heap allocation should use
//! `lean_alloc()` / `lean_free()` / `lean_realloc()` from this module
//! instead of `std.c.malloc` / `std.heap.c_allocator` directly.
//! This ensures a single allocation path that can be swapped per target.

const std = @import("std");
const runtime_options = @import("runtime_options");

const export_allocator_symbols = runtime_options.export_allocator_symbols;

// ── Allocator VTable ────────────────────────────────────────────────────────

/// Function pointer table for the active allocator backend.
pub const VTable = struct {
    alloc: *const fn (size: usize, alignment: usize) ?[*]u8,
    realloc: *const fn (ptr: [*]u8, old_size: usize, new_size: usize, alignment: usize) ?[*]u8,
    free: *const fn (ptr: [*]u8, size: usize, alignment: usize) void,
    owns: *const fn (ptr: [*]u8) bool,
};

/// The active allocator vtable. Set at runtime init by the platform backend.
/// Defaults to the C (libc) allocator.
pub var vtable: VTable = c_vtable;

// ── C (libc) backend ─────────────────────────────────────────────────────────
// Default for x86/macOS/Linux. Uses malloc/free/realloc from libc.

fn cAlloc(size: usize, alignment: usize) ?[*]u8 {
    _ = alignment;
    // For most cases alignment <= max_align_t and malloc suffices.
    // SBF bump allocator handles alignment natively.
    const ptr = std.c.malloc(size);
    return @ptrCast(ptr);
}

fn cRealloc(ptr: [*]u8, old_size: usize, new_size: usize, alignment: usize) ?[*]u8 {
    _ = old_size;
    _ = alignment;
    const new_ptr = std.c.realloc(ptr, new_size);
    return @ptrCast(new_ptr);
}

fn cFree(ptr: [*]u8, size: usize, alignment: usize) void {
    _ = size;
    _ = alignment;
    std.c.free(ptr);
}

fn cOwns(ptr: [*]u8) bool {
    _ = ptr;
    return true; // libc owns everything it allocates; we can't easily check
}

pub const c_vtable: VTable = .{
    .alloc = cAlloc,
    .realloc = cRealloc,
    .free = cFree,
    .owns = cOwns,
};

// ── Bump allocator backend (Solana SBF) ──────────────────────────────────────
// Simple bump allocator backed by a fixed buffer. No individual frees;
// only reset. Suitable for SBF programs where all allocations are freed
// at program exit.

var g_bump_buffer: []u8 = &.{};
var g_bump_end: usize = 0;

pub fn setBumpBuffer(buffer: []u8) void {
    g_bump_buffer = buffer;
    g_bump_end = @sizeOf(usize); // first usize bytes store end index
}

fn bumpAlloc(size: usize, alignment: usize) ?[*]u8 {
    if (g_bump_buffer.len == 0) return null;
    const ptr_align = if (alignment > 1) alignment else 1;
    const current_end = g_bump_end;
    const base = @intFromPtr(g_bump_buffer.ptr) + current_end;
    const aligned = std.mem.alignForward(usize, base, ptr_align);
    const adjust = aligned - base;
    const new_end = current_end + adjust + size;
    if (new_end > g_bump_buffer.len) return null;
    g_bump_end = new_end;
    return @ptrFromInt(aligned);
}

fn bumpRealloc(ptr: [*]u8, old_size: usize, new_size: usize, alignment: usize) ?[*]u8 {
    // Only realloc if it's the last allocation
    const last_end = @intFromPtr(ptr) + old_size;
    const buf_end = @intFromPtr(g_bump_buffer.ptr) + g_bump_end;
    if (last_end == buf_end) {
        if (new_size <= old_size) {
            g_bump_end -= old_size - new_size;
            return ptr;
        }
        const extra = new_size - old_size;
        if (g_bump_end + extra > g_bump_buffer.len) return null;
        g_bump_end += extra;
        return ptr;
    }
    // Not last: allocate new + copy
    const new_ptr = bumpAlloc(new_size, alignment) orelse return null;
    @memcpy(new_ptr[0..old_size], ptr[0..old_size]);
    return new_ptr;
}

fn bumpFree(ptr: [*]u8, size: usize, alignment: usize) void {
    _ = alignment;
    // Only reclaim if it's the last allocation
    const last_end = @intFromPtr(ptr) + size;
    const buf_end = @intFromPtr(g_bump_buffer.ptr) + g_bump_end;
    if (last_end == buf_end) {
        g_bump_end -= size;
    }
    // Otherwise: no-op (freed on reset)
}

fn bumpOwns(ptr: [*]u8) bool {
    const start = @intFromPtr(g_bump_buffer.ptr);
    const p = @intFromPtr(ptr);
    return p >= start and p < start + g_bump_buffer.len;
}

pub const bump_vtable: VTable = .{
    .alloc = bumpAlloc,
    .realloc = bumpRealloc,
    .free = bumpFree,
    .owns = bumpOwns,
};

pub fn bumpReset() void {
    g_bump_end = @sizeOf(usize);
}

// ── Public API ──────────────────────────────────────────────────────────────

/// Allocate `size` bytes with the active allocator.
pub fn leanAlloc(comptime T: type, count: usize) ?[*]T {
    const size = count * @sizeOf(T);
    const ptr = vtable.alloc(size, @alignOf(T)) orelse return null;
    return @ptrCast(@alignCast(ptr));
}

/// Allocate and return a slice.
pub fn leanAllocSlice(comptime T: type, count: usize) ?[]T {
    const ptr = leanAlloc(T, count) orelse return null;
    return ptr[0..count];
}

/// Free a previously allocated pointer.
pub fn leanFree(comptime T: type, ptr: [*]T, count: usize) void {
    vtable.free(@ptrCast(ptr), count * @sizeOf(T), @alignOf(T));
}

/// Free a slice.
pub fn leanFreeSlice(comptime T: type, slice: []T) void {
    leanFree(T, slice.ptr, slice.len);
}

/// Reallocate to a new size.
pub fn leanRealloc(comptime T: type, ptr: [*]T, old_count: usize, new_count: usize) ?[*]T {
    const new_ptr = vtable.realloc(
        @ptrCast(ptr),
        old_count * @sizeOf(T),
        new_count * @sizeOf(T),
        @alignOf(T),
    ) orelse return null;
    return @ptrCast(@alignCast(new_ptr));
}

// ── std.mem.Allocator interface adapter ──────────────────────────────────────
// Allows using the pluggable allocator with std library functions that
// expect a std.mem.Allocator (e.g., std.ArrayList, std.fmt, etc.)

pub const lean_allocator: std.mem.Allocator = .{
    .ptr = undefined,
    .vtable = &.{
        .alloc = adapterAlloc,
        .resize = adapterResize,
        .free = adapterFree,
        .remap = adapterRemap,
    },
};

fn adapterAlloc(_: *anyopaque, n: usize, alignment: std.mem.Alignment, _: usize) ?[*]u8 {
    return vtable.alloc(n, alignment.toByteUnits());
}

fn adapterResize(_: *anyopaque, buf: []u8, alignment: std.mem.Alignment, new_size: usize, _: usize) bool {
    // Try realloc in place
    const new_ptr = vtable.realloc(buf.ptr, buf.len, new_size, alignment.toByteUnits());
    if (new_ptr != null and new_ptr.? == buf.ptr) return true;
    return new_size <= buf.len;
}

fn adapterFree(_: *anyopaque, buf: []u8, alignment: std.mem.Alignment, _: usize) void {
    vtable.free(buf.ptr, buf.len, alignment.toByteUnits());
}

fn adapterRemap(_: *anyopaque, buf: []u8, alignment: std.mem.Alignment, new_len: usize, _: usize) ?[*]u8 {
    return vtable.realloc(buf.ptr, buf.len, new_len, alignment.toByteUnits());
}

// ── Initialization ──────────────────────────────────────────────────────────

/// Initialize the allocator for the current platform.
/// Call at runtime startup (before any allocation).
/// On x86: defaults to C allocator (no action needed).
/// On SBF: call setBumpBuffer() with the program's heap region.
pub fn initAllocator() void {
    // Default: C allocator is already set
    // For SBF: user should call setBumpBuffer() before initAllocator()
    if (g_bump_buffer.len > 0) {
        vtable = bump_vtable;
    }
}
