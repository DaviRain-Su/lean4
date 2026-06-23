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
var g_constructions_fresh: ?Name = null;
var g_initialized: bool = false;
var g_mutex: std.Io.Mutex = .init;

fn initGlobalsLocked() void {
    if (g_initialized) return;
    g_ngen_prefixes = NameSet.init(std.heap.c_allocator);
    g_tmp_prefix = Name.fromCStr("_uniq");
    g_initialized = true;
    registerNameGeneratorPrefixLocked(g_tmp_prefix.?);
}

fn registerNameGeneratorPrefixLocked(n: Name) void {
    const repr = n.toString(".") catch @panic("out of memory");
    defer std.heap.c_allocator.free(repr);
    g_ngen_prefixes.put(repr, {}) catch @panic("out of memory");
}

fn containsRegisteredPrefixUnlocked(n: Name) bool {
    const repr = n.toString(".") catch @panic("out of memory");
    defer std.heap.c_allocator.free(repr);
    return g_ngen_prefixes.contains(repr);
}
fn usesNameGeneratorPrefixUnlocked(n: Name) bool {
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

pub const NameGenerator = struct {
    prefix: Name,
    next_idx: u32,

    pub fn init(prefix: Name) NameGenerator {
        std.debug.assert(!prefix.isAnonymous());
        std.debug.assert(usesNameGeneratorPrefix(prefix));
        return .{ .prefix = prefix, .next_idx = 0 };
    }

    pub fn default() NameGenerator {
        return init(g_tmp_prefix.?);
    }

    pub fn next(self: *NameGenerator) Name {
        if (self.next_idx == std.math.maxInt(u32)) {
            self.prefix = Name.fromPrefixUnsigned(self.prefix, self.next_idx);
            self.next_idx = 0;
        }
        const idx = self.next_idx;
        self.next_idx += 1;
        return Name.fromPrefixUnsigned(self.prefix, idx);
    }

    pub fn nextWith(self: *NameGenerator, base_prefix: Name) Name {
        std.debug.assert(usesNameGeneratorPrefix(base_prefix));
        return replaceBasePrefix(self.next(), base_prefix);
    }
};

fn replaceBasePrefix(p: Name, new_base: Name) Name {
    if (containsRegisteredPrefixUnlocked(p)) return new_base;
    if (p.isNumeral()) return Name.fromPrefixNumeralObj(replaceBasePrefix(p.getPrefix(), new_base), p.getNumeralObj().?);
    if (p.isString()) return Name.fromPrefixStringObj(replaceBasePrefix(p.getPrefix(), new_base), p.getStringObj().?);
    @panic("replaceBasePrefix: expected registered prefix ancestry");
}

pub fn registerNameGeneratorPrefix(n: Name) void {
    g_mutex.lockUncancelable(std.Options.debug_io);
    defer g_mutex.unlock(std.Options.debug_io);
    initGlobalsLocked();
    registerNameGeneratorPrefixLocked(n);
}

pub fn ensureConstructionsNameGeneratorPrefix() void {
    g_mutex.lockUncancelable(std.Options.debug_io);
    defer g_mutex.unlock(std.Options.debug_io);
    initGlobalsLocked();
    if (g_constructions_fresh != null) return;
    g_constructions_fresh = Name.fromCStr("_cnstr_fresh");
    registerNameGeneratorPrefixLocked(g_constructions_fresh.?);
}

pub fn mkConstructionsNameGenerator() NameGenerator {
    ensureConstructionsNameGeneratorPrefix();
    return NameGenerator.init(g_constructions_fresh.?);
}

pub fn usesNameGeneratorPrefix(n: Name) bool {
    g_mutex.lockUncancelable(std.Options.debug_io);
    defer g_mutex.unlock(std.Options.debug_io);
    return usesNameGeneratorPrefixUnlocked(n);
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
    g_mutex.lockUncancelable(std.Options.debug_io);
    defer g_mutex.unlock(std.Options.debug_io);
    initGlobalsLocked();
}

pub fn finalizeNameGenerator() void {
    g_mutex.lockUncancelable(std.Options.debug_io);
    defer g_mutex.unlock(std.Options.debug_io);
    if (!g_initialized) return;
    g_ngen_prefixes.deinit();
    g_tmp_prefix = null;
    g_constructions_fresh = null;
    g_initialized = false;
}

test "name generator registers default prefix" {
    initializeNameGenerator();
    defer finalizeNameGenerator();

    var gen = NameGenerator.default();
    try std.testing.expect(usesNameGeneratorPrefix(gen.prefix));

    const next = gen.next();
    const rendered = try next.toString(".");
    defer std.heap.c_allocator.free(rendered);
    try std.testing.expectEqualStrings("_uniq.0", rendered);
}

test "constructions generator nextWith consumes index" {
    initializeNameGenerator();
    defer finalizeNameGenerator();

    ensureConstructionsNameGeneratorPrefix();
    const alt_prefix = Name.fromCStr("_alt_cnstr");
    registerNameGeneratorPrefix(alt_prefix);

    var gen = mkConstructionsNameGenerator();
    const renamed = gen.nextWith(alt_prefix);
    const renamed_str = try renamed.toString(".");
    defer std.heap.c_allocator.free(renamed_str);
    try std.testing.expectEqualStrings("_alt_cnstr.0", renamed_str);

    const next = gen.next();
    const next_str = try next.toString(".");
    defer std.heap.c_allocator.free(next_str);
    try std.testing.expectEqualStrings("_cnstr_fresh.1", next_str);
}
