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