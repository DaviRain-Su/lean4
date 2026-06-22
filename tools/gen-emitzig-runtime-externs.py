#!/usr/bin/env python3
# Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.

"""Generate EmitZig runtime extern declarations from lean.h and known extras."""

from __future__ import annotations

import pathlib
import re
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
LEAN_H = ROOT / "src" / "include" / "lean" / "lean.h"
INLINE_HELPERS = ROOT / "src" / "Lean" / "Compiler" / "LCNF" / "EmitZig" / "InlineHelpers.lean"
OUT = ROOT / "src" / "Lean" / "Compiler" / "LCNF" / "EmitZig" / "RuntimeExterns.lean"
ZIG_RT = ROOT / "src" / "runtime" / "zig"

TYPE_REPLACEMENTS = [
    (r"\bunsigned char\b", "u8"),
    (r"\bunsigned int\b", "c_uint"),
    (r"\bunsigned long\b", "c_ulong"),
    (r"\bunsigned\b", "c_uint"),
    (r"\buint8_t\b", "u8"),
    (r"\buint16_t\b", "u16"),
    (r"\buint32_t\b", "u32"),
    (r"\buint64_t\b", "u64"),
    (r"\bptrdiff_t\b", "usize"),
    (r"\bssize_t\b", "usize"),
    (r"\bint\b", "c_int"),
    (r"\bint8_t\b", "u8"),
    (r"\bint16_t\b", "u16"),
    (r"\bint32_t\b", "u32"),
    (r"\bint64_t\b", "u64"),
    (r"\bsize_t\b", "usize"),
    (r"\bdouble\b", "f64"),
    (r"\bfloat\b", "f32"),
    (r"\bbool\b", "bool"),
    (r"\bvoid\b", "void"),
    (r"\bchar\b", "u8"),
    (r"\blean_obj_arg\b", "LeanObj"),
    (r"\bb_lean_obj_arg\b", "LeanObj"),
    (r"\bu_lean_obj_arg\b", "LeanObj"),
    (r"\bb_lean_obj_res\b", "LeanObj"),
    (r"\blean_obj_res\b", "LeanObj"),
    (r"\blean_object\s*\*", "LeanObj"),
    (r"\bconst\s+lean_object\s*\*", "LeanObj"),
    (r"\blean_string_object\s*\*", "LeanObj"),
    (r"\blean_thunk_object\s*\*", "LeanObj"),
    (r"\blean_task_object\s*\*", "LeanObj"),
    (r"\bchar const\s*\*", "[*:0]const u8"),
    (r"\bconst char\s*\*", "[*:0]const u8"),
    (r"\bconst\s+char\s*\*", "[*c]const u8"),
    (r"\bchar\s*\*", "[*c]u8"),
    (r"\bconst\s+uint8_t\s*\*", "[*c]const u8"),
    (r"\buint8_t\s*\*", "[*c]u8"),
    (r"\bObj\b", "LeanObj"),
]

MATH_FUNCS = [
    ("sin", "f64", "f64"),
    ("sinf", "f32", "f32"),
    ("cos", "f64", "f64"),
    ("cosf", "f32", "f32"),
    ("tan", "f64", "f64"),
    ("tanf", "f32", "f32"),
    ("asin", "f64", "f64"),
    ("asinf", "f32", "f32"),
    ("acos", "f64", "f64"),
    ("acosf", "f32", "f32"),
    ("atan", "f64", "f64"),
    ("atanf", "f32", "f32"),
    ("atan2", "f64", "f64", "f64"),
    ("atan2f", "f32", "f32", "f32"),
    ("sinh", "f64", "f64"),
    ("sinhf", "f32", "f32"),
    ("cosh", "f64", "f64"),
    ("coshf", "f32", "f32"),
    ("tanh", "f64", "f64"),
    ("tanhf", "f32", "f32"),
    ("asinh", "f64", "f64"),
    ("asinhf", "f32", "f32"),
    ("acosh", "f64", "f64"),
    ("acoshf", "f32", "f32"),
    ("atanh", "f64", "f64"),
    ("atanhf", "f32", "f32"),
    ("exp", "f64", "f64"),
    ("expf", "f32", "f32"),
    ("exp2", "f64", "f64"),
    ("exp2f", "f32", "f32"),
    ("log", "f64", "f64"),
    ("logf", "f32", "f32"),
    ("log2", "f64", "f64"),
    ("log2f", "f32", "f32"),
    ("log10", "f64", "f64"),
    ("log10f", "f32", "f32"),
    ("pow", "f64", "f64", "f64"),
    ("powf", "f32", "f32", "f32"),
    ("sqrt", "f64", "f64"),
    ("sqrtf", "f32", "f32"),
    ("cbrt", "f64", "f64"),
    ("cbrtf", "f32", "f32"),
    ("fabs", "f64", "f64"),
    ("fabsf", "f32", "f32"),
    ("floor", "f64", "f64"),
    ("floorf", "f32", "f32"),
    ("ceil", "f64", "f64"),
    ("ceilf", "f32", "f32"),
    ("round", "f64", "f64"),
    ("roundf", "f32", "f32"),
]

