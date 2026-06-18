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
    if (allow_closures) {
        return mkError("closures not supported in first Zig compact port");
    }

    var dep_regions = compact.extractDepRegions(odep_regions);
    defer dep_regions.deinit(std.heap.c_allocator);

    const base_addr = nameHash(mod) & ~@as(usize, ALIGN - 1);
    const compactor_obj = mkCompactor(base_addr, dep_regions.items, false);
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

    var header_buf: [OLEAN_HEADER_SIZE]u8 = undefined;
    @memset(&header_buf, 0);
    @memcpy(header_buf[0..5], "olean");
    header_buf[5] = 2; // version
    header_buf[6] = 1; // flags: GMP
    const file_base_addr = comp.base_addr + file_offset;
    const base_addr_bytes = std.mem.asBytes(&file_base_addr);
    @memcpy(header_buf[7 + 33 + 40 .. 7 + 33 + 40 + base_addr_bytes.len], base_addr_bytes);

    if (c.write(fd, &header_buf, OLEAN_HEADER_SIZE) != OLEAN_HEADER_SIZE) {
        return mkError("failed to write header");
    }

    const root_offset = comp.compactRoot(odata);

    const data = comp.data();
    const data_size = comp.size() - file_offset - OLEAN_HEADER_SIZE;
    if (c.write(fd, data + file_offset + OLEAN_HEADER_SIZE, data_size) != data_size) {
        return mkError("failed to write data");
    }

    _ = root_offset;

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
    if (header.version != 2) {
        std.heap.c_allocator.free(buffer);
        return mkError("unsupported olean version");
    }
    const base_addr = header.base_addr;
    const data_off = OLEAN_HEADER_SIZE;
    const data_size = size - OLEAN_HEADER_SIZE;

    compact.sortRegionsByBaseAddr(dep_regions.items);
    var reader = compact.Reader.init(buffer.ptr + data_off, data_size, base_addr + data_off, dep_regions.items);
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
