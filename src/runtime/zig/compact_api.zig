// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Exported API for the Zig compact subsystem.
//!
//! First pass: v2 format, no closures, no mmap, POSIX file I/O.

const std = @import("std");
const testing = std.testing;
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const alloc = @import("alloc.zig");
const rc = @import("rc.zig");
const ctor = @import("ctor.zig");
const string = @import("string.zig");
const array = @import("array.zig");
const io_result = @import("io_result.zig");
const compact = @import("compact.zig");

const c = @cImport({
    @cInclude("fcntl.h");
    @cInclude("unistd.h");
    @cInclude("sys/stat.h");
    @cInclude("errno.h");
});

const Obj = ?*anyopaque;
const OLEAN_HEADER_SIZE = 88;
const ALIGN = 1 << 16;

const OleanHeader = extern struct {
    marker: [5]u8,
    version: u8,
    flags: u8,
    lean_version: [33]u8,
    githash: [40]u8,
    base_addr: usize,
    data: [0]u8,
};

comptime {
    if (@sizeOf(OleanHeader) != 5 + 1 + 1 + 33 + 40 + @sizeOf(usize)) {
        @compileError("OleanHeader size mismatch");
    }
}

fn mkError(msg: []const u8) *anyopaque {
    const err = string.lean_mk_string(@ptrCast(msg.ptr));
    return io_result.lean_io_result_mk_error(err);
}

fn stringCStr(o: *anyopaque) [*:0]const u8 {
    const str: *lean.lean_string_object = @ptrCast(@alignCast(o));
    return @ptrCast(@alignCast(&str.m_data));
}

var g_compactor_class: ?*lean.lean_external_class = null;

fn ensureCompactorClass() void {
    if (g_compactor_class == null) {
        g_compactor_class = object.lean_register_external_class(compactorFinalizer, compactorForeach);
    }
}

fn compactorFinalizer(data: *anyopaque) callconv(.c) void {
    const comp: *compact.Compactor = @ptrCast(@alignCast(data));
    comp.deinit();
    std.heap.c_allocator.destroy(comp);
}

fn compactorForeach(_: *anyopaque, _: ?*anyopaque) callconv(.c) void {}

fn mkCompactor(base_addr: usize, dep_regions: []compact.RegionView, allow_closures: bool) *anyopaque {
    ensureCompactorClass();
    const comp = std.heap.c_allocator.create(compact.Compactor) catch @panic("out of memory");
    comp.* = compact.Compactor.init(base_addr, dep_regions, allow_closures);
    return object.lean_alloc_external(g_compactor_class.?, @ptrCast(comp));
}

fn toCompactor(o: *anyopaque) *compact.Compactor {
    return @ptrCast(@alignCast(object.lean_get_external_data(o).?));
}

fn regionRoot(region: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(region, 1).?;
}

fn regionSize(region: *anyopaque) usize {
    return ctor.lean_ctor_get_usize(region, 2);
}

fn regionBaseAddr(region: *anyopaque) usize {
    return ctor.lean_ctor_get_usize(region, 3);
}

fn regionBufferOffset(region: *anyopaque) usize {
    return ctor.lean_ctor_get_usize(region, 4);
}

fn regionBuffer(region: *anyopaque) [*]u8 {
    return @ptrFromInt(@intFromPtr(regionRoot(region)) -% regionBufferOffset(region));
}

fn nameHash(mod: *anyopaque) usize {
    _ = mod;
    return 0x123456789000;
}

