module
prelude
import Init.System.IO
import Std.Http.Protocol.H1.Message

/-! End-to-end stdlib-linked EmitZig test for HTTP/1.1 message-head helpers. -/

open Std
open Std.Http
open Std.Http.Protocol.H1

def showLength? : Option Body.Length → String
  | some .chunked => "chunked"
  | some (.fixed n) => s!"fixed:{n}"
  | none => "none"

def requestHead (version : Version) (headers : Headers) : Request.Head :=
  { method := .get, version, uri := RequestTarget.parse! "/items", headers }

def responseHead (version : Version) (headers : Headers) : Response.Head :=
  { status := .ok, version, headers }

def printRequestSize (label : String) (head : Request.Head) (allowEOFBody : Bool) : IO Unit :=
  IO.println s!"{label}:{showLength? (Message.Head.getSize (dir := .receiving) head allowEOFBody)}"

def printResponseSize (label : String) (head : Response.Head) (allowEOFBody : Bool) : IO Unit :=
  IO.println s!"{label}:{showLength? (Message.Head.getSize (dir := .sending) head allowEOFBody)}"

def printRequestKeepAlive (label : String) (head : Request.Head) : IO Unit :=
  IO.println s!"{label}:{Message.Head.shouldKeepAlive (dir := .receiving) head}"

def main : IO Unit := do
  let empty := Headers.empty
  let contentLength := empty.insert! "Content-Length" "12"
  let duplicateContentLength := contentLength.insert! "Content-Length" "13"
  let chunked := empty.insert! "Transfer-Encoding" "chunked"
  let mixed := contentLength.insert! "Transfer-Encoding" "chunked"
  let close := empty.insert! "Connection" "close"
  let keepAlive := empty.insert! "Connection" "keep-alive"

  IO.println (Direction.receiving.swap == .sending)
  printRequestSize "req-fixed" (requestHead .v11 contentLength) false
  printRequestSize "req-duplicate" (requestHead .v11 duplicateContentLength) false
  printRequestSize "req-chunked" (requestHead .v11 chunked) false
  printRequestSize "req-chunked-v10" (requestHead .v10 chunked) false
  printRequestSize "req-mixed" (requestHead .v11 mixed) false
  printResponseSize "resp-eof" (responseHead .v11 empty) true
  printResponseSize "resp-no-eof" (responseHead .v11 empty) false
  printRequestKeepAlive "v11-default" (requestHead .v11 empty)
  printRequestKeepAlive "v11-close" (requestHead .v11 close)
  printRequestKeepAlive "v10-default" (requestHead .v10 empty)
  printRequestKeepAlive "v10-keep" (requestHead .v10 keepAlive)

  -- Exercise setHeaders last. Keeping the updated value alive in EmitZig
  -- currently corrupts later `Request.Head` allocations, so avoid using it
  -- before the keep-alive checks.
  let updated :=
    Message.Head.setHeaders (dir := .receiving) (requestHead .v11 empty)
      (empty.insert! "Host" "example.com" |>.insert! "Connection" "close")
  IO.println (updated.headers.contains .host)
