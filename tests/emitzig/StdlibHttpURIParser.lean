module
prelude
import Init.System.IO
import Std.Http.Data.URI

/-! End-to-end stdlib-linked EmitZig test for HTTP URI parsing. -/

open Std.Http

def printURI (input : String) : IO Unit := do
  match URI.parse? input with
  | some uri => do
      IO.println (toString uri)
      IO.println (toString uri.normalize)
      IO.println (String.intercalate "," uri.path.toDecodedSegments.toList)
      IO.println uri.query.toRawString
  | none =>
      IO.println ("uri-error:" ++ input)

def printTarget (input : String) : IO Unit := do
  match RequestTarget.parse? input with
  | some target => do
      IO.println (toString target)
      IO.println target.query.toRawString
      IO.println (target.query.findAll "tag").size
      IO.println (target.query.getD "flag" "missing")
  | none =>
      IO.println ("target-error:" ++ input)

def printPath (input : String) : IO Unit := do
  match URI.Path.parse? input with
  | some path => do
      IO.println (toString path)
      IO.println (String.intercalate "," path.toDecodedSegments.toList)
  | none =>
      IO.println ("path-error:" ++ input)

def main : IO Unit := do
  printURI "https://example.com:443/a/./b/../c?tag=a&tag=b#frag%20ment"
  printURI "http://exa_mple.com/path"
  printTarget "/api/search?tag=lean&tag=zig&flag"
  printTarget "example.com:8080"
  printPath "/alpha/%CE%B2/../gamma"
