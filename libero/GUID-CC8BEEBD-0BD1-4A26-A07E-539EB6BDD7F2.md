# Floorplanning with PDC Commands

You can use the `define_region` PDC command to create a rectangular or rectilinear<br /> region, and then use the `assign_region` PDC command to constrain all the<br /> macros to that region.

Floorplanning reduces the risk of placement conflicts of the blocks at the top level. If you do<br /> not constrain your block placement, its components may be placed anywhere on the<br /> die.

It is also important to consider the placement of all Block Interface Instances at the boundaries<br /> of block regions. This facilitates the interconnection of the block to the<br /> top-level design. If the block is highly optimized \(densely packed\), there may be<br /> no routing channels available to connect to any internal Block Interface<br /> Instances. Placing all interfaces at block boundaries helps you eliminate routing<br /> congestion and failure.

**Parent topic:**[Blocks and Floorplanning](GUID-25ADB39F-E05D-45CE-B8C4-9E016D9BFA59.md)

