module
prelude
import Init.System.IO
import Std.Net.Addr

/-! End-to-end stdlib-linked EmitZig test for IP address parsing and rendering. -/

def showFamily : Std.Net.AddressFamily → String
  | .ipv4 => "ipv4"
  | .ipv6 => "ipv6"

def printIPv4 (input : String) : IO Unit := do
  match Std.Net.IPv4Addr.ofString input with
  | some addr => IO.println (toString addr)
  | none => IO.println ("invalid-v4:" ++ input)

def printIPv6 (input : String) : IO Unit := do
  match Std.Net.IPv6Addr.ofString input with
  | some addr => IO.println (toString addr)
  | none => IO.println ("invalid-v6:" ++ input)

def printSocket (addr : Std.Net.SocketAddress) : IO Unit := do
  IO.println (toString addr)
  IO.println (showFamily addr.family)
  IO.println (toString addr.port)
  IO.println (toString addr.ipAddr)

def main : IO Unit := do
  printIPv4 "192.0.2.42"
  printIPv4 "999.0.2.42"
  printIPv6 "2001:db8::1"
  printIPv6 "2001:db8:::1"
  let v4 := Std.Net.SocketAddress.v4 { addr := Std.Net.IPv4Addr.ofParts 127 0 0 1, port := 8080 }
  let v6 := Std.Net.SocketAddress.v6 { addr := Std.Net.IPv6Addr.ofParts 0x2001 0x0db8 0 0 0 0 0 1, port := 443 }
  printSocket v4
  printSocket v6
