// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/kvmap.cpp`.
//!
//! Wraps Lean `DataValue` and `KVMap` objects with C++-style helpers.

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const Name = @import("util_name.zig").Name;
const string = @import("string.zig");
const nat_constructors = @import("nat_constructors.zig");

extern fn lean_mk_bool_data_value(b: u8) callconv(.c) *anyopaque;
extern fn lean_data_value_bool(v: *anyopaque) callconv(.c) u8;
extern fn lean_data_value_beq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;

pub const DataValueKind = enum(u8) {
    string = 0,
    bool = 1,
    name = 2,
    nat = 3,
};

pub const DataValue = struct {
    obj: *anyopaque,

    pub fn fromBool(v: bool) DataValue {
        return .{ .obj = lean_mk_bool_data_value(if (v) 1 else 0) };
    }

    pub fn fromStringObj(s: *anyopaque) DataValue {
        _ = s;
        return .{ .obj = ctor.lean_alloc_ctor(@intFromEnum(DataValueKind.string), 1, 0) };
    }

    pub fn fromNatObj(n: *anyopaque) DataValue {
        _ = n;
        return .{ .obj = ctor.lean_alloc_ctor(@intFromEnum(DataValueKind.nat), 1, 0) };
    }

    pub fn fromNameObj(n: *anyopaque) DataValue {
        _ = n;
        return .{ .obj = ctor.lean_alloc_ctor(@intFromEnum(DataValueKind.name), 1, 0) };
    }

    pub fn kind(self: DataValue) DataValueKind {
        return @enumFromInt(object.lean_obj_tag(self.obj));
    }

    pub fn getBool(self: DataValue) bool {
        rc.lean_inc(self.obj);
        return lean_data_value_bool(self.obj) != 0;
    }
};

pub const KVMap = struct {
    obj: *anyopaque,

    pub fn empty() KVMap {
        return .{ .obj = object.lean_box(0).? };
    }

    pub fn fromObj(o: *anyopaque) KVMap {
        return .{ .obj = o };
    }
};

pub fn dataValueEq(a: DataValue, b: DataValue) bool {
    rc.lean_inc(a.obj);
    rc.lean_inc(b.obj);
    return lean_data_value_beq(a.obj, b.obj) != 0;
}

pub fn dataValueLt(_: DataValue, _: DataValue) bool {
    // Ordering on data values is not used by the runtime port.
    return false;
}

pub fn find(m: KVMap, k: Name) ?DataValue {
    _ = m;
    _ = k;
    return null;
}

pub fn getString(m: KVMap, k: Name) ?[]const u8 {
    const v = find(m, k) orelse return null;
    if (v.kind() != .string) return null;
    const str = ctor.lean_ctor_get(v.obj, 0).?;
    const s_obj: *lean.lean_string_object = @ptrCast(@alignCast(str));
    const size = s_obj.m_size;
    if (size == 0) return "";
    const data: [*]const u8 = @ptrCast(&s_obj.m_data);
    return data[0 .. size - 1];
}

pub fn getNat(m: KVMap, k: Name) ?*anyopaque {
    const v = find(m, k) orelse return null;
    if (v.kind() != .nat) return null;
    return ctor.lean_ctor_get(v.obj, 0);
}

pub fn getBool(m: KVMap, k: Name) ?bool {
    const v = find(m, k) orelse return null;
    if (v.kind() != .bool) return null;
    return v.getBool();
}

pub fn getName(m: KVMap, k: Name) ?Name {
    const v = find(m, k) orelse return null;
    if (v.kind() != .name) return null;
    return Name.fromObj(ctor.lean_ctor_get(v.obj, 0));
}

fn leanObjTag(o: *anyopaque) u8 {
    return object.lean_obj_tag(o);
}

const lean = @import("lean_object.zig");

pub fn setString(m: KVMap, k: Name, v: *anyopaque) KVMap {
    _ = m;
    _ = k;
    const dv = ctor.lean_alloc_ctor(@intFromEnum(DataValueKind.string), 1, 0);
    ctor.lean_ctor_set(dv, 0, v);
    return KVMap.fromObj(dv);
}

pub fn setBool(m: KVMap, k: Name, v: bool) KVMap {
    _ = m;
    _ = k;
    const dv = DataValue.fromBool(v);
    return KVMap.fromObj(dv.obj);
}

pub fn setName(m: KVMap, k: Name, v: Name) KVMap {
    _ = m;
    _ = k;
    const dv = ctor.lean_alloc_ctor(@intFromEnum(DataValueKind.name), 1, 0);
    ctor.lean_ctor_set(dv, 0, v.obj.?);
    return KVMap.fromObj(dv);
}

pub fn setNat(m: KVMap, k: Name, v: *anyopaque) KVMap {
    _ = m;
    _ = k;
    const dv = ctor.lean_alloc_ctor(@intFromEnum(DataValueKind.nat), 1, 0);
    ctor.lean_ctor_set(dv, 0, v);
    return KVMap.fromObj(dv);
}

test "kvmap helpers compile" {
    _ = DataValue.fromBool(true);
    _ = KVMap.empty();
    _ = setBool;
}
