// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/name_generator.cpp`.
//!
//! Generates unique names with a prefix and a monotonic numeric index.

const std = @import("std");
const Name = @import("util_name.zig").Name;
const NameSet = @import("util_name_set.zig").NameSet;

var g_ngen_prefixes: NameSet = undefined;
var g_tmp_prefix: ?Name = null;
var g_initialized: bool = false;
var g_mutex: std.Io.Mutex = .init;

pub const NameGenerator = struct {
    prefix: Name,
    next_idx: u32,

    pub fn init(prefix: Name) NameGenerator {
        return .{ .prefix = prefix, .next_idx = 0 };
    }

    pub fn default() NameGenerator {
        return init(g_tmp_prefix.?);
    }

    pub fn next(self: *NameGenerator) Name {
        const idx = self.next_idx;
        self.next_idx += 1;
        return Name.fromPrefixUnsigned(self.prefix, idx);
    }

    pub fn nextWith(self: *NameGenerator, base_prefix: Name) Name {
        const base = replaceBasePrefix(self.prefix, base_prefix);
        return Name.fromPrefixUnsigned(base, self.next_idx);
    }
};

fn replaceBasePrefix(p: Name, new_base: Name) Name {
    if (p.isAtomic()) return new_base;
    return Name.fromPrefixStr(replaceBasePrefix(p.getPrefix(), new_base), "");
}

pub fn registerNameGeneratorPrefix(n: Name) void {
    g_mutex.lock();
    defer g_mutex.unlock();
    if (!g_initialized) {
        g_ngen_prefixes = NameSet.init(std.heap.c_allocator);
        g_tmp_prefix = Name.fromCStr("_tmp");
        g_initialized = true;
    }
    const repr = n.toString(".") catch @panic("out of memory");
    defer std.heap.c_allocator.free(repr);
    g_ngen_prefixes.put(repr, {}) catch @panic("out of memory");
}

pub fn usesNameGeneratorPrefix(n: Name) bool {
    g_mutex.lock();
    defer g_mutex.unlock();
    if (!g_initialized) return false;
    var it = n;
    while (!it.isAnonymous()) {
        const repr = it.toString(".") catch @panic("out of memory");
        defer std.heap.c_allocator.free(repr);
        if (g_ngen_prefixes.contains(repr)) return true;
        it = it.getPrefix();
    }
    return false;
}

pub fn sanitizeNameGeneratorName(n: Name) Name {
    if (!usesNameGeneratorPrefix(n)) return n;
    // Remove the prefix and any trailing index from generated names.
    if (n.isNumeral()) return sanitizeNameGeneratorName(n.getPrefix());
    if (n.isString()) {
        const s = n.getStringObj().?;
        const bytes = @import("util_name.zig").stringBytes(s);
        const idx = std.mem.lastIndexOfScalar(u8, bytes, '_');
        if (idx) |i| {
            const prefix = n.getPrefix();
            const base = @import("util_name.zig").string.lean_mk_string(@ptrCast(bytes[0..i].ptr));
            return Name.fromObj(@import("util_name.zig").lean_name_mk_string(prefix.obj.?, base));
        }
    }
    return n;
}

pub fn initializeNameGenerator() void {
    g_mutex.lock();
    defer g_mutex.unlock();
    if (g_initialized) return;
    g_ngen_prefixes = NameSet.init(std.heap.c_allocator);
    g_tmp_prefix = Name.fromCStr("_tmp");
    g_initialized = true;
}

pub fn finalizeNameGenerator() void {
    g_mutex.lock();
    defer g_mutex.unlock();
    if (!g_initialized) return;
    g_ngen_prefixes.deinit();
    g_tmp_prefix = null;
    g_initialized = false;
}

test "name_generator compiles" {
    initializeNameGenerator();
    defer finalizeNameGenerator();
    var gen = NameGenerator.default();
    _ = gen.next();
}
