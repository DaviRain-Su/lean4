// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Expression annotations (`annotation.cpp`).
//!
//! Annotations are mdata wrappers tagged with a `Name` kind.  The mdata
//! payload is a kvmap (a Lean `List (Name × DataValue)`) containing a
//! single entry keyed by `"annotation"` whose value is the kind.

pub const force_link = true;

const std = @import("std");
const ea = @import("expr_accessors.zig");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const runtime_helpers = @import("runtime_helpers.zig");

extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_expr_mk_mdata(m: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;

const Entry = struct {
    kind: *anyopaque,
    kvmap: *anyopaque,
};

var g_annotation: ?*anyopaque = null;
var g_annotation_maps: std.ArrayListUnmanaged(Entry) = .empty;
var g_have: ?*anyopaque = null;
var g_show: ?*anyopaque = null;
var g_suffices: ?*anyopaque = null;
var g_checkpoint: ?*anyopaque = null;
var g_initialized = false;

fn leanListNil() *anyopaque {
    return object.lean_box(0).?;
}

fn leanListCons(head: *anyopaque, tail: *anyopaque) *anyopaque {
    return runtime_helpers.lean_list_cons(head, tail);
}

/// Construct a `Prod.mk a b` object (constructor tag 0, two fields).
fn mkPair(a: *anyopaque, b: *anyopaque) *anyopaque {
    const p = alloc.lean_alloc_ctor(0, 2, 0);
    ctor.lean_ctor_set(p, 0, a);
    ctor.lean_ctor_set(p, 1, b);
    return p;
}

/// Construct a `DataValue.ofName n` object (constructor tag 2, one field).
fn mkDataValueName(n: *anyopaque) *anyopaque {
    const dv = alloc.lean_alloc_ctor(2, 1, 0);
    ctor.lean_ctor_set(dv, 0, n);
    return dv;
}

/// Build the kvmap used by annotations: `[("annotation", kind)]`.
fn mkAnnotationKvmap(kind: *anyopaque) *anyopaque {
    const key = g_annotation.?;
    const dv = mkDataValueName(kind);
    const pair = mkPair(key, dv);
    const nil = leanListNil();
    return leanListCons(pair, nil);
}

/// Look up `key` in kvmap (a list of pairs) and return the value if present.
fn kvmapFindName(kvmap: *anyopaque, key: *anyopaque) ?*anyopaque {
    var curr = kvmap;
    while (!object.lean_is_scalar(curr)) {
        const entry = ctor.lean_ctor_get(curr, 0) orelse return null;
        const entry_key = ctor.lean_ctor_get(entry, 0) orelse return null;
        const entry_val = ctor.lean_ctor_get(entry, 1) orelse return null;
        if (lean_name_eq(entry_key, key) != 0) {
            return entry_val;
        }
        curr = ctor.lean_ctor_get(curr, 1) orelse return null;
    }
    return null;
}

fn nameEq(a: *anyopaque, b: *anyopaque) bool {
    return lean_name_eq(a, b) != 0;
}

pub fn registerAnnotation(kind: *anyopaque) void {
    for (g_annotation_maps.items) |entry| {
        if (nameEq(entry.kind, kind)) return;
    }
    const kv = mkAnnotationKvmap(kind);
    g_annotation_maps.append(std.heap.c_allocator, .{ .kind = kind, .kvmap = kv }) catch @panic("registerAnnotation: oom");
}

/// If `e` is an annotation, return the wrapped mdata expression.
pub fn isAnnotation(e: *anyopaque) ?*anyopaque {
    if (ea.isMData(e)) {
        const data = ea.mdataData(e);
        if (kvmapFindName(data, g_annotation.?)) |_| {
            return e;
        }
    }
    return null;
}

pub fn getAnnotationKind(e: *anyopaque) *anyopaque {
    const data = ea.mdataData(e);
    const dv = kvmapFindName(data, g_annotation.?) orelse @panic("getAnnotationKind: not an annotation");
    return ctor.lean_ctor_get(dv, 0) orelse @panic("getAnnotationKind: malformed DataValue");
}

pub fn isAnnotationKind(e: *anyopaque, kind: *anyopaque) bool {
    if (isAnnotation(e)) |_| {
        return nameEq(getAnnotationKind(e), kind);
    }
    return false;
}

pub fn getAnnotationArg(e: *anyopaque) *anyopaque {
    _ = isAnnotation(e) orelse @panic("getAnnotationArg: not an annotation");
    return ea.mdataExpr(e);
}

pub fn mkAnnotation(kind: *anyopaque, e: *anyopaque) *anyopaque {
    for (g_annotation_maps.items) |entry| {
        if (nameEq(entry.kind, kind)) {
            const r = lean_expr_mk_mdata(entry.kvmap, e);
            return r;
        }
    }
    @panic("unknown annotation kind");
}

pub fn isNestedAnnotation(e: *anyopaque, kind: *anyopaque) bool {
    var it = e;
    while (isAnnotation(it) != null) {
        if (nameEq(getAnnotationKind(it), kind)) return true;
        it = getAnnotationArg(it);
    }
    return false;
}

pub fn getNestedAnnotationArg(e: *anyopaque) *anyopaque {
    var it = e;
    while (isAnnotation(it) != null) {
        it = getAnnotationArg(it);
    }
    return it;
}

pub fn mkHaveAnnotation(e: *anyopaque) *anyopaque { return mkAnnotation(g_have.?, e); }
pub fn mkShowAnnotation(e: *anyopaque) *anyopaque { return mkAnnotation(g_show.?, e); }
pub fn mkSufficesAnnotation(e: *anyopaque) *anyopaque { return mkAnnotation(g_suffices.?, e); }
pub fn mkCheckpointAnnotation(e: *anyopaque) *anyopaque { return mkAnnotation(g_checkpoint.?, e); }

pub fn isHaveAnnotation(e: *anyopaque) bool { return isAnnotationKind(e, g_have.?); }
pub fn isShowAnnotation(e: *anyopaque) bool { return isAnnotationKind(e, g_show.?); }
pub fn isSufficesAnnotation(e: *anyopaque) bool { return isAnnotationKind(e, g_suffices.?); }
pub fn isCheckpointAnnotation(e: *anyopaque) bool { return isAnnotationKind(e, g_checkpoint.?); }

const alloc = @import("alloc.zig");

fn makeName(s: [*:0]const u8) *anyopaque {
    return runtime_helpers.lean_name_mk_str(object.lean_box(0).?, s);
}

pub fn initializeAnnotation() void {
    if (g_initialized) return;
    g_initialized = true;
    g_annotation = makeName("annotation");
    g_annotation_maps = std.ArrayListUnmanaged(Entry).empty;
    g_have = makeName("have");
    g_show = makeName("show");
    g_suffices = makeName("suffices");
    g_checkpoint = makeName("checkpoint");
    registerAnnotation(g_have.?);
    registerAnnotation(g_show.?);
    registerAnnotation(g_suffices.?);
    registerAnnotation(g_checkpoint.?);
}

pub fn finalizeAnnotation() void {
    if (!g_initialized) return;
    g_initialized = false;
    g_annotation_maps.deinit(std.heap.c_allocator);
    g_annotation_maps = .empty;
    g_annotation = null;
    g_have = null;
    g_show = null;
    g_suffices = null;
    g_checkpoint = null;
}

test "annotation lifecycle" {
    initializeAnnotation();
    defer finalizeAnnotation();
    const inner = object.lean_box(42).?;
    const ann = mkHaveAnnotation(inner);
    defer rc.lean_dec(ann);
    try std.testing.expect(isHaveAnnotation(ann));
    try std.testing.expectEqual(inner, getAnnotationArg(ann));
}