# Symbols referenced by stdlib/runtime but not declared in lean.h.
# Defined locally in `EmitZig.lean` preamble (not as runtime externs).
# typedef names used as parameter types in lean.h (unnamed parameters).
TYPEDEF_ARG_TYPES = {
    "lean_external_finalize_proc": "?*anyopaque",
    "lean_external_foreach_proc": "?*anyopaque",
    "b_lean_obj_arg": "LeanObj",
    "lean_obj_arg": "LeanObj",
    "u_lean_obj_arg": "LeanObj",
    "b_lean_obj_res": "LeanObj",
    "lean_obj_res": "LeanObj",
    "lean_obj_arg": "LeanObj",
}

EMITZIG_LOCAL_FUNCS = {
    "lean_io_result_is_ok",
    "lean_io_result_get_value",
}

EXTRA_FUNCS: list[tuple[str, str, str]] = [
    ("lean_get_githash", "LeanObj", "LeanObj"),
    ("lean_version_get_major", "LeanObj", "LeanObj"),
    ("lean_version_get_minor", "LeanObj", "LeanObj"),
    ("lean_version_get_patch", "LeanObj", "LeanObj"),
    ("lean_version_get_is_release", "u8", "LeanObj"),
    ("lean_version_get_special_desc", "LeanObj", "LeanObj"),
    ("lean_internal_is_stage0", "u8", "LeanObj"),
    ("lean_internal_has_llvm_backend", "u8", "LeanObj"),
    ("lean_internal_get_hardware_concurrency", "u32", "LeanObj"),
    ("lean_get_current_time", "LeanObj", ""),
    ("lean_libuv_version", "LeanObj", "LeanObj"),
    ("lean_windows_get_next_transition", "LeanObj", "LeanObj, u64, u8"),
    ("lean_get_windows_local_timezone_id_at", "LeanObj", "u64"),
    ("lean_apply_n", "LeanObj", "LeanObj, c_uint, [*c]LeanObj"),
    ("lean_apply_m", "LeanObj", "LeanObj, c_uint, [*c]LeanObj"),
    ("lean_dbg_stack_trace", "LeanObj", "LeanObj"),
    ("lean_byte_array_copy_slice", "LeanObj", "LeanObj, LeanObj, LeanObj, LeanObj, LeanObj, u8"),
    ("lean_byteslice_beq", "u8", "LeanObj, LeanObj"),
    ("lean_chmod", "LeanObj", "LeanObj, u32"),
    ("lean_sharecommon_eq", "u8", "LeanObj, LeanObj"),
    ("lean_sharecommon_hash", "u64", "LeanObj"),
    ("lean_state_sharecommon", "LeanObj", "LeanObj, LeanObj, LeanObj"),
    ("lean_sharecommon_quick", "LeanObj", "LeanObj"),
    ("lean_st_ref_take", "LeanObj", "LeanObj"),
    ("lean_st_ref_ptr_eq", "u8", "LeanObj, LeanObj"),
    ("lean_option_get_or_block", "LeanObj", "LeanObj"),
    ("lean_io_map_task", "LeanObj", "LeanObj, LeanObj, LeanObj, u8"),
    ("lean_io_bind_task", "LeanObj", "LeanObj, LeanObj, LeanObj, u8"),
    ("lean_io_process_child_kill", "LeanObj", "LeanObj, LeanObj"),
    ("lean_io_process_child_pid", "u32", "LeanObj, LeanObj"),
    ("lean_io_process_child_take_stdin", "LeanObj", "LeanObj, LeanObj"),
    ("lean_io_process_child_try_wait", "LeanObj", "LeanObj, LeanObj"),
    ("lean_io_process_child_wait", "LeanObj", "LeanObj, LeanObj"),
    ("lean_io_get_task_state", "u8", "LeanObj"),
    ("lean_io_wait_any", "LeanObj", "LeanObj"),
    ("lean_io_eprintln", "LeanObj", "LeanObj"),
    ("lean_io_error_to_string", "LeanObj", "LeanObj"),
    ("lean_string_front", "u32", "LeanObj"),
    ("lean_nat_land", "LeanObj", "LeanObj, LeanObj"),
    ("lean_nat_lor", "LeanObj", "LeanObj, LeanObj"),
    ("lean_nat_lxor", "LeanObj", "LeanObj, LeanObj"),
    ("lean_nat_shiftr", "LeanObj", "LeanObj, LeanObj"),
    ("lean_sorry", "LeanObj", "u8"),
    ("lean_system_platform_nbits", "LeanObj", "LeanObj"),
    ("lean_system_platform_windows", "u8", "LeanObj"),
    ("lean_system_platform_osx", "u8", "LeanObj"),
    ("lean_system_platform_emscripten", "u8", "LeanObj"),
    ("lean_string_to_utf8", "LeanObj", "LeanObj"),
    ("lean_string_from_utf8_unchecked", "LeanObj", "LeanObj"),
    ("exit", "noreturn", "c_int"),
    ("lean_setup_args", "[*c][*c]u8", "c_int, [*c][*c]u8"),
    ("lean_run_main", "LeanObj", "MainFn, c_int, [*c][*c]u8"),
    ("lean_initialize", "void", ""),
    ("lean_initialize_runtime_module", "void", ""),
    ("lean_initialize_thread", "void", ""),
    ("lean_init_task_manager", "void", ""),
    ("lean_finalize_task_manager", "void", ""),
    ("lean_io_mark_end_initialization", "void", ""),
    ("lean_io_result_show_error", "void", "LeanObj"),
    ("lean_io_timeit", "LeanObj", "LeanObj, LeanObj"),
    ("lean_io_allocprof", "LeanObj", "LeanObj, LeanObj"),
    ("lean_array_get_panic", "LeanObj", "LeanObj"),
    ("lean_mk_string", "LeanObj", "[*c]const u8"),
    ("lean_mk_string_unchecked", "LeanObj", "[*c]const u8, usize, usize"),
    ("lean_string_utf8_get_fast_cold", "u32", "[*:0]const u8, usize, usize, u8"),
    ("lean_runtime_mark_persistent", "LeanObj", "LeanObj"),
]


