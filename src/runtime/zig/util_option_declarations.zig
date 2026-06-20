// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/option_declarations.cpp`.
//!
//! Option declaration registry helpers. The actual registry is implemented in
//! the Lean stdlib; this module provides the C-facing helpers and data-value
//! constructors.

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const string = @import("string.zig");
const Name = @import("util_name.zig").Name;
const KVMap = @import("util_kvmap.zig").KVMap;
const DataValue = @import("util_kvmap.zig").DataValue;
const DataValueKind = @import("util_kvmap.zig").DataValueKind;
const nat_constructors = @import("nat_constructors.zig");

extern fn lean_data_value_to_string(d: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_get_option_decls_array() callconv(.c) *anyopaque;
extern fn lean_register_option(name: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque;

pub const OptionDeclaration = struct {
    name: Name,
    decl_name: Name,
    kind: DataValueKind,
    default_value: []const u8,
    description: []const u8,
};

pub const OptionDeclarations = struct {
    map: std.StringHashMap(OptionDeclaration),

    pub fn init() OptionDeclarations {
        return .{ .map = std.StringHashMap(OptionDeclaration).init(std.heap.c_allocator) };
    }

    pub fn deinit(self: *OptionDeclarations) void {
        self.map.deinit();
    }

    pub fn insert(self: *OptionDeclarations, key: Name, decl: OptionDeclaration) void {
        const repr = key.toString(".") catch @panic("out of memory");
        defer std.heap.c_allocator.free(repr);
        self.map.put(repr, decl) catch @panic("out of memory");
    }
};

pub fn mkDataValue(kind: DataValueKind, val: []const u8) DataValue {
    switch (kind) {
        .string => {
            const s = string.lean_mk_string(@ptrCast(val.ptr));
            const dv = ctor.lean_alloc_ctor(@intFromEnum(DataValueKind.string), 1, 0);
            ctor.lean_ctor_set(dv, 0, s);
            return DataValue{ .obj = dv };
        },
        .bool => {
            return DataValue.fromBool(std.mem.eql(u8, val, "true"));
        },
        .nat => {
            const n = nat_constructors.lean_cstr_to_nat(@ptrCast(val.ptr)).?;
            const dv = ctor.lean_alloc_ctor(@intFromEnum(DataValueKind.nat), 1, 0);
            ctor.lean_ctor_set(dv, 0, n);
            return DataValue{ .obj = dv };
        },
        .name => {
            const n = Name.fromCStr(@ptrCast(val.ptr));
            const dv = ctor.lean_alloc_ctor(@intFromEnum(DataValueKind.name), 1, 0);
            ctor.lean_ctor_set(dv, 0, n.obj.?);
            return DataValue{ .obj = dv };
        },
    }
}

pub fn getOptionDeclarations() OptionDeclarations {
    const arr = lean_get_option_decls_array();
    _ = arr;
    return OptionDeclarations.init();
}

pub fn registerOption(n: Name, decl_name: Name, kind: DataValueKind, default_value: []const u8, description: []const u8) void {
    const dv = mkDataValue(kind, default_value);
    const desc = string.lean_mk_string(@ptrCast(description.ptr));
    const decl = ctor.lean_alloc_ctor(0, 5, 0);
    ctor.lean_ctor_set(decl, 0, n.obj.?);
    ctor.lean_ctor_set(decl, 1, decl_name.obj.?);
    ctor.lean_ctor_set(decl, 2, dv.obj);
    ctor.lean_ctor_set(decl, 3, desc);
    ctor.lean_ctor_set(decl, 4, object.lean_box(0).?);
    _ = lean_register_option(n.obj.?, decl);
}

test "option_declarations helpers compile" {
    _ = mkDataValue;
    _ = registerOption;
}
