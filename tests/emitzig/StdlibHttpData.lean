module
prelude
import Init.Data.String.Search
import Init.System.IO
import Std.Http.Data.Chunk
import Std.Http.Data.Headers
import Std.Http.Data.Method
import Std.Http.Data.Request
import Std.Http.Data.Response
import Std.Http.Data.Status
import Std.Http.Data.URI

/-! End-to-end stdlib-linked EmitZig test for HTTP data types. -/

open Std
open Std.Http

def showOption (x : Option String) : String :=
  x.getD "missing"

def showValues (xs : Option (Array Header.Value)) : String :=
  match xs with
  | some values => String.intercalate "," (values.map (fun v => toString v)).toList
  | none => "missing"

def oneLine (s : String) : String :=
  s.replace "\r\n" "|"

def encoded [Internal.Encode .v11 α] (x : α) : String :=
  let bytes := (Internal.Encode.encode (v := .v11) Internal.ChunkedBuffer.empty x).toByteArray
  (String.fromUTF8? bytes).getD "<invalid-utf8>"

def main : IO Unit := do
  let contentType := Header.Name.contentType
  let setCookie := Header.Name.ofString! "Set-Cookie"
  let headers :=
    Headers.empty
      |>.insert! "Content-Type" " text/plain; charset=utf-8 "
      |>.insert setCookie (Header.Value.ofString! "a=1")
      |>.insert! "set-cookie" "b=2"
      |>.replaceLast contentType (Header.Value.ofString! "application/json")
      |>.update contentType (fun value => Header.Value.ofString! (value.value ++ "; profile=lean"))
  IO.println headers.size
  IO.println (showOption ((headers.get? contentType).map (fun v => toString v)))
  IO.println (showValues (headers.getAll? setCookie))
  IO.println (headers.contains (Header.Name.ofString! "CONTENT-TYPE"))
  IO.println (headers.hasEntry setCookie (Header.Value.ofString! "b=2"))

  match Header.ContentLength.parse (Header.Value.ofString! "42") with
  | some len => IO.println s!"length:{len.length}"
  | none => IO.println "length:error"
  match Header.TransferEncoding.parse (Header.Value.ofString! "gzip, chunked") with
  | some te => IO.println s!"chunked:{te.isChunked}"
  | none => IO.println "chunked:error"
  IO.println (Header.TransferEncoding.parse (Header.Value.ofString! "chunked, gzip")).isNone
  match Header.Connection.parse (Header.Value.ofString! "keep-alive, Close") with
  | some connection => IO.println connection.shouldClose
  | none => IO.println "connection:error"
  match Header.Host.parse (Header.Value.ofString! "[2001:db8::1]:8443") with
  | some host =>
      let (_, value) := Header.Host.serialize host
      IO.println value.value
  | none => IO.println "host:error"
  match Header.Expect.parse (Header.Value.ofString! "100-continue") with
  | some expect =>
      let (_, value) := Header.Expect.serialize expect
      IO.println value.value
  | none => IO.println "expect:error"

  IO.println (toString (Method.ofString! "MKCOL"))
  IO.println (Method.ofString? "CUSTOM").isNone
  match Status.ofCode none (404 : UInt16) with
  | some status => IO.println s!"{status.toCode} {status.reasonPhrase}"
  | none => IO.println "status:error"
  match Status.ofCode (some ⟨"Zig OK", by decide⟩) (209 : UInt16) with
  | some status => IO.println s!"{status.toCode} {status.reasonPhrase}"
  | none => IO.println "custom-status:error"

  let target := RequestTarget.parse! "/submit?tag=lean&tag=zig"
  let request : Request String :=
    Request.post target
      |>.header! "Host" "example.com"
      |>.header! "Content-Type" "application/json"
      |>.body "{\"ok\":true}"
  IO.println (oneLine (encoded request.line))
  IO.println request.body

  let response : Response String :=
    Response.created
      |>.header! "Server" "lean-zig"
      |>.header! "Content-Type" "text/plain; charset=utf-8"
      |>.body "created"
  IO.println (oneLine (encoded response.line))
  IO.println response.body

  let chunk :=
    Chunk.ofByteArray "hello".toUTF8
      |>.insertExtension (Chunk.ExtensionName.ofString! "sig") (Chunk.ExtensionValue.ofString! "lean zig")
  IO.println (oneLine (encoded chunk))