pub export fn lean_compacted_region_save(
    ofname: *anyopaque,
    mod: *anyopaque,
    odata: *anyopaque,
    odep_regions: *anyopaque,
    oprev: *anyopaque,
    allow_closures_u8: u8,
    _: Obj,
) callconv(.c) *anyopaque {
    _ = oprev;
    const allow_closures = allow_closures_u8 != 0;

    var dep_regions = compact.extractDepRegions(odep_regions);
    defer dep_regions.deinit(std.heap.c_allocator);

    const base_addr = nameHash(mod) & ~@as(usize, ALIGN - 1);
    const compactor_obj = mkCompactor(base_addr, dep_regions.items, allow_closures);
    const comp = toCompactor(compactor_obj);

    const path = stringCStr(ofname);
    const fd = c.open(path, c.O_WRONLY | c.O_CREAT | c.O_TRUNC, @as(c_uint, 0o644));
    if (fd < 0) {
        return mkError("failed to open output file");
    }
    defer _ = c.close(fd);

    // Reserve space for the header at a 64KB-aligned offset.
    const current_size = comp.size();
    const padding = if (current_size % ALIGN == 0) 0 else ALIGN - (current_size % ALIGN);
    _ = comp.allocBytes(padding);
    const file_offset = comp.size();
    _ = comp.allocBytes(OLEAN_HEADER_SIZE);

    const version: u8 = if (allow_closures) 3 else 2;

    var header_buf: [OLEAN_HEADER_SIZE]u8 = undefined;
    @memset(&header_buf, 0);
    @memcpy(header_buf[0..5], "olean");
    header_buf[5] = version;
    header_buf[6] = 1; // flags: GMP
    const file_base_addr = comp.base_addr + file_offset;
    const base_addr_bytes = std.mem.asBytes(&file_base_addr);
    @memcpy(header_buf[7 + 33 + 40 .. 7 + 33 + 40 + base_addr_bytes.len], base_addr_bytes);

    if (c.write(fd, &header_buf, OLEAN_HEADER_SIZE) != OLEAN_HEADER_SIZE) {
        return mkError("failed to write header");
    }

    if (!allow_closures) {
        // v2 path: [header][data], no trailer.
        const root_offset = comp.compactRoot(odata);
        _ = root_offset;

        const data = comp.data();
        const data_size = comp.size() - file_offset - OLEAN_HEADER_SIZE;
        if (c.write(fd, data + file_offset + OLEAN_HEADER_SIZE, data_size) != data_size) {
            return mkError("failed to write data");
        }
        return io_result.lean_io_result_mk_ok(compactor_obj);
    }

    // v3 path: [header][data_size][data][closure_offsets][lib_table]
    // Reserve the data_size slot so the data lands at the right buffer offset
    // (88 + 8 = 96, size_t-aligned).
    _ = comp.allocBytes(@sizeOf(usize));
    const data_offset = file_offset + OLEAN_HEADER_SIZE + @sizeOf(usize);

    const root_offset = comp.compactRoot(odata);
    _ = root_offset;

    const data = comp.data();
    const data_size = comp.size() - data_offset;

    // Write data_size.
    if (c.write(fd, std.mem.asBytes(&data_size), @sizeOf(usize)) != @sizeOf(usize)) {
        return mkError("failed to write data_size");
    }
    // Write data.
    if (c.write(fd, data + data_offset, data_size) != data_size) {
        return mkError("failed to write data");
    }

    // Convert buffer-relative closure offsets to data-relative.
    const all_offsets = comp.closure_offsets.items;
    var file_offsets = std.heap.c_allocator.alloc(u64, all_offsets.len) catch @panic("out of memory");
    defer std.heap.c_allocator.free(file_offsets);
    for (all_offsets, 0..) |off, i| {
        file_offsets[i] = @intCast(off - data_offset);
    }

    // Write closure offset section.
    const num_closure_offsets: u32 = @intCast(file_offsets.len);
    if (c.write(fd, std.mem.asBytes(&num_closure_offsets), @sizeOf(u32)) != @sizeOf(u32)) {
        return mkError("failed to write closure offsets");
    }
    if (file_offsets.len > 0) {
        const bytes = std.mem.sliceAsBytes(file_offsets);
        if (c.write(fd, bytes.ptr, bytes.len) != bytes.len) {
            return mkError("failed to write closure offsets");
        }
    }

    // Write lib relocation table: only libs containing a compacted closure's fn pointer.
    const used_libs = comp.usedLibs();
    defer std.heap.c_allocator.free(used_libs);
    const num_libs: u32 = @intCast(used_libs.len);
    if (c.write(fd, std.mem.asBytes(&num_libs), @sizeOf(u32)) != @sizeOf(u32)) {
        return mkError("failed to write lib table");
    }
    for (used_libs) |lib| {
        if (c.write(fd, std.mem.asBytes(&lib.base_addr), @sizeOf(usize)) != @sizeOf(usize)) {
            return mkError("failed to write lib table");
        }
        const name = std.mem.span(lib.name);
        const id_len: u32 = @intCast(name.len);
        if (c.write(fd, std.mem.asBytes(&id_len), @sizeOf(u32)) != @sizeOf(u32)) {
            return mkError("failed to write lib table");
        }
        if (c.write(fd, name.ptr, name.len) != name.len) {
            return mkError("failed to write lib table");
        }
    }

    return io_result.lean_io_result_mk_ok(compactor_obj);
}

