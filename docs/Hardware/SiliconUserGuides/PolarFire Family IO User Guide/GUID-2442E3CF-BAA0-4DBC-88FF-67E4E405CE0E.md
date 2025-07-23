# Bus-LVDS \(B-LVDS\)/Multipoint LVDS \(M-LVDS\)

B-LVDS refers to bus interface circuits based on the LVDS technology with the M-LVDS specification extending the LVDS standard to high-performance multipoint bus applications. Multidrop and multipoint bus configurations may contain any combination of drivers, receivers, and transceivers. LVDS drivers provide the higher drive current required by B-LVDS and M-LVDS to accommodate bus loading. These drivers require series terminations for better signal quality and voltage swing control. The drivers can be located anywhere on the bus, and therefore, termination is also required at both ends of the bus.

GPIO supports B-LVDS and M-LVDS in receive mode. For transmit mode, however,<br /> external board termination is required. For more information about various BLVDS<br /> standards, see [Bus-LVDS Emulated \(BLVDSE25\) Output Mode](GUID-0C6DCA5B-07EE-41AE-9CB6-2421990C0215.md) and<br /> [Multipoint Low-Voltage Emulated \(MLVDSE25\) Output Mode](GUID-9F29F5C6-F007-445B-A938-C7975F9C9A08.md).

**Parent topic:**[I/O Standard Descriptions](GUID-07F30430-9CF8-4A1E-8C90-A8B9D9B8986F.md)

