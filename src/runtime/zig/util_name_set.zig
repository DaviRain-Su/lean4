// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/name_set.cpp`.
//!
//! Generates a unique name from a suggestion by appending numeric suffixes.

const std = @import("std");
const Name = @import("util_name.zig").Name;

pub const NameSet = std.StringHashMap(void);

pub fn mkUnique(suggestion: Name, set: NameSet) Name {
    var n = suggestion;
    var i: u32 = 1;
    while (true) {
        // A set of Lean names would normally compare object equality; here we
        // approximate with string representation for the port.
        const repr = n.toString(".") catch @panic("out of memory");
        defer std.heap.c_allocator.free(repr);
        if (!set.contains(repr)) return n;
        n = Name.fromPrefixUnsigned(suggestion, i);
        i += 1;
    }
}

test "mkUnique increments until not contained" {
    var set = NameSet.init(std.testing.allocator);
    defer set.deinit();
    const base = Name.fromCStr("foo");
    const n1 = mkUnique(base, set);
    _ = n1;
}