pub export fn lean_compacted_region_read(
    ofname: *anyopaque,
    odep_regions: *anyopaque,
    _: Obj,
) callconv(.c) *anyopaque {
    var dep_regions = compact.extractDepRegions(odep_regions);
    defer dep_regions.deinit(std.heap.c_allocator);

    const path = stringCStr(ofname);
    const fd = c.open(path, c.O_RDONLY);
    if (fd < 0) {
        return mkError("failed to open input file");
    }
    defer _ = c.close(fd);

    var st: c.struct_stat = undefined;
    if (c.fstat(fd, &st) != 0) {
        return mkError("failed to stat input file");
    }
    const size = @as(usize, @intCast(st.st_size));

    const buffer = std.heap.c_allocator.alloc(u8, size) catch return mkError("out of memory");

    var total: usize = 0;
    while (total < size) {
        const n = c.read(fd, buffer.ptr + total, size - total);
        if (n < 0) {
            std.heap.c_allocator.free(buffer);
            return mkError("failed to read input file");
        }
        if (n == 0) break;
        total += @as(usize, @intCast(n));
    }
    if (total < OLEAN_HEADER_SIZE) {
        std.heap.c_allocator.free(buffer);
        return mkError("file too short");
    }

    const header: *align(1) OleanHeader = @ptrCast(buffer.ptr);
    if (!std.mem.eql(u8, &header.marker, "olean")) {
        std.heap.c_allocator.free(buffer);
        return mkError("invalid olean magic");
    }
    const base_addr = header.base_addr;

    var data_off: usize = OLEAN_HEADER_SIZE;
    var data_size: usize = size - OLEAN_HEADER_SIZE;
    var closure_offsets: []usize = &.{};
    var lib_relocs: []compact.LibReloc = &.{};

    if (header.version == 3) {
        // v3: [header][data_size][data][closure_offsets][lib_table]
        if (total < OLEAN_HEADER_SIZE + @sizeOf(usize)) {
            std.heap.c_allocator.free(buffer);
            return mkError("v3 file too short for data_size");
        }
        const ds: *align(1) usize = @ptrCast(buffer.ptr + OLEAN_HEADER_SIZE);
        data_off = OLEAN_HEADER_SIZE + @sizeOf(usize);
        data_size = ds.*;

        // Parse closure offsets and lib table from after the data section.
        var p = data_off + data_size;
        if (p + @sizeOf(u32) > total) {
            std.heap.c_allocator.free(buffer);
            return mkError("v3 file truncated before closure section");
        }
        const num_closure: *align(1) u32 = @ptrCast(buffer.ptr + p);
        p += @sizeOf(u32);
        if (num_closure.* > 0) {
            closure_offsets = std.heap.c_allocator.alloc(usize, num_closure.*) catch {
                std.heap.c_allocator.free(buffer);
                return mkError("out of memory");
            };
            if (p + num_closure.* * @sizeOf(u64) > total) {
                std.heap.c_allocator.free(closure_offsets);
                std.heap.c_allocator.free(buffer);
                return mkError("v3 file truncated in closure offsets");
            }
            for (0..num_closure.*) |i| {
                const off: *align(1) u64 = @ptrCast(buffer.ptr + p + i * @sizeOf(u64));
                closure_offsets[i] = @intCast(off.*);
            }
            p += num_closure.* * @sizeOf(u64);

            // Parse lib table and compute relocations.
            lib_relocs = parseLibRelocs(buffer.ptr, p, total) orelse {
                std.heap.c_allocator.free(closure_offsets);
                std.heap.c_allocator.free(buffer);
                return mkError("failed to parse lib relocation table");
            };
        }
    } else if (header.version != 2) {
        std.heap.c_allocator.free(buffer);
        return mkError("unsupported olean version");
    }

    defer if (closure_offsets.len > 0) std.heap.c_allocator.free(closure_offsets);
    defer if (lib_relocs.len > 0) std.heap.c_allocator.free(lib_relocs);

    compact.sortRegionsByBaseAddr(dep_regions.items);
    var reader = compact.Reader.init(
        buffer.ptr + data_off,
        data_size,
        base_addr + data_off,
        dep_regions.items,
        lib_relocs,
        closure_offsets,
    );
    const root = reader.read() orelse {
        std.heap.c_allocator.free(buffer);
        return mkError("failed to read region");
    };

    const region = alloc.lean_alloc_ctor(0, 2, @sizeOf(usize) * 3 + 1);
    rc.lean_inc(ofname);
    ctor.lean_ctor_set(region, 0, ofname);
    ctor.lean_ctor_set(region, 1, root);
    ctor.lean_ctor_set_usize(region, 2, @intCast(size));
    ctor.lean_ctor_set_usize(region, 3, @intCast(base_addr));
    ctor.lean_ctor_set_usize(region, 4, @intCast(@intFromPtr(root) -% @intFromPtr(buffer.ptr)));
    ctor.lean_ctor_set_uint8(region, @sizeOf(usize) * 5, 0);

    const pair = alloc.lean_alloc_ctor(0, 2, 0);
    ctor.lean_ctor_set(pair, 0, root);
    ctor.lean_ctor_set(pair, 1, region);
    return io_result.lean_io_result_mk_ok(pair);
}

