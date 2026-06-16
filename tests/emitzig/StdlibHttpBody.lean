module
prelude
import Init.System.IO
import Std.Async
import Std.Http.Data.Body

/-! End-to-end stdlib-linked EmitZig test for HTTP body implementations and builders. -/

open Std
open Std.Http

def showLength : Option Body.Length → String
  | some .chunked => "chunked"
  | some (.fixed n) => "fixed:" ++ toString n
  | none => "unknown"

def showChunk? : Option Chunk → String
  | some chunk => chunk.toString?.getD "<invalid>"
  | none => "eof"

def showTryChunk? : Option (Option Chunk) → String
  | some chunk? => showChunk? chunk?
  | none => "pending"

def showHeader (headers : Headers) (name : Header.Name) : String :=
  match headers.get? name with
  | some value => toString value
  | none => "missing"

def main : IO Unit := do
  IO.println Body.Length.chunked.isChunked
  IO.println (Body.Length.fixed 7).isFixed

  let empty : Body.Empty := {}
  IO.println (← (Body.Empty.isClosed empty).block)
  IO.println (showTryChunk? (← (Body.Empty.tryRecv empty).block))

  let full ← (Body.Full.ofString "lean zig").block
  IO.println (showLength (← (Body.Full.getKnownSize full).block))
  IO.println (showTryChunk? (← (Body.Full.tryRecv full).block))
  IO.println (showLength (← (Body.Full.getKnownSize full).block))
  IO.println (showChunk? (← (Body.Full.recv full).block))
  IO.println (← (Body.Full.isClosed full).block)

  let closed ← (Body.Full.ofString "drop me").block
  (Body.Full.close closed).block
  IO.println (← (Body.Full.isClosed closed).block)
  IO.println (showLength (← (Body.Full.getKnownSize closed).block))

  let request ← (Request.post (RequestTarget.parse! "/body") |>.text "hello").block
  IO.println (toString request.line.method)
  IO.println (showHeader request.line.headers Header.Name.contentType)
  IO.println (showLength (← (Body.Full.getKnownSize request.body).block))
  IO.println (showChunk? (← (Body.Full.recv request.body).block))

  let response ← (Response.ok |>.json "{\"ok\":true}").block
  IO.println response.line.status.reasonPhrase
  IO.println (showHeader response.line.headers Header.Name.contentType)
  IO.println (showChunk? (← (Body.Full.recv response.body).block))
