const std = @import("std");
const builtin = @import("builtin");
const testing = std.testing;
const alloc = @import("alloc.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const task_runtime = if (builtin.is_test)
    struct {
        fn leanrt_task_deactivate_promise_impl(o: *anyopaque) callconv(.c) void {
            const promise: *lean.lean_promise_object = @ptrCast(@alignCast(o));
            const task = promise.m_result orelse @panic("promise missing backing task");
            if (@atomicLoad(?*anyopaque, &task.m_value, .seq_cst) == null) {
                const imp = task.m_imp orelse @panic("pending promise task missing task imp");
                if (imp.m_head_dep != null) {
                    @panic("unit-test promise deactivation does not support dependents");
                }
                @atomicStore(?*anyopaque, &task.m_value, object.lean_box(0).?, .seq_cst);
                task.m_imp = null;
                alloc.lean_free_small_object(@ptrCast(imp));
            }
            lean_dec_ref(@ptrCast(task));
            alloc.lean_free_small_object(o);
        }
    }
else
    struct {
        extern fn leanrt_task_deactivate_promise_impl(o: *anyopaque) callconv(.c) void;
    };
extern fn leanrt_task_deactivate_task_impl(task_obj: *lean.lean_task_object) callconv(.c) void;
extern fn lean_task_get(t: *anyopaque) callconv(.c) *anyopaque;

const VisitMode = enum { mt, persistent };

fn opaqueFunPtr(fun: anytype) ?*anyopaque {
    return @ptrCast(@constCast(fun));
}

fn markPersistentFn(o: *anyopaque) callconv(.c) *anyopaque {
    lean_mark_persistent(o);
    return object.lean_box(0).?;
}

fn markMtFn(o: *anyopaque) callconv(.c) *anyopaque {
    lean_mark_mt(o);
    lean_dec(o);
    return object.lean_box(0).?;
}

fn header(o: *anyopaque) *lean.lean_object {
    return @ptrCast(@alignCast(o));
}

fn ctorSlots(o: *lean.lean_ctor_object) [*]?*anyopaque {
    return @ptrCast(&o.m_objs);
}

fn closureSlots(o: *lean.lean_closure_object) [*]?*anyopaque {
    return @ptrCast(&o.m_objs);
}

fn arraySlots(o: *lean.lean_array_object) [*]?*anyopaque {
    return @ptrCast(&o.m_data);
}

fn toI32Count(n: usize) i32 {
    return std.math.cast(i32, n) orelse @panic("reference count overflow");
}

fn addChild(todo: *std.ArrayList(*anyopaque), child: ?*anyopaque) void {
    if (child) |ptr| {
        if (!object.lean_is_scalar(ptr)) {
            todo.append(std.heap.page_allocator, ptr) catch @panic("out of memory");
        }
    }
}

fn visitExternal(mode: VisitMode, o: *anyopaque) void {
    const ext: *lean.lean_external_object = @ptrCast(@alignCast(o));
    const visit = switch (mode) {
        .mt => opaqueFunPtr(&markMtFn),
        .persistent => opaqueFunPtr(&markPersistentFn),
    };
    const fn_obj = alloc.lean_alloc_closure(visit, 1, 0);
    if (ext.m_data) |data| {
        ext.m_class.m_foreach(data, fn_obj);
    }
    lean_dec(fn_obj);
}

fn visitChildren(todo: *std.ArrayList(*anyopaque), o: *anyopaque, mode: VisitMode) void {
    const hdr = header(o);
    if (hdr.m_tag <= lean.LeanMaxCtorTag) {
        const ctor: *lean.lean_ctor_object = @ptrCast(@alignCast(o));
        const slots = ctorSlots(ctor);
        for (0..hdr.m_other) |i| addChild(todo, slots[i]);
        return;
    }

    switch (hdr.m_tag) {
        lean.LeanClosure => {
            const closure: *lean.lean_closure_object = @ptrCast(@alignCast(o));
            const slots = closureSlots(closure);
            for (0..closure.m_num_fixed) |i| addChild(todo, slots[i]);
        },
        lean.LeanArray => {
            const array: *lean.lean_array_object = @ptrCast(@alignCast(o));
            const slots = arraySlots(array);
            for (0..array.m_size) |i| addChild(todo, slots[i]);
        },
        lean.LeanExternal => visitExternal(mode, o),
        lean.LeanTask => addChild(todo, lean_task_get(o)),
        lean.LeanPromise => {
            const promise: *lean.lean_promise_object = @ptrCast(@alignCast(o));
            if (promise.m_result) |result| {
                addChild(todo, @ptrCast(result));
            }
        },
        lean.LeanThunk => {
            const thunk: *lean.lean_thunk_object = @ptrCast(@alignCast(o));
            addChild(todo, thunk.m_closure);
            addChild(todo, thunk.m_value);
        },
        lean.LeanRef => {
            const ref_obj: *lean.lean_ref_object = @ptrCast(@alignCast(o));
            addChild(todo, ref_obj.m_value);
        },
        else => {},
    }
}

fn decObject(todo: *std.ArrayList(*anyopaque), child: ?*anyopaque) void {
    if (child) |ptr| {
        if (object.lean_is_scalar(ptr)) return;
        const hdr = header(ptr);
        if (hdr.m_rc > 1) {
            hdr.m_rc -= 1;
        } else if (hdr.m_rc == 1) {
            // Mark as queued for deletion using a large positive sentinel.
            // C++ uses an intrusive list that overwrites m_rc with a pointer
            // (also > 1). We use a sentinel so a second decObject before the
            // first delCore runs takes the m_rc > 1 branch and decrements
            // harmlessly instead of re-enqueuing the same pointer (double-free).
            hdr.m_rc = 0x7fff_0000;
            todo.append(std.heap.page_allocator, ptr) catch @panic("out of memory");
        } else if (hdr.m_rc < 0) {
            const prev = @atomicRmw(i32, &hdr.m_rc, .Add, 1, .seq_cst);
            if (prev == -1) {
                todo.append(std.heap.page_allocator, ptr) catch @panic("out of memory");
            }
        }
    }
}

fn delCoreOther(todo: *std.ArrayList(*anyopaque), o: *anyopaque, tag: u8) void {
    switch (tag) {
        lean.LeanClosure => {
            const closure: *lean.lean_closure_object = @ptrCast(@alignCast(o));
            const slots = closureSlots(closure);
            for (0..closure.m_num_fixed) |i| decObject(todo, slots[i]);
            alloc.lean_free_object(o);
        },
        lean.LeanArray => {
            const array: *lean.lean_array_object = @ptrCast(@alignCast(o));
            const slots = arraySlots(array);
            for (0..array.m_size) |i| decObject(todo, slots[i]);
            alloc.lean_free_object(o);
        },
        lean.LeanScalarArray, lean.LeanString => {
            alloc.lean_free_object(o);
        },
        lean.LeanMPZ => {
            alloc.lean_free_object(o);
        },
        lean.LeanThunk => {
            const thunk: *lean.lean_thunk_object = @ptrCast(@alignCast(o));
            decObject(todo, thunk.m_closure);
            decObject(todo, thunk.m_value);
            alloc.lean_free_object(o);
        },
        lean.LeanRef => {
            const ref_obj: *lean.lean_ref_object = @ptrCast(@alignCast(o));
            decObject(todo, ref_obj.m_value);
            alloc.lean_free_object(o);
        },
        lean.LeanPromise => {
            task_runtime.leanrt_task_deactivate_promise_impl(o);
        },
        lean.LeanTask => {
            const task: *lean.lean_task_object = @ptrCast(@alignCast(o));
            leanrt_task_deactivate_task_impl(task);
        },
        lean.LeanExternal => {
            alloc.lean_free_object(o);
        },
        else => @panic("unexpected object tag in delCoreOther"),
    }
}

fn delCore(todo: *std.ArrayList(*anyopaque), o: *anyopaque) void {
    const hdr = header(o);
    const tag = hdr.m_tag;
    if (tag <= lean.LeanMaxCtorTag) {
        const ctor: *lean.lean_ctor_object = @ptrCast(@alignCast(o));
        const slots = ctorSlots(ctor);
        for (0..hdr.m_other) |i| decObject(todo, slots[i]);
        alloc.lean_free_object(o);
    } else {
        delCoreOther(todo, o, tag);
    }
}

pub export fn lean_inc_ref_n(o: *anyopaque, n: usize) callconv(.c) void {
    if (n == 0) return;

    const hdr = header(o);
    if (hdr.m_rc > 0) {
        hdr.m_rc += toI32Count(n);
    } else if (hdr.m_rc != 0) {
        _ = @atomicRmw(i32, &hdr.m_rc, .Sub, toI32Count(n), .seq_cst);
    }
}

pub export fn lean_inc_ref(o: *anyopaque) callconv(.c) void {
    lean_inc_ref_n(o, 1);
}

pub export fn lean_inc_n(o: ?*anyopaque, n: usize) callconv(.c) void {
    if (o) |ptr| {
        if (!object.lean_is_scalar(ptr)) {
            lean_inc_ref_n(ptr, n);
        }
    }
}

pub export fn lean_inc(o: ?*anyopaque) callconv(.c) void {
    lean_inc_n(o, 1);
}

/// Increment reference count and return the same pointer.
/// Convenience helper for retain patterns.
pub fn lean_inc_ret(o: *anyopaque) *anyopaque {
    lean_inc(o);
    return o;
}

pub export fn lean_dec_ref_cold(o_arg: *anyopaque) callconv(.c) void {
    var o = o_arg;
    const hdr = header(o);
    if (hdr.m_rc == 1) {
        var todo: std.ArrayList(*anyopaque) = .empty;
        defer todo.deinit(std.heap.page_allocator);
        while (true) {
            delCore(&todo, o);
            if (todo.items.len == 0) return;
            o = todo.pop().?;
        }
    } else if (hdr.m_rc < 0) {
        const prev = @atomicRmw(i32, &hdr.m_rc, .Add, 1, .seq_cst);
        if (prev == -1) {
            var todo: std.ArrayList(*anyopaque) = .empty;
            defer todo.deinit(std.heap.page_allocator);
            while (true) {
                delCore(&todo, o);
                if (todo.items.len == 0) return;
                o = todo.pop().?;
            }
        }
    }
}

pub export fn lean_dec_ref(o: *anyopaque) callconv(.c) void {
    const hdr = header(o);
    if (hdr.m_rc > 1) {
        hdr.m_rc -= 1;
    } else if (hdr.m_rc != 0) {
        lean_dec_ref_cold(o);
    }
}

pub export fn lean_dec(o: ?*anyopaque) callconv(.c) void {
    if (o) |ptr| {
        if (!object.lean_is_scalar(ptr)) {
            lean_dec_ref(ptr);
        }
    }
}
pub export fn lean_dec_n(o: ?*anyopaque, n: usize) callconv(.c) void {
    if (o) |ptr| {
        if (!object.lean_is_scalar(ptr)) {
            var i: usize = 0;
            while (i < n) : (i += 1) {
                lean_dec_ref(ptr);
            }
        }
    }
}

pub export fn lean_is_exclusive(o: *anyopaque) callconv(.c) bool {
    return header(o).m_rc == 1;
}

pub export fn lean_is_shared(o: *anyopaque) callconv(.c) bool {
    return header(o).m_rc > 1;
}

pub export fn lean_mark_mt(o: *anyopaque) callconv(.c) void {
    if (object.lean_is_scalar(o)) return;

    var todo: std.ArrayList(*anyopaque) = .empty;
    defer todo.deinit(std.heap.page_allocator);
    todo.append(std.heap.page_allocator, o) catch @panic("out of memory");

    while (todo.items.len > 0) {
        const current = todo.pop().?;
        const hdr = header(current);
        if (hdr.m_rc <= 0) continue;

        hdr.m_rc = -hdr.m_rc;
        visitChildren(&todo, current, .mt);
    }
}

pub export fn lean_mark_persistent(o: *anyopaque) callconv(.c) void {
    if (object.lean_is_scalar(o)) return;

    var todo: std.ArrayList(*anyopaque) = .empty;
    defer todo.deinit(std.heap.page_allocator);
    todo.append(std.heap.page_allocator, o) catch @panic("out of memory");

    while (todo.items.len > 0) {
        const current = todo.pop().?;
        const hdr = header(current);
        if (hdr.m_rc == 0) continue;

        hdr.m_rc = 0;
        visitChildren(&todo, current, .persistent);
    }
}

fn allocPlainObject() *anyopaque {
    const ptr = alloc.lean_alloc_object(@sizeOf(lean.lean_object));
    const hdr = header(ptr);
    hdr.* = .{ .m_rc = 1, .m_cs_sz = 0, .m_other = 0, .m_tag = 0 };
    return ptr;
}

fn allocCtorObject(num_objs: u8) *anyopaque {
    const size = @sizeOf(lean.lean_ctor_object) + (@sizeOf(?*anyopaque) * num_objs);
    const ptr = alloc.lean_alloc_object(size);
    const ctor: *lean.lean_ctor_object = @ptrCast(@alignCast(ptr));
    ctor.m_header = .{ .m_rc = 1, .m_cs_sz = 0, .m_other = num_objs, .m_tag = 0 };
    const slots = ctorSlots(ctor);
    for (0..num_objs) |i| slots[i] = object.lean_box(0);
    return ptr;
}

fn forceFree(ptr: *anyopaque) void {
    alloc.lean_free_object(ptr);
}

test "lean_inc and lean_dec round trip preserves ST rc" {
    const ptr = allocPlainObject();
    defer forceFree(ptr);

    try testing.expectEqual(@as(i32, 1), header(ptr).m_rc);
    lean_inc(ptr);
    try testing.expectEqual(@as(i32, 2), header(ptr).m_rc);
    lean_dec(ptr);
    try testing.expectEqual(@as(i32, 1), header(ptr).m_rc);
}

test "lean_dec at rc one frees via allocator" {
    const ptr = allocPlainObject();

    alloc.resetTestCounters();
    lean_dec(ptr);

    try testing.expectEqual(@as(usize, 1), alloc.testFreeCount());
}

test "persistent objects keep zero rc under inc and dec" {
    const ptr = allocPlainObject();
    defer forceFree(ptr);

    lean_mark_persistent(ptr);
    try testing.expectEqual(@as(i32, 0), header(ptr).m_rc);
    lean_inc(ptr);
    lean_dec(ptr);
    try testing.expectEqual(@as(i32, 0), header(ptr).m_rc);
}

test "shared and exclusive helpers match ST rc" {
    const ptr = allocPlainObject();
    defer forceFree(ptr);

    try testing.expect(lean_is_exclusive(ptr));
    try testing.expect(!lean_is_shared(ptr));
    lean_inc_ref_n(ptr, 2);
    try testing.expect(!lean_is_exclusive(ptr));
    try testing.expect(lean_is_shared(ptr));
}

test "lean_inc_n increments heap objects by requested count" {
    const ptr = allocPlainObject();
    defer forceFree(ptr);

    lean_inc_n(ptr, 3);
    try testing.expectEqual(@as(i32, 4), header(ptr).m_rc);
}

test "mark_mt flips sign and propagates through ctor children" {
    const child1 = allocPlainObject();
    defer forceFree(child1);
    const child2 = allocPlainObject();
    defer forceFree(child2);
    const parent_ptr = allocCtorObject(2);
    defer forceFree(parent_ptr);

    const parent: *lean.lean_ctor_object = @ptrCast(@alignCast(parent_ptr));
    const slots = ctorSlots(parent);
    slots[0] = child1;
    slots[1] = child2;

    lean_mark_mt(parent_ptr);

    try testing.expectEqual(@as(i32, -1), header(parent_ptr).m_rc);
    try testing.expectEqual(@as(i32, -1), header(child1).m_rc);
    try testing.expectEqual(@as(i32, -1), header(child2).m_rc);
}

test "mt inc and dec use atomic rc updates" {
    const ptr = allocPlainObject();
    defer forceFree(ptr);

    lean_mark_mt(ptr);

    const Worker = struct {
        ptr: *anyopaque,

        fn run(self: @This()) void {
            var i: usize = 0;
            while (i < 10_000) : (i += 1) {
                lean_inc_ref(self.ptr);
                lean_dec_ref(self.ptr);
            }
        }
    };

    const worker = Worker{ .ptr = ptr };
    const t1 = try std.Thread.spawn(.{}, Worker.run, .{worker});
    const t2 = try std.Thread.spawn(.{}, Worker.run, .{worker});
    t1.join();
    t2.join();

    try testing.expectEqual(@as(i32, -1), @atomicLoad(i32, &header(ptr).m_rc, .seq_cst));
}
