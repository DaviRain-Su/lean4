module
prelude
import Init.System.IO
import Std.Http.Protocol.H1.Parser

/-! End-to-end stdlib-linked EmitZig test for HTTP/1.1 parser helpers. -/

open Std
open Std.Http
open Std.Http.Protocol.H1

def limits : Config := {}

def sliceString (slice : ByteSlice) : String :=
  String.fromUTF8! slice.toByteArray

def showVersion? : Option Version → String
  | some version => toString version
  | none => "none"

def showExtValue? : Option Chunk.ExtensionValue → String
  | some value => toString value
  | none => "none"

def showExt (ext : Chunk.ExtensionName × Option Chunk.ExtensionValue) : String :=
  let (name, value?) := ext
  s!"{name}={showExtValue? value?}"

def showExts (exts : Array (Chunk.ExtensionName × Option Chunk.ExtensionValue)) : String :=
  String.intercalate "," (exts.map showExt).toList

def showTakeResult : TakeResult → String
  | .complete data => s!"complete:{sliceString data}"
  | .incomplete data remaining => s!"incomplete:{sliceString data}:{remaining}"

def showTrailers (trailers : Array (String × String)) : String :=
  trailers.map (fun (name, value) => s!"{name}={value}")
    |>.toList
    |> String.intercalate ","

def printRequestLine (input : String) : IO Unit :=
  match (parseRequestLine limits).run input.toUTF8 with
  | .ok head => IO.println s!"request:{head.method}:{head.uri}:{head.version}"
  | .error _ => IO.println "request:error"

def printRawRequestLine (input : String) : IO Unit :=
  match (parseRequestLineRawVersion limits).run input.toUTF8 with
  | .ok (method, uri, version?) => IO.println s!"raw-request:{method}:{uri}:{showVersion? version?}"
  | .error _ => IO.println "raw-request:error"

def printStatusLine (input : String) : IO Unit :=
  match (parseStatusLine limits).run input.toUTF8 with
  | .ok head => IO.println s!"status:{head.status}:{head.version}"
  | .error _ => IO.println "status:error"

def printHeader (input : String) : IO Unit :=
  match (parseSingleHeader limits).run input.toUTF8 with
  | .ok (some (name, value)) => IO.println s!"header:{name}:{value}"
  | .ok none => IO.println "header:end"
  | .error _ => IO.println "header:error"

def printChunkSize (input : String) : IO Unit :=
  match (parseChunkSize limits).run input.toUTF8 with
  | .ok (size, exts) => IO.println s!"chunk-size:{size}:{showExts exts}"
  | .error _ => IO.println "chunk-size:error"

def printFixedData (size : Nat) (input : String) : IO Unit :=
  match (parseFixedSizeData size).run input.toUTF8 with
  | .ok result => IO.println s!"fixed:{showTakeResult result}"
  | .error _ => IO.println "fixed:error"

def printChunkData (size : Nat) (input : String) : IO Unit :=
  match (parseChunkSizedData size).run input.toUTF8 with
  | .ok result => IO.println s!"chunk-data:{showTakeResult result}"
  | .error _ => IO.println "chunk-data:error"

def printTrailers (input : String) : IO Unit :=
  match (parseTrailers limits).run input.toUTF8 with
  | .ok trailers => IO.println s!"trailers:{showTrailers trailers}"
  | .error _ => IO.println "trailers:error"

def main : IO Unit := do
  printRequestLine "\r\nGET /search?q=lean HTTP/1.1\r\n"
  printRawRequestLine "POST /upload HTTP/9.9\r\n"
  printStatusLine "HTTP/1.0 404 Missing\r\n"
  printHeader "Host:  example.com \r\n"
  printHeader "\r\n"
  printChunkSize "a;sig=\"lean zig\";flag\r\n"
  printFixedData 8 "abc"
  printChunkData 5 "hello\r\n"
  printTrailers "X-Trace: yes\r\n\r\n"
  printTrailers "Content-Length: 5\r\n\r\n"