# Manual overrides for signatures the C-header parser cannot reconstruct correctly.
OVERRIDE_SIGNATURES: dict[str, tuple[str, list[str]]] = {
    "lean_big_int64_to_int": ("LeanObj", ["i64"]),
    "lean_float_once_cold": ("f64", ["*f64", "*lean_once_cell_t", "*const fn() callconv(.c) f64"]),
    "lean_float32_once_cold": ("f32", ["*f32", "*lean_once_cell_t", "*const fn() callconv(.c) f32"]),
    "lean_obj_once_cold": ("LeanObj", ["*LeanObj", "*lean_once_cell_t", "*const fn() callconv(.c) LeanObj"]),
    "lean_uint8_once_cold": ("u8", ["*u8", "*lean_once_cell_t", "*const fn() callconv(.c) u8"]),
    "lean_uint16_once_cold": ("u16", ["*u16", "*lean_once_cell_t", "*const fn() callconv(.c) u16"]),
    "lean_uint32_once_cold": ("u32", ["*u32", "*lean_once_cell_t", "*const fn() callconv(.c) u32"]),
    "lean_uint64_once_cold": ("u64", ["*u64", "*lean_once_cell_t", "*const fn() callconv(.c) u64"]),
    "lean_usize_once_cold": ("usize", ["*usize", "*lean_once_cell_t", "*const fn() callconv(.c) usize"]),
}






def load_inline_helper_names() -> set[str]:
    text = INLINE_HELPERS.read_text()
    names = set(re.findall(r'\("([^"]+)"', text))
    # Also pick up names from bignumExternHelperEntries extern lines.
    names.update(re.findall(r'extern fn (lean_\w+)', text))
    return names


