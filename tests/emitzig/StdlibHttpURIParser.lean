module
prelude
import Init.System.IO
import Std.Http.Data.URI

/-! End-to-end stdlib-linked EmitZig test for HTTP URI parsing. -/

open Std.Http

def showPort : URI.Port → String
  | .omitted => "omitted"
  | .empty => "empty"
  | .value port => s!"port:{port}"

def showEncodedValues (values : Array (Option URI.EncodedQueryParam)) : String :=
  String.intercalate "," <| (values.map fun
    | some (value : URI.EncodedQueryParam) => URI.EncodedQueryParam.decode value |>.getD (toString value)
    | none => "<none>").toList

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
      IO.println (target.authority?.map toString |>.getD "authority:none")
  | none =>
      IO.println ("target-error:" ++ input)

def printURIComponents (input : String) : IO Unit := do
  match URI.parse? input with
  | some uri => do
      let authority := uri.authority.map toString |>.getD "authority:none"
      IO.println authority
      match uri.authority.bind (·.userInfo) with
      | some userInfo =>
          let username := userInfo.username?.getD "none"
          let password := userInfo.password?.getD "none"
          IO.println s!"userinfo:{username}:{password}"
      | none =>
          IO.println "userinfo:none"
      IO.println (uri.query.getD "name" "missing")
      IO.println (showEncodedValues (uri.query.findAll "tag"))
      IO.println (uri.query.getD "flag" "missing")
      let updatedQuery := uri.query.set "tag" "Zig + Lean" |>.erase "flag"
      IO.println updatedQuery.toRawString
  | none =>
      IO.println ("components-error:" ++ input)

def printHostHeader (input : String) : IO Unit := do
  let parser := URI.Parser.parseHostHeader <* Std.Internal.Parsec.eof
  match parser.run input.toUTF8 |>.toOption with
  | some (host, port) =>
      IO.println s!"host:{host}:{showPort port}"
  | none =>
      IO.println ("host-error:" ++ input)

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
  printTarget "https://proxy.example:8443/a?tag=http&flag=yes"
  printURIComponents "https://Alice:p%40ss@[2001:db8::1]:/a/%7E?name=Lean+Zig&tag=a%2Bb&flag#frag"
  printHostHeader "[2001:db8::2]:443"
  printHostHeader "example.com:"
  printHostHeader "bad_host:80"
  printPath "/alpha/%CE%B2/../gamma"
