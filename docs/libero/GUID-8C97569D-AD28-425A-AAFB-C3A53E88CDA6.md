# Floorplanning FDC Commands

Floorplanning \(FDC\) commands are used to create and edit user regions and<br /> to assign/unassign logic to these regions.

## assign\_region

This PDC command constrains a set of macros to a specified region.

<br />

```
assign_region -region_name <region_name> -inst_name <macro_name>+
```

<br />

### Arguments

-region\_name
:   Specifies the region to which the macros are assigned. The macros are constrained to this region. Because the `define_region` command returns a region object, you can write a simpler command such as `assign_region [define_region]+ [macro_name]+`.

-inst\_name
:   Specifies the macro\(s\) to assign to the region. You must specify at least one macro name. The following table lists the wildcard characters you can use in macro names.

    |Wildcard|What It Does|
    |--------|------------|
    |\\|Interprets the next character as a<br /> non-special character|
    |?|Matches any single character|
    |\*|Matches any string|

    **Important:**

    -   The region must be created before you can assign macros to it. If the region creation PDC command and the macro assignment command are in different PDC files, the order of the PDC files is important.
    -   You can assign only hard macros or their instances to a region. You cannot assign a group name. A hard macro is a logic cell consisting of one or more silicon modules with locked relative placement.
    -   The macro name must be a name with full hierarchical path.

### Examples

In the following example, two macros are assigned to a<br /> region:

```
assign_region -region_name UserRegion1 -inst_name “test_0/AND2_0 test_0/AND2_1”
```

In the following example, all macros whose names have the prefix<br /> des01/Counter\_1 \(or all macros whose names match the expression des01/Counter\_1/\*\) are<br /> assigned to a<br /> region:

```
assign_region -region_name User_region2 -inst_name des01/Counter_1/*
```

## assign\_net\_macros

This PDC command assigns to a user-defined region all the macros that are<br /> connected to a net.

<br />

```
assign_net_macros -region_name <region_name> -net_name <net_name> -include_driver <true|false>
```

<br />

### Arguments

-region\_name
:   Specifies the name of the region to which you assign macros. The region must exist before you use this command. See `define_region` \(rectangular\) or `define_region` \(rectilinear\). Because the `define_region` command returns a region object, you can write a simple command such as `assign_net_macros [define_region]+ [net]+`.

-net\_name
:   You must specify at least one net name. Net names are<br /> AFL-level \(flattened netlist\) names. These names match your netlist names most<br /> of the time. When they do not, you must export AFL and use the AFL names. Net<br /> names are case insensitive. Hierarchical net names from ADL are not allowed.

    The following table lists the wildcard characters you can use in net names.

    |Wildcard|What It Does|
    |--------|------------|
    |\\|Interprets the next character as<br /> a non-special character|
    |?|Matches any single<br /> character|
    |\*|Matches any string|