def zig_type_to_extern(zig_type: str) -> str:
    t = zig_type.strip()
    mapping = {
        "?*anyopaque": "LeanObj",
        "*anyopaque": "LeanObj",
        "*lean.lean_task_object": "LeanObj",
        "?*lean.lean_task_object": "LeanObj",
        "PrintFn": "?*anyopaque",
        "*InAddrStorage": "?*anyopaque",
        "*const c.struct_in_addr": "?*anyopaque",
        "*const c.struct_in6_addr": "?*anyopaque",
        "*c.struct_in_addr": "?*anyopaque",
        "*c.struct_in6_addr": "?*anyopaque",
        "*const c.sockaddr": "?*anyopaque",
        "*c.sockaddr_storage": "?*anyopaque",
        "usize": "usize",
        "u8": "u8",
        "u16": "u16",
        "u32": "u32",
        "u64": "u64",
        "i8": "i8",
        "i16": "i16",
        "i32": "i32",
        "i64": "i64",
        "isize": "isize",
        "f32": "f32",
        "f64": "f64",
        "bool": "bool",
        "void": "void",
        "c_int": "c_int",
        "c_uint": "c_uint",
        "Obj": "LeanObj",
    }
    return mapping.get(t, t)


def zig_rt_export_signatures() -> dict[str, tuple[str, list[str]]]:
    sigs: dict[str, tuple[str, list[str]]] = {}
    local_sigs: dict[str, tuple[str, list[str]]] = {}
    fn_pat = re.compile(
        r"(?m)^(?:pub\s+)?(?:export\s+)?fn (\w+)\((.*?)\)\s*(?:callconv\(\.c\)\s*)?([^\s{]+)",
        re.DOTALL,
    )
    export_pat = re.compile(
        r'@export\(&(\w+),\s*\.\{\s*\.name\s*=\s*"([^"]+)"',
        re.DOTALL,
    )
    for path in ZIG_RT.rglob("*.zig"):
        text = path.read_text(errors="replace")
        for m in fn_pat.finditer(text):
            name, args_blob, ret = m.group(1), m.group(2), m.group(3)
            arg_types = [zig_type_to_extern(arg.split(":", 1)[1].strip()) for arg in split_args(args_blob) if ":" in arg]
            local_sigs[name] = (zig_type_to_extern(ret), arg_types)
            if name.startswith("lean_"):
                sigs[name] = local_sigs[name]
        for m in export_pat.finditer(text):
            local_name, export_name = m.group(1), m.group(2)
            if not export_name.startswith("lean_"):
                continue
            sig = local_sigs.get(local_name)
            if sig is not None:
                sigs[export_name] = sig
    return sigs


def normalize_type(c_type: str) -> str:
    t = re.sub(r"\s+", " ", c_type.strip())
    t = t.replace("const ", "const ")
    if "(*)" in t or "(*" in t:
        return "?*anyopaque"
    for pat, repl in TYPE_REPLACEMENTS:
        t = re.sub(pat, repl, t)
    t = re.sub(r"\s+", " ", t).strip()
    if t == "":
        return "void"
    if t.endswith("*"):
        inner = t[:-1]
        if inner in ("LeanObj", "u8"):
            return "LeanObj" if inner == "LeanObj" else "[*c]u8"
        return "?*anyopaque"
    return t


def split_args(arg_str: str) -> list[str]:
    if not arg_str.strip():
        return []
    args: list[str] = []
    cur: list[str] = []
    depth = 0
    for ch in arg_str:
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        if ch == "," and depth == 0:
            args.append("".join(cur).strip())
            cur = []
        else:
            cur.append(ch)
    tail = "".join(cur).strip()
    if tail:
        args.append(tail)
    return args


def parse_arg(arg: str) -> str:
    arg = arg.strip()
    if not arg or arg == "void":
        return ""
    if arg in TYPEDEF_ARG_TYPES:
        return TYPEDEF_ARG_TYPES[arg]
    # Strip parameter names, keep type.  Unnamed parameters (e.g. `b_lean_obj_arg`)
    # are the type token itself.
    type_part = re.sub(r"\b\w+\s*$", "", arg).strip()
    if not type_part:
        type_part = arg
    if type_part in TYPEDEF_ARG_TYPES:
        return TYPEDEF_ARG_TYPES[type_part]
    return normalize_type(type_part)


def parse_signature(ret: str, args: str) -> tuple[str, list[str]]:
    noreturn = "LEAN_NORETURN" in ret
    ret = ret.replace("LEAN_NORETURN", "").strip()
    if noreturn and ret == "void":
        zret = "noreturn void"
    else:
        zret = normalize_type(ret)
    zargs = [parse_arg(a) for a in split_args(args)]
    zargs = [a for a in zargs if a]
    return zret, zargs


