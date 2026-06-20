// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/map_foreach.cpp`.
//!
//! Provides traversal helpers for Lean `RBMap`, `PersistentHashMap`, `HashMap`,
//! and `SMap` object representations. The only exported entrypoint is the test
//! helper `lean_smap_foreach_test`.

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const lean = @import("lean_object.zig");
const runtime_options = @import("runtime_options");

const VisitFn = *const fn (k: *anyopaque, v: *anyopaque) void;

fn asArray(o: *anyopaque) *lean.lean_array_object {
    return @ptrCast(@alignCast(o));
}

fn arrayGetCore(o: *anyopaque, i: usize) ?*anyopaque {
    std.debug.assert(i < asArray(o).m_size);
    const slots: [*]?*anyopaque = @ptrCast(&asArray(o).m_data);
    return slots[i];
}

fn visitRbmap(m: ?*anyopaque, fn_ptr: VisitFn) void {
    var node = m;
    while (node != null and !object.lean_is_scalar(node)) {
        const n = node.?;
        visitRbmap(ctor.lean_ctor_get(n, 0), fn_ptr);
        fn_ptr(ctor.lean_ctor_get(n, 1).?, ctor.lean_ctor_get(n, 2).?);
        node = ctor.lean_ctor_get(n, 3);
    }
}

fn visitEntry(e: *anyopaque, fn_ptr: VisitFn) void {
    const tag = object.lean_obj_tag(e);
    switch (tag) {
        0 => { // entry key val
            fn_ptr(ctor.lean_ctor_get(e, 0).?, ctor.lean_ctor_get(e, 1).?);
        },
        1 => { // ref node
            visitNode(ctor.lean_ctor_get(e, 0).?, fn_ptr);
        },
        else => {}, // null
    }
}

fn visitCollisionNode(ks: *anyopaque, vs: *anyopaque, fn_ptr: VisitFn) void {
    const sz = asArray(ks).m_size;
    std.debug.assert(sz == asArray(vs).m_size);
    var i: usize = 0;
    while (i < sz) : (i += 1) {
        fn_ptr(arrayGetCore(ks, i).?, arrayGetCore(vs, i).?);
    }
}

fn visitEntries(es: *anyopaque, fn_ptr: VisitFn) void {
    const sz = asArray(es).m_size;
    var i: usize = 0;
    while (i < sz) : (i += 1) {
        visitEntry(arrayGetCore(es, i).?, fn_ptr);
    }
}

fn visitNode(n: *anyopaque, fn_ptr: VisitFn) void {
    if (object.lean_ptr_tag(n) == 0) {
        visitEntries(ctor.lean_ctor_get(n, 0).?, fn_ptr);
    } else {
        visitCollisionNode(ctor.lean_ctor_get(n, 0).?, ctor.lean_ctor_get(n, 1).?, fn_ptr);
    }
}

fn visitAssocList(lst: ?*anyopaque, fn_ptr: VisitFn) void {
    var node = lst;
    while (node != null and !object.lean_is_scalar(node)) {
        const n = node.?;
        fn_ptr(ctor.lean_ctor_get(n, 0).?, ctor.lean_ctor_get(n, 1).?);
        node = ctor.lean_ctor_get(n, 2);
    }
}

fn visitBuckets(bs: *anyopaque, fn_ptr: VisitFn) void {
    const sz = asArray(bs).m_size;
    var i: usize = 0;
    while (i < sz) : (i += 1) {
        visitAssocList(arrayGetCore(bs, i), fn_ptr);
    }
}

pub fn rbmapForeach(m: *anyopaque, fn_ptr: VisitFn) void {
    visitRbmap(m, fn_ptr);
}

pub fn phashmapForeach(m: *anyopaque, fn_ptr: VisitFn) void {
    visitNode(ctor.lean_ctor_get(m, 0).?, fn_ptr);
}

pub fn hashmapForeach(m: *anyopaque, fn_ptr: VisitFn) void {
    visitBuckets(ctor.lean_ctor_get(m, 1).?, fn_ptr);
}

pub fn smapForeach(m: *anyopaque, fn_ptr: VisitFn) void {
    hashmapForeach(ctor.lean_ctor_get(m, 0).?, fn_ptr);
    phashmapForeach(ctor.lean_ctor_get(m, 1).?, fn_ptr);
}

fn smapForeachTestVisitor(k: *anyopaque, v: *anyopaque) void {
    std.debug.print(">>> {d} |-> {d}\n", .{ object.lean_unbox(k), object.lean_unbox(v) });
}

fn lean_smap_foreach_test(m: *anyopaque) callconv(.c) *anyopaque {
    smapForeach(m, smapForeachTestVisitor);
    return object.lean_box(0).?;
}

comptime {
    if (runtime_options.export_lean_helpers) {
        @export(&lean_smap_foreach_test, .{ .name = "lean_smap_foreach_test" });
    }
}

test "map_foreach module compiles" {
    _ = rbmapForeach;
    _ = phashmapForeach;
    _ = hashmapForeach;
    _ = smapForeach;
}