-include\_driver
:   Specifies whether to add the driver of the net\(s\) to the region. Enter one of the values in the following table.

    |Value|Descriptions|
    |-----|------------|
    |True|Includes the driver in the list<br /> of macros assigned to the region \(default\).|
    |False|Do not assign the driver to the<br /> region.|

    Observe the following guidelines and see [define\_region](GUID-8C97569D-AD28-425A-AAFB-C3A53E88CDA6.md#) for more information:

    -   Placed macros \(not connected to the net\) that are inside the area occupied by the net region are automatically unplaced.
    -   Net region constraints are internally converted into constraints on macros. PDC export results as a series of assign\_region &lt;region\_name&gt; macro1 statements for all the connected macros.
    -   If the region does not have enough space for all of the macros, or if the region constraint is impossible, the constraint is rejected and a warning message appears in the Log window.
    -   For overlapping regions, the intersection must be at least as big as the overlapping macro count.
    -   If a macro on the net cannot legally be placed in the region, it is not placed and a warning message appears in the Log window.
    -   Net region constraints may result in a single macro being assigned to multiple regions. These net region constraints result in constraining the macro to the intersection of all the regions affected by the constraint.

## define\_region

This PDC command defines either a rectangular region or a rectilinear<br /> region.

<br />

```
define_region -region_name <region_name> -type <inclusive|exclusive|empty> -x1 <integer> -y1 <integer> -x2 <integer> -y2 <integer> [-route <true|false>]
```

<br />

**Note:** The -route parameters are optional. To define region colors, use the Display option in the Chip Planner.

<br />

### Arguments

-region\_name &lt;region\_name&gt;
:   Specifies the region name. The name must be unique. Do not use reserved names such as Bank 0 and Bank &lt;N&gt; for region names. If the region cannot be created, the name is empty. A default name is generated, if a name is not specified in this argument.

-type &lt;inclusive \| exclusive \| empty&gt;
:   Specifies the region type. The following table shows the<br /> acceptable values for this argument.

    |Region Type|Description|
    |-----------|-----------|
    |Empty|Empty regions cannot<br /> contain macros|
    |Exclusive|Only contains macros<br /> assigned to the region|
    |Inclusive|Can contain macros both<br /> assigned and unassigned to the region|

-x1 -y1 -x2 -y2
:   Specifies the series of coordinate pairs that constitute the region. These rectangles may or may not overlap. They are given as x1, y1, x2, y2 \(where x1, y1 is the lower left and x2 y2 is the upper right corner in row/column coordinates\). You must specify at least one set of coordinates.

-route &lt;value&gt;
:   Specifies whether to direct the routing of all nets<br /> internal to a region to be constrained within that region. A net is<br /> internal to a region, if its source and destination pins are assigned to<br /> the region.

    The following table lists the acceptable values for this argument.

    |Constrain Routing<br /> Value|Description|
    |-------------------------------------------|-----------|
    |True|Constrain the routing<br /> of nets within the region as well as the<br /> placement.|
    |False|Do not constrain the<br /> routing of nets within the region. Only constrain the<br /> placement. This is the default value.|

    **Note:** Local clocks and global clocks are excluded from the `-route` option. Also, interface nets are excluded from the `-route` option because they cross region boundaries.

    An empty routing region is an empty placement region. If<br /> `-route` is true, then no routing is allowed inside<br /> the empty region. However, local and global clocks can cross empty<br /> regions.

    An exclusive routing region is an exclusive placement<br /> region \(rectilinear area with assigned macros\) along with the following<br /> additional constraints:

    -   For all nets that are internal to the region \(the source and all destinations belong to the region\), routing must be inside the region \(that is, such nets cannot be assigned any routing resource which is outside the region or crosses the region boundaries\).
    -   Nets without pins inside the region cannot be assigned any routing resource, which is inside the region or crosses any region boundaries.

    An inclusive routing region is an inclusive placement<br /> region \(rectilinear area with assigned macros\) along with the following<br /> additional constraints:

    -   For all nets that are internal to the region \(the source and all destinations belong to the region\), routing must be inside the region \(that is, such nets cannot be assigned any routing resource which is outside the region or crosses the region boundaries\).
    -   Nets that are not internal to the region can be assigned routing resources within the region.

### Description

Unlocked macros are unassigned in the empty or exclusive regions.<br /> You cannot create empty regions in areas that contain locked macros.

Use inclusive or exclusive region constraints, if you intend to<br /> assign a logic to a region. An inclusive region constraint with no macros assigned<br /> to it has no effect. An exclusive region constraint with no macros assigned to it is<br /> equivalent to an empty region.

**Note:** If macros assigned to a region exceed the area's capacity, the region’s Properties Window displays the overbooked resources \(over 100 percent resource usage\) in red.

### Examples

The following example defines an empty rectangular region called<br /> UserRegion1 with lower-left coordinates \(100,<br /> 46\) and upper-right coordinates \(102,<br /> 50\).

```
define_region -region_name UserRegion1 -type empty -x1 100 -y1 46 -x2 102 -y2 50 
```

The following example defines an inclusive rectilinear region with the name<br /> UserRegion2. This region contains two rectangular areas, one with lower-left<br /> coordinates \(12,<br /> 39\) and upper-right coordinates \(23,<br /> 41\) and another rectangle with lower-left coordinates \(12,<br /> 33\) and upper-right coordinates \(23,<br /> 35\).

```
define_region -region_name UserRegion2 -type exclusive -x1 12 -y1 39 -x2 23 -y2 41 -x1 12 -y1 33\ -x2 23 -y2 35
```

The following examples define three regions with three different<br /> colors:

```
define_region -region_name UserRegion0 -color 128 -x1 50 -y1 19 -x2 60 -y2 25 define_region -region_name UserRegion1 -color 16711935 -x1 11 -y1 2 -x2 55 -y2 29 define_region -region_name UserRegion2 -color 8388736 -x1 61 -y1 6 -x2 69 -y2 19
```

For more information about regions, see [assign\_region](GUID-8C97569D-AD28-425A-AAFB-C3A53E88CDA6.md#).

## move\_region

This PDC command moves the named region to the specified coordinates.

<br />

```
move_region -region_name <region_name> -x1 <integer> -y1 <integer> -x2 <integer> -y2 <integer>
```

<br />

### Arguments

-region\_name
:   Specifies the name of the region to move. This name must be unique.

-x1 -y1 -x2 -y2
:   Specifies the series of coordinate pairs representing the location in which to move the named region. These rectangles can overlap. They are given as x1, y1, x2, and y2, where x1 and y1 represent the lower-left corner of the rectangle and x2 and y2 represent the upper-right corner. You must specify at least one set of coordinates.

### Example

This example moves the region named UserRegion1 to a new region with<br /> lower-left coordinates \(0, 40\) and upper-right coordinates \(3,<br /> 42\):

```
move_region -region_name UserRegion1 -x1 0 -y1 40 -x2 3 -y2 42
```

For more information about regions, see [define\_region](GUID-8C97569D-AD28-425A-AAFB-C3A53E88CDA6.md#).

