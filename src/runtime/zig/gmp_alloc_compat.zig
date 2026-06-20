// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! GMP default allocator shims.
//!
//! GMP's default allocator is just libc malloc/realloc/free with a wrapper.
//! These shims allow removing the GMP library dependency for allocator calls
//! while C++ mpz.cpp still uses the GMP mpz_* API.

const std = @import("std");

export fn __gmp_default_allocate(size: usize) callconv(.c) ?*anyopaque {
    return @ptrCast(std.c.malloc(size));
}

export fn __gmp_default_reallocate(ptr: ?*anyopaque, old_size: usize, new_size: usize) callconv(.c) ?*anyopaque {
    _ = old_size;
    return @ptrCast(std.c.realloc(@ptrCast(ptr), new_size));
}

export fn __gmp_default_free(ptr: ?*anyopaque, size: usize) callconv(.c) void {
    _ = size;
    if (ptr) |p| std.c.free(@ptrCast(p));
}