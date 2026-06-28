// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Minimal libc shim for wasm32-freestanding (NEAR).
//!
//! When the runtime is built without libc (link_libc=false on freestanding),
//! the Zig std library and runtime code that call libc functions need them
//! satisfied. This shim provides the handful of functions the runtime
//! transitively references — malloc/free (backed by the NEAR bump allocator),
//! exit/abort (trap the WASM), and a few others — without pulling in any WASI
//! imports. This keeps the produced WASM import-free except for NEAR `env`
//! syscalls.

const near_alloc = @import("allocator.zig");

// --- malloc / free / realloc (backed by the NEAR bump allocator) ----------

export fn malloc(size: usize) ?*anyopaque {
    return @ptrCast(near_alloc.bytesAligned(size, 8));
}

export fn calloc(nmemb: usize, size: usize) ?*anyopaque {
    const total = nmemb * size;
    const ptr = near_alloc.bytesAligned(total, 8);
    const bytes: [*]u8 = @ptrCast(ptr);
    @memset(bytes[0..total], 0);
    return @ptrCast(ptr);
}

export fn realloc(ptr: ?*anyopaque, size: usize) ?*anyopaque {
    // Bump allocator: allocate new, return it (old memory is not reclaimed).
    _ = ptr;
    return @ptrCast(near_alloc.bytesAligned(size, 8));
}

export fn free(ptr: ?*anyopaque) void {
    _ = ptr; // no-op for bump allocator
}

// --- errno ----------------------------------------------------------------

export var errno: c_int = 0;

// --- process control ------------------------------------------------------

export fn exit(code: c_int) noreturn {
    _ = code;
    while (true) {} // trap: freestanding has no exit
}

export fn _exit(code: c_int) noreturn {
    _ = code;
    while (true) {}
}

export fn abort() noreturn {
    while (true) {}
}

export fn getpid() c_int {
    return 1;
}

// --- string / memory (avoid bulk_memory) ----------------------------------

export fn getenv(name: [*:0]const u8) ?[*:0]u8 {
    _ = name;
    return null; // no environment on NEAR
}

export fn strerror(errnum: c_int) [*:0]const u8 {
    _ = errnum;
    return "unknown error";
}
