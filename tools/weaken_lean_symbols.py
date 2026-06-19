#!/usr/bin/env python3
"""Weaken only `lean_*` C-linkage symbols in a Mach-O archive.

Sets the `N_WEAK_DEF` bit (0x80) in the n_desc field of nlist64 entries
for symbols whose name starts with `_lean_` (the macOS C-linkage convention).
C++ mangled symbols such as `__ZN4lean...` are left untouched.

Operates directly on the raw archive bytes — no extraction/reinsertion,
so duplicate basenames (e.g. multiple `init_module.cpp.o`) are preserved.

Usage:  weaken_lean_symbols.py <archive.a>
"""

import struct
import sys
from pathlib import Path

N_WEAK_DEF = 0x80

MH_MAGIC_64 = 0xFEEDFACF
FAT_MAGIC = 0xCAFEBABE
FAT_MAGIC_64 = 0xCAFEBABF
LC_SYMTAB = 0x02

NLIST64_SIZE = 16
N_DESC_OFFSET = 6
N_EXT = 0x01
N_TYPE_MASK = 0x0E
N_UNDF = 0x00


def find_lean_symbols_in_macho(data: bytes, slice_offset: int = 0):
    """Yield (absolute_offset_of_n_desc, current_desc) for each `_lean_*`
    defined external symbol in a Mach-O slice."""
    if len(data) < 32:
        return

    magic = struct.unpack_from("<I", data, 0)[0]
    if magic != MH_MAGIC_64:
        return

    ncmds = struct.unpack_from("<I", data, 16)[0]

    cmd_offset = 32
    symtab_off = strtab_off = symtab_ns = strtab_sz = None

    for _ in range(ncmds):
        if cmd_offset + 8 > len(data):
            break
        cmd = struct.unpack_from("<I", data, cmd_offset)[0]
        cmdsize = struct.unpack_from("<I", data, cmd_offset + 4)[0]
        if cmd == LC_SYMTAB:
            symtab_off = struct.unpack_from("<I", data, cmd_offset + 8)[0]
            symtab_ns = struct.unpack_from("<I", data, cmd_offset + 12)[0]
            strtab_off = struct.unpack_from("<I", data, cmd_offset + 16)[0]
            strtab_sz = struct.unpack_from("<I", data, cmd_offset + 20)[0]
            break
        cmd_offset += cmdsize

    if symtab_off is None:
        return

    for i in range(symtab_ns):
        nl = symtab_off + i * NLIST64_SIZE
        if nl + NLIST64_SIZE > len(data):
            break
        n_strx = struct.unpack_from("<I", data, nl)[0]
        n_type = data[nl + 4]
        n_desc = struct.unpack_from("<H", data, nl + N_DESC_OFFSET)[0]

        if (n_type & N_TYPE_MASK) == N_UNDF:
            continue
        if not (n_type & N_EXT):
            continue
        if n_strx >= strtab_sz or strtab_off + n_strx >= len(data):
            continue

        name_start = strtab_off + n_strx
        name_end = data.find(b'\x00', name_start, name_start + 256)
        if name_end < 0:
            continue
        name = data[name_start:name_end].decode('ascii', errors='replace')

        if not name.startswith("_lean_"):
            continue
        if n_desc & N_WEAK_DEF:
            continue

        yield (slice_offset + nl + N_DESC_OFFSET, n_desc)


def process_fat_slice(data: bytes, base: int, arch_offset: int, arch_size: int):
    """Process a single architecture slice within a fat binary."""
    slice_data = data[arch_offset:arch_offset + arch_size]
    magic = struct.unpack_from("<I", slice_data, 0)[0]
    if magic == MH_MAGIC_64:
        yield from find_lean_symbols_in_macho(slice_data, base + arch_offset)
    elif magic == FAT_MAGIC or magic == FAT_MAGIC_64:
        # Nested fat (unlikely but handle it)
        is_64 = magic == FAT_MAGIC_64
        nfat = struct.unpack_from(">I", slice_data, 4)[0]
        asz = 32 if is_64 else 20
        for i in range(nfat):
            off = 8 + i * asz
            if is_64:
                ao = struct.unpack_from(">Q", slice_data, off + 8)[0]
                asz_v = struct.unpack_from(">Q", slice_data, off + 16)[0]
            else:
                ao = struct.unpack_from(">I", slice_data, off + 8)[0]
                asz_v = struct.unpack_from(">I", slice_data, off + 12)[0]
            yield from process_fat_slice(
                slice_data, base + arch_offset, ao, asz_v
            )


