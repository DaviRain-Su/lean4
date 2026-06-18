/*
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Sofia Rodrigues
*/
#include <cstring>
#include "runtime/uv/system.h"

namespace lean {
#ifndef LEAN_EMSCRIPTEN

using namespace std;

// Stores all the things needed to request a random sequence of bytes.
typedef struct {
    uv_random_t req;
    lean_object* promise;
    lean_object* byte_array;
} random_req_t;

// Std.Internal.UV.System.random : UInt64 -> IO (IO.Promise (Except IO.Error (Array UInt8)))
// Kept in C++ because the libuv request needs a C callback; the Zig runtime declares this
// helper as `extern` and links it from the compiled C++ object.
extern "C" lean_obj_res lean_uv_random_helper(uint64_t size) {
    random_req_t* req = (random_req_t*)malloc(sizeof(random_req_t));
    if (req == nullptr) {
        return lean_io_result_mk_error(decode_io_error(ENOMEM, nullptr));
    }

    lean_object* promise = lean_promise_new();
    mark_mt(promise);
    req->promise = promise;

    lean_object* byte_array = lean_alloc_sarray(1, 0, size);
    req->byte_array = byte_array;

    req->req.data = req;

    lean_inc(promise);

    event_loop_lock(&global_ev);

    int result = uv_random(
        global_ev.loop,
        &req->req,
        lean_sarray_cptr(byte_array),
        size,
        0,
        [](uv_random_t* uv_req, int status, void* buf, size_t buflen) {
            random_req_t* req = (random_req_t*)uv_req;

            if (status < 0) {
                lean_dec(req->byte_array);
                lean_promise_resolve(mk_except_err(lean_decode_uv_error(status, nullptr)), req->promise);
            } else {
                lean_sarray_set_size(req->byte_array, buflen);
                lean_promise_resolve(mk_except_ok(req->byte_array), req->promise);
            }

            lean_dec(req->promise);
            free(req);
        }
    );

    event_loop_unlock(&global_ev);

    if (result < 0) {
        lean_dec(byte_array);
        lean_dec(promise);
        lean_dec(promise);
        free(req);

        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    return lean_io_result_mk_ok(promise);
}

#else

// Std.Internal.UV.System.random : UInt64 -> IO (IO.Promise (Except IO.Error (Array UInt8)))
extern "C" lean_obj_res lean_uv_random_helper(uint64_t size) {
    lean_always_assert(
        false && ("Please build a version of Lean4 with libuv to invoke this.")
    );
}

#endif
}