def parse_lean_h(text: str) -> dict[str, tuple[str, list[str]]]:
    funcs: dict[str, tuple[str, list[str]]] = {}

    export_pat = re.compile(
        r"LEAN_EXPORT\s+(?:LEAN_NORETURN\s+)?((?:const\s+)?[\w\s\*]+?)\s+(lean_\w+)\s*\(([^;]*)\)\s*;",
        re.MULTILINE,
    )
    for m in export_pat.finditer(text):
        args_blob = m.group(3)
        if "(*" in args_blob:
            argc = 0 if not args_blob.strip() else args_blob.count(",") + 1
            funcs[m.group(2)] = simplify_complex_signature(
                m.group(2), parse_signature(m.group(1), "")[0], ["LeanObj"] * argc
            )
        else:
            funcs[m.group(2)] = parse_signature(m.group(1), args_blob)

    inline_pat = re.compile(
        r"static\s+inline\s+((?:const\s+)?[\w\s\*]+?)\s+(lean_\w+)\s*\(([^)]*)\)\s*\{",
        re.MULTILINE,
    )
    for m in inline_pat.finditer(text):
        funcs.setdefault(m.group(2), parse_signature(m.group(1), m.group(3)))

    return funcs


def simplify_complex_signature(name: str, ret: str, args: list[str]) -> tuple[str, list[str]]:
    blob = " ".join([ret, *args])
    if "(*" in blob or "fn (" in blob or "." in ret:
        zret = "LeanObj" if ret not in {"void", "noreturn", "bool", "u8", "u32", "u64", "usize", "f32", "f64"} else ret
        zargs = ["LeanObj" if a.startswith(("?", "*", "fn")) or "fn" in a else a for a in args]
        return zret, zargs
    return ret, args

LEAN_SCALAR_TYPES: dict[str, str] = {
    "Char": "u32",
    "Bool": "u8",
    "UInt8": "u8",
    "UInt16": "u16",
    "UInt32": "u32",
    "UInt64": "u64",
    "USize": "usize",
    "Int8": "u8",
    "Int16": "u16",
    "Int32": "u32",
    "Int64": "u64",
    "ISize": "usize",
    "Float": "f64",
    "Float32": "f32",
    "FS.Mode": "u8",
}


def normalize_lean_type(t: str) -> str:
    """Strip borrow annotations and simple outer parentheses from a Lean type string."""
    t = t.strip()
    while t.startswith("@&"):
        t = t[2:].strip()
    while t.startswith("(") and t.endswith(")"):
        inner = t[1:-1].strip()
        depth = 0
        has_nested = False
        for ch in inner:
            if ch == "(":
                depth += 1
            elif ch == ")":
                depth -= 1
            if depth < 0:
                has_nested = True
                break
        if has_nested:
            break
        if ":" in inner:
            inner = inner.split(":", 1)[1].strip()
        t = inner
    return t


def lean_type_to_zig(t: str) -> str:
    """Map a Lean type (as written in an extern declaration) to a Zig extern type."""
    t = normalize_lean_type(t)
    return LEAN_SCALAR_TYPES.get(t, "LeanObj")


def split_lean_arrow(t: str) -> list[str]:
    """Split a Lean type on top-level non-dependent arrows '→' or '->'."""
    parts: list[str] = []
    depth = 0
    cur: list[str] = []
    i = 0
    while i < len(t):
        ch = t[i]
        if ch in "([{":
            depth += 1
            cur.append(ch)
        elif ch in ")]}":
            depth -= 1
            cur.append(ch)
        elif depth == 0 and ch == "→":
            parts.append("".join(cur).strip())
            cur = []
        elif depth == 0 and t.startswith("->", i):
            parts.append("".join(cur).strip())
            cur = []
            i += 1
        else:
            cur.append(ch)
        i += 1
    tail = "".join(cur).strip()
    if tail:
        parts.append(tail)
    return parts


def strip_io_return(ret: str) -> str:
    """Strip BaseIO wrapper from a return type; leave IO/EIO intact.

    C externs with BaseIO return type return their unwrapped value directly,
    whereas IO/EIO externs return the boxed IO result object (lean_object*).
    """
    t = normalize_lean_type(ret)
    if t.startswith("BaseIO "):
        return t[len("BaseIO "):].strip()
    return t


