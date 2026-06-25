// Stub implementations for symbols referenced by the Zig runtime archive
// (libleanrt_zigrt.a) that are only defined in the full Lean stdlib.
// Used by zigc-zigrt to link minimal runtime tests without the full stdlib.

#include <stdint.h>
#include <stddef.h>

// lean_object is an opaque pointer in the runtime.
typedef void* lean_object;

// lean_initialize calls initialize_Init/Std/Lean. The generated test code
// only calls lean_initialize_runtime_module + lean_initialize_thread, but
// the entire init.o is pulled in, dragging these externs along.
lean_object initialize_Lean(uint8_t builtin) {
    (void)builtin;
    return (lean_object)0;
}

lean_object initialize_Std(uint8_t builtin) {
    (void)builtin;
    return (lean_object)0;
}

// Name hash override: the Zig runtime's nameHashPtr falls back to this for
// name kinds it doesn't recognize. Return 0 — these tests don't use exotic
// name constructors.
uint64_t l_Lean_Name_hash___override(void* n) {
    (void)n;
    return 0;
}

// Kernel environment stubs (not used in tests, needed for linking)
lean_object lean_environment_add(lean_object env, lean_object decl) {
    (void)env; (void)decl;
    return (lean_object)0;
}

lean_object lean_cpp_environment_add_without_checking(lean_object env, lean_object decl) {
    (void)env; (void)decl;
    return (lean_object)0;
}

lean_object lean_elab_add_decl(lean_object env, size_t mh, lean_object decl, lean_object ax, lean_object tl, lean_object opts) {
    (void)env; (void)mh; (void)decl; (void)ax; (void)tl; (void)opts;
    return (lean_object)0;
}

lean_object lean_add_decl_bridge(lean_object env, lean_object decl) {
    (void)env; (void)decl;
    return (lean_object)0;
}

// Expr constructor stubs (provided by kernel.zig pub fn)
lean_object lean_expr_mk_app(lean_object f, lean_object a) {
    (void)f; (void)a;
    return (lean_object)0;
}
lean_object lean_expr_mk_forall(lean_object n, lean_object d, lean_object b, uint8_t bi) {
    (void)n; (void)d; (void)b; (void)bi;
    return (lean_object)0;
}
lean_object lean_expr_mk_lambda(lean_object n, lean_object d, lean_object b, uint8_t bi) {
    (void)n; (void)d; (void)b; (void)bi;
    return (lean_object)0;
}
lean_object lean_expr_mk_let(lean_object n, lean_object t, lean_object v, lean_object b, uint8_t nd) {
    (void)n; (void)t; (void)v; (void)b; (void)nd;
    return (lean_object)0;
}
lean_object lean_expr_mk_mdata(lean_object m, lean_object e) {
    (void)m; (void)e;
    return (lean_object)0;
}
lean_object lean_expr_mk_proj(lean_object s, lean_object i, lean_object e) {
    (void)s; (void)i; (void)e;
    return (lean_object)0;
}