/// Parse the closure fn-pointer relocation table from the buffer and compute
/// `(old_base, delta)` pairs by matching saved libs against currently loaded libs.
fn parseLibRelocs(buf: [*]u8, start: usize, total: usize) ?[]compact.LibReloc {
    var p = start;
    if (p + @sizeOf(u32) > total) return null;
    const num_libs: *align(1) u32 = @ptrCast(buf + p);
    p += @sizeOf(u32);
    if (num_libs.* == 0) return &.{};

    const current_libs = compact.getLoadedLibs();
    defer compact.freeLoadedLibs(current_libs);

    var relocs: std.ArrayList(compact.LibReloc) = .empty;
    var i: u32 = 0;
    while (i < num_libs.*) : (i += 1) {
        if (p + @sizeOf(usize) + @sizeOf(u32) > total) {
            relocs.deinit(std.heap.c_allocator);
            return null;
        }
        const old_base: *align(1) usize = @ptrCast(buf + p);
        p += @sizeOf(usize);
        const id_len: *align(1) u32 = @ptrCast(buf + p);
        p += @sizeOf(u32);
        if (p + id_len.* > total) {
            relocs.deinit(std.heap.c_allocator);
            return null;
        }
        const id = @as([*:0]const u8, @ptrCast(buf + p))[0..id_len.*];
        p += id_len.*;

        // Find this lib in the currently loaded set.
        var new_base: usize = 0;
        var found = false;
        for (current_libs) |lib| {
            const lib_name = std.mem.span(lib.name);
            if (std.mem.eql(u8, lib_name, id)) {
                new_base = lib.base_addr;
                found = true;
                break;
            }
        }
        if (!found) {
            relocs.deinit(std.heap.c_allocator);
            return null;
        }
        const delta: isize = @intCast(@as(isize, @intCast(new_base)) - @as(isize, @intCast(old_base.*)));
        relocs.append(std.heap.c_allocator, .{ .old_base = old_base.*, .delta = delta }) catch {
            relocs.deinit(std.heap.c_allocator);
            return null;
        };
    }
    std.mem.sort(compact.LibReloc, relocs.items, {}, cmpLibRelocByOldBase);
    return relocs.toOwnedSlice(std.heap.c_allocator) catch {
        relocs.deinit(std.heap.c_allocator);
        return null;
    };
}

fn cmpLibRelocByOldBase(_: void, a: compact.LibReloc, b: compact.LibReloc) bool {
    return a.old_base < b.old_base;
}

pub export fn lean_compacted_region_free(
    region: *anyopaque,
    _: Obj,
) callconv(.c) *anyopaque {
    const buffer = regionBuffer(region);
    const size = regionSize(region);
    ctor.lean_ctor_set(region, 1, object.lean_box(0));
    rc.lean_dec(region);
    std.heap.c_allocator.free(buffer[0..size]);
    return io_result.lean_io_result_mk_ok(object.lean_box(0));
}

fn testStringBytes(o: *anyopaque) []const u8 {
    const str: *lean.lean_string_object = @ptrCast(@alignCast(o));
    const size = if (str.m_size == 0) 0 else str.m_size - 1;
    return @as([*]const u8, @ptrCast(&str.m_data))[0..size];
}