def process_archive(archive_path: str) -> int:
    """Process a Mach-O archive in-place by modifying raw bytes."""
    ar = Path(archive_path)
    if not ar.exists():
        print(f"error: {ar} not found", file=sys.stderr)
        return 1

    data = bytearray(ar.read_bytes())

    # Parse ar archive format
    # Global header: "!<arch>\n" (8 bytes)
    if data[:8] != b"!<arch>\n":
        print(f"error: {ar} is not an ar archive", file=sys.stderr)
        return 1

    pos = 8
    count = 0
    while pos < len(data):
        # ar member header: 60 bytes
        if pos + 60 > len(data):
            break

        # Header fields: name(16) date(12) uid(6) gid(6) mode(8) size(10) magic(2)
        name_field = data[pos:pos + 16]
        size_str = data[pos + 48:pos + 58].strip()
        magic = data[pos + 58:pos + 60]

        if magic != b"`\n":
            break

        try:
            member_size = int(size_str)
        except ValueError:
            break

        member_data_start = pos + 60
        member_data_end = member_data_start + member_size

        if member_data_end > len(data):
            break

        member_name = name_field.decode('ascii', errors='replace').rstrip()

        # Handle BSD extended name format: "#1/N" means the real name is
        # N bytes at the start of the member data.
        name_prefix_len = 0
        if member_name.startswith("#1/"):
            try:
                name_prefix_len = int(member_name[3:])
                real_name = data[member_data_start:member_data_start + name_prefix_len]
                member_name = real_name.rstrip(b'\x00').decode('ascii', errors='replace')
            except (ValueError, UnicodeDecodeError):
                pass

        # Skip SYMDEF
        if not member_name.startswith("__.SYMDEF"):
            # The actual Mach-O data starts after the name prefix (if any)
            content_start = member_data_start + name_prefix_len
            member_data = bytes(data[content_start:member_data_end])

            # Find all _lean_* symbols to weaken in this member
            magic_val = struct.unpack_from("<I", member_data, 0)[0] if len(member_data) >= 4 else 0

            offsets = []
            if magic_val == MH_MAGIC_64:
                offsets = list(find_lean_symbols_in_macho(member_data, content_start))
            elif magic_val == FAT_MAGIC or magic_val == FAT_MAGIC_64:
                is_64 = magic_val == FAT_MAGIC_64
                nfat = struct.unpack_from(">I", member_data, 4)[0]
                asz = 32 if is_64 else 20
                for i in range(nfat):
                    off = 8 + i * asz
                    if is_64:
                        ao = struct.unpack_from(">Q", member_data, off + 8)[0]
                        asz_v = struct.unpack_from(">Q", member_data, off + 16)[0]
                    else:
                        ao = struct.unpack_from(">I", member_data, off + 8)[0]
                        asz_v = struct.unpack_from(">I", member_data, off + 12)[0]
                    offsets.extend(
                        process_fat_slice(member_data, content_start, ao, asz_v)
                    )

            for abs_offset, old_desc in offsets:
                new_desc = old_desc | N_WEAK_DEF
                struct.pack_into("<H", data, abs_offset, new_desc)
                count += 1

        # Advance to next member (members are padded to even byte boundaries)
        pos = member_data_end
        if pos % 2 == 1:
            pos += 1

    if count > 0:
        ar.write_bytes(bytes(data))

    print(f"Weakened {count} lean_* symbol(s) in {ar.name}")
    return 0


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print(f"usage: {sys.argv[0]} <archive.a>", file=sys.stderr)
        sys.exit(2)
    sys.exit(process_archive(sys.argv[1]))