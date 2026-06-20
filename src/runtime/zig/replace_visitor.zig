// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Generic expression replacement visitor (`replace_visitor.cpp`).
//!
//! Provides a default no-op visitor with a sharing cache.  Subclasses override
//! individual `visit_*` hooks via the `VTable` indirection.

pub const force_link = true;

const std = @import("std");
const ea = @import("expr_accessors.zig");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const alloc = @import("alloc.zig");

extern fn lean_expr_mk_app(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_mdata(m: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_proj(s: *anyopaque, i: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_lambda(n: *anyopaque, d: *anyopaque, b: *anyopaque, bi: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_forall(n: *anyopaque, d: *anyopaque, b: *anyopaque, bi: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_let(n: *anyopaque, t: *anyopaque, v: *anyopaque, b: *anyopaque, nd: *anyopaque) callconv(.c) *anyopaque;

/// Per-expression hook table.  A null hook falls back to the default behavior.
pub const VTable = struct {
    visit_sort: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_var: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_lit: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_constant: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_meta: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_fvar: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_mdata: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_proj: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_app: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_binding: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_lambda: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_pi: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit_let: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
    visit: ?*const fn (ctx: *anyopaque, e: *anyopaque) *anyopaque = null,
};

pub const ReplaceVisitor = struct {
    vtable: *const VTable,
    ctx: *anyopaque,
    cache: std.HashMap(*anyopaque, *anyopaque, ExprContext, std.hash_map.default_max_load_percentage),
    allocator: std.mem.Allocator,

    const ExprContext = struct {
        pub fn hash(_: @This(), e: *anyopaque) u64 {
            return @intFromPtr(e);
        }
        pub fn eql(_: @This(), a: *anyopaque, b: *anyopaque) bool {
            return a == b;
        }
    };

    pub fn init(vtable: *const VTable, ctx: *anyopaque, allocator: std.mem.Allocator) ReplaceVisitor {
        return .{
            .vtable = vtable,
            .ctx = ctx,
            .cache = .init(allocator),
            .allocator = allocator,
        };
    }

    pub fn deinit(self: *ReplaceVisitor) void {
        self.cache.deinit();
    }

    pub fn clear(self: *ReplaceVisitor) void {
        self.cache.clearRetainingCapacity();
    }

    fn call(self: *ReplaceVisitor, comptime field: []const u8, default: *const fn (self: *ReplaceVisitor, e: *anyopaque) *anyopaque, e: *anyopaque) *anyopaque {
        if (@field(self.vtable, field)) |hook| {
            return hook(self.ctx, e);
        }
        return default(self, e);
    }

    pub fn visitSort(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_sort", defaultVisitSort, e); }
    pub fn visitVar(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_var", defaultVisitVar, e); }
    pub fn visitLit(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_lit", defaultVisitLit, e); }
    pub fn visitConstant(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_constant", defaultVisitConstant, e); }
    pub fn visitMeta(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_meta", defaultVisitMeta, e); }
    pub fn visitFVar(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_fvar", defaultVisitFVar, e); }
    pub fn visitMData(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_mdata", defaultVisitMData, e); }
    pub fn visitProj(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_proj", defaultVisitProj, e); }
    pub fn visitApp(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_app", defaultVisitApp, e); }
    pub fn visitBinding(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_binding", defaultVisitBinding, e); }
    pub fn visitLambda(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_lambda", defaultVisitLambda, e); }
    pub fn visitPi(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_pi", defaultVisitPi, e); }
    pub fn visitLet(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.call("visit_let", defaultVisitLet, e); }

    fn defaultVisitSort(_: *ReplaceVisitor, e: *anyopaque) *anyopaque { rc.lean_inc(e); return e; }
    fn defaultVisitVar(_: *ReplaceVisitor, e: *anyopaque) *anyopaque { rc.lean_inc(e); return e; }
    fn defaultVisitLit(_: *ReplaceVisitor, e: *anyopaque) *anyopaque { rc.lean_inc(e); return e; }
    fn defaultVisitConstant(_: *ReplaceVisitor, e: *anyopaque) *anyopaque { rc.lean_inc(e); return e; }
    fn defaultVisitMeta(_: *ReplaceVisitor, e: *anyopaque) *anyopaque { rc.lean_inc(e); return e; }
    fn defaultVisitFVar(_: *ReplaceVisitor, e: *anyopaque) *anyopaque { rc.lean_inc(e); return e; }

    fn defaultVisitMData(self: *ReplaceVisitor, e: *anyopaque) *anyopaque {
        const inner = ea.mdataExpr(e);
        const new_inner = self.visit(inner);
        return ea.updateMData(e, new_inner);
    }

    fn defaultVisitProj(self: *ReplaceVisitor, e: *anyopaque) *anyopaque {
        const inner = ea.projExpr(e);
        const new_inner = self.visit(inner);
        return ea.updateProj(e, new_inner);
    }

    fn defaultVisitApp(self: *ReplaceVisitor, e: *anyopaque) *anyopaque {
        const f = ea.appFn(e);
        const a = ea.appArg(e);
        const new_f = self.visit(f);
        const new_a = self.visit(a);
        return ea.updateApp(e, new_f, new_a);
    }

    fn defaultVisitBinding(self: *ReplaceVisitor, e: *anyopaque) *anyopaque {
        const d = ea.bindingDomain(e);
        const b = ea.bindingBody(e);
        const new_d = self.visit(d);
        const new_b = self.visit(b);
        return ea.updateBinding(e, new_d, new_b);
    }

    fn defaultVisitLambda(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.visitBinding(e); }
    fn defaultVisitPi(self: *ReplaceVisitor, e: *anyopaque) *anyopaque { return self.visitBinding(e); }

    fn defaultVisitLet(self: *ReplaceVisitor, e: *anyopaque) *anyopaque {
        const t = ea.letType(e);
        const v = ea.letValue(e);
        const b = ea.letBody(e);
        const new_t = self.visit(t);
        const new_v = self.visit(v);
        const new_b = self.visit(b);
        return ea.updateLet(e, new_t, new_v, new_b);
    }

    fn saveResult(self: *ReplaceVisitor, e: *anyopaque, r: *anyopaque, shared: bool) *anyopaque {
        if (shared) {
            self.cache.put(e, r) catch @panic("replace_visitor: oom");
        }
        return r;
    }

    pub fn visit(self: *ReplaceVisitor, e: *anyopaque) *anyopaque {
        if (self.vtable.visit) |hook| {
            return hook(self.ctx, e);
        }
        const interrupt = @import("interrupt.zig");
        interrupt.checkSystem("expression replacer", true);
        const shared = object.lean_ptr_tag(e) != 0 and isShared(e);
        if (shared) {
            if (self.cache.get(e)) |cached| {
                rc.lean_inc(cached);
                return cached;
            }
        }
        const result: *anyopaque = switch (ea.kind(e)) {
            .Lit => self.visitLit(e),
            .MData => self.visitMData(e),
            .Proj => self.visitProj(e),
            .Sort => self.visitSort(e),
            .Const => self.visitConstant(e),
            .BVar => self.visitVar(e),
            .MVar => self.visitMeta(e),
            .FVar => self.visitFVar(e),
            .App => self.visitApp(e),
            .Lambda => self.visitLambda(e),
            .Pi => self.visitPi(e),
            .Let => self.visitLet(e),
        };
        return self.saveResult(e, result, shared);
    }
};

fn isShared(e: *anyopaque) bool {
    const hdr: *align(1) @import("lean_object.zig").lean_object = @ptrCast(e);
    return hdr.m_rc > 1;
}

test "ReplaceVisitor default visit returns same expression" {
    const vtable: VTable = .{};
    var visitor = ReplaceVisitor.init(&vtable, undefined, std.testing.allocator);
    defer visitor.deinit();
    const e = object.lean_box(7).?;
    const r = visitor.visit(e);
    try std.testing.expectEqual(e, r);
    rc.lean_dec(r);
}
