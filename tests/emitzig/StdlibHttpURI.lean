module
prelude
import Init.System.IO
import Std.Http.Data.URI.Basic

/-! End-to-end stdlib-linked EmitZig test for HTTP URI building and rendering. -/

open Std.Http

def main : IO Unit := do
  let ipv4 := (Std.Net.IPv4Addr.ofString "127.0.0.1").getD (Std.Net.IPv4Addr.ofParts 127 0 0 1)
  let ipv6 := (Std.Net.IPv6Addr.ofString "2001:db8::1").getD (Std.Net.IPv6Addr.ofParts 0x2001 0x0db8 0 0 0 0 0 1)
  let built :=
    URI.Builder.empty
      |>.setScheme! "https"
      |>.setHost! "Docs.Example"
      |>.appendPathSegment "guides"
      |>.appendPathSegment "."
      |>.appendPathSegment "old"
      |>.appendPathSegment ".."
      |>.appendPathSegment "lean zig"
      |>.addQueryParam "q" "stdlib uri"
      |>.addQueryParam "tag" "lean"
      |>.addQueryParam "tag" "zig"
      |>.addQueryFlag "preview"
      |>.setFragment "top section"
      |>.build
  IO.println built.scheme.val
  IO.println (toString built.path)
  IO.println (toString built.normalize.path)
  IO.println (String.intercalate "," built.path.toDecodedSegments.toList)
  IO.println built.query.toRawString
  IO.println (built.query.findAll "tag").size
  IO.println (built.query.getD "preview" "missing")
  let target : RequestTarget := .originForm built.path (some built.query)
  IO.println (toString target.path)
  IO.println target.query.toRawString
  IO.println (toString ipv4)
  IO.println (toString ipv6)
