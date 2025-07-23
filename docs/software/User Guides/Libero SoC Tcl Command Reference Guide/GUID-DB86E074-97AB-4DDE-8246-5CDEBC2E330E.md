# list\_paths

## Description

Returns<br /> a list of the n worst paths matching the arguments. The number of paths returned can<br /> be changed using the `set_options -limit_max_paths` &lt;value&gt;<br /> command.

```
list_paths \
-analysis <max | min> \
-format <csv | text> \
-set <name> \
-clock <clock name> \
-type <set_type> \
-from_clock <clock name> \
-to_clock <clock name> \
-in_to_out \
-from <port/pin pattern> \
-to <port/pin pattern>
```

## Arguments

<table id="GUID-B6C12471-841C-4F1F-B40D-C5BCA4CCE7A6"><thead><tr><th>

Parameter

</th><th>

Type

</th><th>

Description

</th></tr></thead><tbody><tr><td>

`analysis`

</td><td>

string

</td><td>

Specifies whether the timing analysis is done for `max-delay` \(setup check\) or `min-delay` \(hold check\). Valid values are: max or min.

</td></tr><tr><td>

`format`

</td><td>

string

</td><td>

Specifies the list format. It can be either text \(default\) or csv \(comma separated values\). Text format is better for display and csv format is better for parsing.

</td></tr><tr><td>

`set`

</td><td>

string

</td><td>

Returns a list of paths from the named set. You can either use the `-set` option to specify a user set by its name or use both `-clock` and `-type` to specify a set.

</td></tr><tr><td>

`clock`

</td><td>

string

</td><td>

Returns a list of paths from the specified clock domain. This option requires the `-type` option. You cannot use wildcards when specifying a clock name.

</td></tr><tr><td>

`type`

</td><td>

string

</td><td>

Specifies the type of paths to be included. It can only be used along with -clock. Valid values are: -   `reg_to_reg` -paths between registers in the design.
-   `async_to_reg` -paths from asynchronous pins to registers.
-   `reg_to_async` -paths from registers to asynchronous pins of registers.
-   `external_recovery` -paths from input ports to asynchronous pins of registers.
-   `external_removal` -paths from input ports to asynchronous pins of registers.
-   `external_setup` -paths from input ports to data pins of registers.
-   `external_hold` -paths from input ports to data pins of registers.
-   `clock_to_out` -paths from registers to output ports.

</td></tr><tr><td>

`from_clock`

</td><td>

string

</td><td>

Used along with `-to_clock` to get the list of paths of the inter-clock domain between the two clocks.

</td></tr><tr><td>

`to_clock`

</td><td>

string

</td><td>

Used along with `-from_clock` to get the list of paths of the inter-clock domain between the two clocks.

</td></tr><tr><td>

`in_to_out`

</td><td>

None

</td><td>

Used to get the list of path between input and output ports.

</td></tr><tr><td>

`from`

</td><td>

string

</td><td>

Filter the list of paths to those starting from ports or pins matching the pattern.

</td></tr><tr><td>

`to`

</td><td>

string

</td><td>

Filter the list of paths to those ending at ports or pins matching the pattern.

</td></tr></tbody>
</table>|Return Type|Description|
|-----------|-----------|
|`list of strings`|Returns a list of the n worst paths matching the arguments.|

## Supported Families

<table id="GUID-56F9E300-6CAB-48D0-9D92-B4EC8F62D904"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

PolarFire SoC

</td></tr><tr><td>

SmartFusion® 2

</td></tr><tr><td>

IGLOO® 2

</td></tr><tr><td>

RTG4™

</td></tr></tbody>
</table>## Example

The following command displays the list of register to register paths of clock domain clk1.

```
puts [ list_paths -clock clk1 -type reg_to_reg ]
```

## Related Examples on GitHub

-   [list\_paths](https://github.com/MicrochipTech/Libero-SoC-Design-Suite-Tcl-Examples/tree/basic_tcl_examples/SmartTime/list_paths)

**Parent topic:**[SmartTime Tcl Commands](GUID-96623DD0-9D90-4AFA-90C3-B2BAEEE15670.md)