def infer_default_arg_type(expr: str) -> str:
    """Infer the Lean type of a default argument expression for extern ABI purposes."""
    expr = expr.strip()
    if expr == "true" or expr == "false":
        return "Bool"
    return "LeanObj"


def parse_param_group(group: str) -> list[str]:
    """Parse a single parameter group like 's : String', 'ss1 ss2 : Substring.Raw',
    or 'exclusive := true' into a list of Lean type strings."""
    group = group.strip()
    if not group:
        return []

    if ":=" in group:
        lhs, rhs = group.split(":=", 1)
        lhs = lhs.strip()
        if ":" in lhs:
            names_part, type_part = lhs.rsplit(":", 1)
            type_part = type_part.strip()
        else:
            names_part = lhs
            type_part = infer_default_arg_type(rhs)
        binder_count = len([b for b in re.split(r"[,\s]+", names_part.strip()) if b])
        return [type_part] * binder_count

    if ":" in group:
        names_part, type_part = group.rsplit(":", 1)
        type_part = type_part.strip()
        binder_count = len([b for b in re.split(r"[,\s]+", names_part.strip()) if b])
        return [type_part] * binder_count

    # Untyped parameter (rare); assume one object arg.
    return [group]


def parse_extern_after_attr(rest: str) -> tuple[str, list[str], str] | None:
    """Parse the declaration header following an `@[extern ...]` attribute.

    Returns (decl_name, arg_types, ret_type) with Lean types as strings.
    """
    s = rest.strip()

    # Skip optional `set_option ... in` or `attribute ... in` wrappers.
    while True:
        m = re.match(r"(?:set_option|attribute)\s+[^ ]+(?:\s+[^ ]+)?\s+in\b", s)
        if not m:
            break
        s = s[m.end():].lstrip()

    # Match declaration keyword and name (allow "unsafe def").
    m = re.match(r"(?:protected\s+|private\s+|public\s+)?(?:unsafe\s+)?(?:opaque|def|axiom)\s+([^\s:(]+)\s*", s)
    if not m:
        return None
    s = s[m.end():]

    # Parse explicit (...) and implicit {...} parameter groups, handling nested brackets.
    # Only explicit (...) params are part of the runtime ABI; implicit {...} params
    # (universe levels, type parameters) are erased by the compiler.
    arg_types: list[str] = []
    while s.startswith("(") or s.startswith("{"):
        open_ch = s[0]
        close_ch = ")" if open_ch == "(" else "}"
        s = s[1:]
        depth = 1
        j = 0
        while j < len(s) and depth > 0:
            if s[j] == open_ch:
                depth += 1
            elif s[j] == close_ch:
                depth -= 1
            j += 1
        if depth != 0:
            return None
        group = s[: j - 1].strip()
        s = s[j:].lstrip()
        if open_ch == "(":
            arg_types.extend(parse_param_group(group))

    # Match colon and capture the return type, allowing multi-line indented types.
    if not s.startswith(":"):
        return None
    s = s[1:].lstrip()

    lines = s.splitlines()
    collected: list[str] = []
    for idx, line in enumerate(lines):
        stripped = line.strip()
        if ":=" in stripped:
            part = stripped.split(":=", 1)[0]
            if part.strip():
                collected.append(part)
            break
        if idx == 0:
            collected.append(line)
        elif stripped == "":
            break
        elif not line[0].isspace():
            break
        else:
            collected.append(line)
    ret = " ".join(collected).strip()

    # Curried return types add further parameters.
    ret_for_args = strip_io_return(ret)
    arrow_parts = split_lean_arrow(ret_for_args)
    if len(arrow_parts) > 1:
        arg_types.extend(arrow_parts[:-1])
        ret_type = strip_io_return(arrow_parts[-1])
    else:
        ret_type = ret_for_args

    return m.group(1), arg_types, ret_type


