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
  printIPv4 "0.0.0.0"
  printIPv4 "255.255.255.255"
  printIPv4 "192.168.001.1"
  printIPv4 "999.0.2.42"
  printIPv6 "2001:db8::1"
  printIPv6 "::"
  printIPv6 "::1"
  printIPv6 "ffff:ffff:ffff:ffff:ffff:ffff:ffff:ffff"
  printIPv6 "2001:db8:::1"
  let ip4 : Std.Net.IPAddr := Std.Net.IPv4Addr.ofParts 10 0 0 1
  let ip6 : Std.Net.IPAddr := Std.Net.IPv6Addr.ofParts 0 0 0 0 0 0 0 1
  IO.println (showFamily ip4.family)
  IO.println (toString ip4)
  IO.println (showFamily ip6.family)
  IO.println (toString ip6)
  IO.println (Std.Net.IPv4Addr.ofParts 1 2 3 4 == Std.Net.IPv4Addr.ofParts 1 2 3 4)
  IO.println (Std.Net.IPv6Addr.ofParts 0 0 0 0 0 0 0 1 == Std.Net.IPv6Addr.ofParts 0 0 0 0 0 0 0 2)
  let v4 := Std.Net.SocketAddress.v4 { addr := Std.Net.IPv4Addr.ofParts 127 0 0 1, port := 8080 }
  let any4 := Std.Net.SocketAddress.v4 { addr := Std.Net.IPv4Addr.ofParts 0 0 0 0, port := 0 }
  let v6 := Std.Net.SocketAddress.v6 { addr := Std.Net.IPv6Addr.ofParts 0x2001 0x0db8 0 0 0 0 0 1, port := 443 }
  printSocket v4
  printSocket any4
  printSocket v6
  IO.println (v4 == any4)