test "compacted region save/read owns malloc buffer until free" {
    var path_buf: [128]u8 = undefined;
    const path = std.fmt.bufPrintZ(
        &path_buf,
        "/tmp/leanrt_zig_compact_api_{d}_{x}.olean",
        .{ c.getpid(), @intFromPtr(&path_buf) },
    ) catch unreachable;
    defer _ = c.unlink(path);

    const fname = string.lean_mk_string(path);
    defer rc.lean_dec(fname);
    const deps = array.lean_mk_empty_array();
    defer rc.lean_dec(deps);
    const data = string.lean_mk_string("saved");
    defer rc.lean_dec(data);

    const save_result = lean_compacted_region_save(fname, object.lean_box(0).?, data, deps, object.lean_box(0).?, 0, object.lean_box(0));
    defer rc.lean_dec(save_result);
    try testing.expect(io_result.lean_io_result_is_ok(save_result));

    const read_result = lean_compacted_region_read(fname, deps, object.lean_box(0));
    try testing.expect(io_result.lean_io_result_is_ok(read_result));
    const pair = io_result.lean_io_result_get_value(read_result).?;
    const root = ctor.lean_ctor_get(pair, 0).?;
    const region = ctor.lean_ctor_get(pair, 1).?;

    try testing.expectEqualStrings("saved", testStringBytes(root));
    var st: c.struct_stat = undefined;
    try testing.expectEqual(@as(c_int, 0), c.stat(path, &st));
    try testing.expectEqual(@as(usize, @intCast(st.st_size)), regionSize(region));
    try testing.expectEqual(@as(usize, OLEAN_HEADER_SIZE + @sizeOf(usize)), regionBufferOffset(region));
    try testing.expect(regionBufferOffset(region) < regionSize(region));

    const free_result = lean_compacted_region_free(region, object.lean_box(0));
    defer rc.lean_dec(free_result);
    try testing.expect(io_result.lean_io_result_is_ok(free_result));
}

fn compactClosureTestFn(_: Obj) callconv(.c) Obj {
    return object.lean_box(0);
}

test "compacted region save/read closure with v3 format" {
    var path_buf: [128]u8 = undefined;
    const path = std.fmt.bufPrintZ(
        &path_buf,
        "/tmp/leanrt_zig_compact_closure_{d}_{x}.olean",
        .{ c.getpid(), @intFromPtr(&path_buf) },
    ) catch unreachable;
    defer _ = c.unlink(path);

    const fname = string.lean_mk_string(path);
    defer rc.lean_dec(fname);
    const deps = array.lean_mk_empty_array();
    defer rc.lean_dec(deps);

    // Build a closure with one captured string argument.
    const captured = string.lean_mk_string(@ptrCast(@alignCast("captured")));
    const closure_obj = alloc.lean_alloc_closure(@ptrCast(@constCast(&compactClosureTestFn)), 2, 1);
    defer rc.lean_dec(closure_obj);
    const closure: *lean.lean_closure_object = @ptrCast(@alignCast(closure_obj));
    const slots: [*]Obj = @ptrCast(@alignCast(&closure.m_objs));
    slots[0] = captured;

    // Save with allow_closures=true → v3 format.
    const save_result = lean_compacted_region_save(
        fname, object.lean_box(0).?, closure_obj, deps, object.lean_box(0).?, 1, object.lean_box(0),
    );
    defer rc.lean_dec(save_result);
    try testing.expect(io_result.lean_io_result_is_ok(save_result));

    // Read back.
    const read_result = lean_compacted_region_read(fname, deps, object.lean_box(0));
    try testing.expect(io_result.lean_io_result_is_ok(read_result));
    const pair = io_result.lean_io_result_get_value(read_result).?;
    const root = ctor.lean_ctor_get(pair, 0).?;
    const region = ctor.lean_ctor_get(pair, 1).?;

    // Verify closure structure.
    try testing.expectEqual(lean.LeanClosure, compact.ptrTag(root));
    const roundtrip: *lean.lean_closure_object = @ptrCast(@alignCast(root));
    try testing.expectEqual(@as(u16, 2), roundtrip.m_arity);
    try testing.expectEqual(@as(u16, 1), roundtrip.m_num_fixed);
    // Same process → fn pointer should match (delta = 0).
    try testing.expectEqual(closure.m_fun, roundtrip.m_fun);
    // Captured arg preserved.
    const rt_slots: [*]Obj = @ptrCast(@alignCast(&roundtrip.m_objs));
    try testing.expectEqualStrings("captured", testStringBytes(rt_slots[0].?));

    const free_result = lean_compacted_region_free(region, object.lean_box(0));
    defer rc.lean_dec(free_result);
    try testing.expect(io_result.lean_io_result_is_ok(free_result));
}