def scan_stdlib_extern_decls() -> dict[str, tuple[str, list[str]]]:
    """Collect `@[extern "lean_..."]` declarations from Init and Std with inferred Zig signatures."""
    funcs: dict[str, tuple[str, list[str]]] = {}
    attr_pat = re.compile(r'@\[extern\s+"([^"]+)"[^\]]*\]')
    for stdlib_root in (ROOT / "src" / "Init", ROOT / "src" / "Std", ROOT / "src" / "Lean"):
        if not stdlib_root.is_dir():
            continue
        for path in stdlib_root.rglob("*.lean"):
            text = path.read_text(errors="replace")
            pos = 0
            while True:
                m = attr_pat.search(text, pos)
                if not m:
                    break
                name = m.group(1)
                if not name.startswith("lean_"):
                    pos = m.end()
                    continue

                parsed = parse_extern_after_attr(text[m.end():])
                if parsed is None:
                    pos = m.end()
                    continue

                _, arg_types, ret_type = parsed
                zret = lean_type_to_zig(ret_type)
                zargs = [lean_type_to_zig(a) for a in arg_types]
                funcs.setdefault(name, (zret, zargs))
                pos = m.end()
    return funcs

def format_zig_extern(name: str, ret: str, args: list[str]) -> str:
    if name in OVERRIDE_SIGNATURES:
        ret, args = OVERRIDE_SIGNATURES[name]
        sig_ret = "noreturn" if ret in {"noreturn void", "noreturn"} else ret
        arg_sig = ", ".join(f"_{i}: {t}" for i, t in enumerate(args))
        return f"extern fn {name}({arg_sig}) callconv(.c) {sig_ret};"
    ret, args = simplify_complex_signature(name, ret, args)
    if ret in {"noreturn void", "noreturn"}:
        sig_ret = "noreturn"
    elif not ret or "fn" in ret:
        sig_ret = "LeanObj"
    else:
        sig_ret = ret
    if args:
        arg_sig = ", ".join(f"_{i}: {t}" for i, t in enumerate(args))
        return f"extern fn {name}({arg_sig}) callconv(.c) {sig_ret};"
    return f"extern fn {name}() callconv(.c) {sig_ret};"


def main() -> int:
    lean_h = LEAN_H.read_text()
    inline_names = load_inline_helper_names()
    funcs = parse_lean_h(lean_h)

    for name, ret, args in EXTRA_FUNCS:
        arg_list = [a.strip() for a in args.split(",") if a.strip()] if args else []
        funcs[name] = (ret, arg_list)

    for entry in MATH_FUNCS:
        name = entry[0]
        ret = entry[1]
        args = list(entry[2:])
        funcs[name] = (ret, args)

    stdlib_sigs = scan_stdlib_extern_decls()
    for name, sig in sorted(stdlib_sigs.items()):
        funcs.setdefault(name, sig)

    # Ensure zig-runtime-only exports are declared with signatures from the Zig sources.
    # Lean extern declarations take precedence because EmitZig follows the Lean-side call ABI
    # for IO externs whose runtime implementation still accepts an ignored world token.
    zig_sigs = zig_rt_export_signatures()
    for name, sig in sorted(zig_sigs.items()):
        if name in funcs:
            # If the Zig runtime has an extra trailing LeanObj (IO world token)
            # not present in the lean.h/stdlib signature, strip it to match
            # EmitZig's call ABI (runtimeArgs drops void/erased params).
            zig_args = sig[1]
            if len(zig_args) == len(funcs[name][1]) + 1 and zig_args[-1] == "LeanObj":
                funcs[name] = (sig[0], zig_args[:-1])
        else:
            funcs.setdefault(name, sig)

    decls: list[str] = []
    for name in sorted(funcs):
        if name in inline_names or name in EMITZIG_LOCAL_FUNCS:
            continue
        ret, args = funcs[name]
        decls.append(format_zig_extern(name, ret, args))

    year = subprocess.check_output(["date", "+%Y"], text=True).strip()
    lines = [
        "/-",
        f"Copyright (c) {year} Lean FRO, LLC. All rights reserved.",
        "Released under Apache 2.0 license as described in the file LICENSE.",
        "Authors: Factory",
        "-/",
        "module",
        "",
        "prelude",
        "public import Init.Data.List.Basic",
        "public import Init.Data.String.Basic",
        "",
        "namespace RuntimeExterns",
        "",
        "/-- Auto-generated from `tools/gen-emitzig-runtime-externs.py`. Do not edit by hand. -/",
        "public def runtimeExternDeclsGenerated : List String := [",
    ]
    for decl in decls:
        escaped = decl.replace("\\", "\\\\").replace("\"", "\\\"")
        lines.append(f"  \"{escaped}\",")
    lines += [
        "]",
        "",
        "end RuntimeExterns",
        "",
    ]
    OUT.write_text("\n".join(lines))
    print(f"Wrote {len(decls)} extern decls to {OUT}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
