# WoL

The MAC-WoL is based on AMD’s Magic Packet Detection technology.

The first step of the detection procedure is to scan the first twelve bytes of the frame, which contain Destination and Station addresses. Magic Packet detection is only carried out when the incoming frame's destination address matches the MAC's station address, or if the frame's destination address is a multicast or broadcast address.

After the first twelve bytes of the frame have matched, core searches for the Magic Packet technology's defined preamble of six continuous aligned bytes with all bits asserted \(0xFFh\). Following a valid Magic Packet preamble, core immediately expects 16 back-to-back repetitions of the six-byte MAC station address. Failure to achieve this exact pattern by a single byte at any time during the frame resets the circuitry back to the preamble search state.

After successful recognition of the Magic Packet payload or a successful compare of the MAC's station address with the incoming frame’s destination address, the Interface STATUS Register \(bit field Wake on Lane Detected\) is asserted and status bit can only be cleared through assertion of the Wake on Lane Detected Clear bit field of Interface Control register.

**Parent topic:**[Functional Description](GUID-1DF3649A-D1B6-4032-BF77-E072F8D8F7FC.md)

