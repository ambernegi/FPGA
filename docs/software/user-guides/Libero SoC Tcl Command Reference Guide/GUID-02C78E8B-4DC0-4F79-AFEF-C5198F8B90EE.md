# set\_external\_check

## Description

Defines<br /> the external setup and hold delays for an input relative to a clock.

```
set_external_check delay_value -clock clock_ref [–setup] [–hold] input_list
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|`delay_value`|integer|Specifies<br /> the delay at the input port/pin inside the<br /> FPGA.|
|`clock`|string|Specifies<br /> <br /> the reference clock to which the specified external check is<br /> related. This is a mandatory argument.|
|`setup or hold`|None|Specifies that delay\_value refers to the setup/hold check at the specified input. This is a mandatory argument if `–hold` is not used. You must specify either the `–setup` or `–hold` option.|
|`input_list`|list of strings|Provides a list of input ports in the current design to which `delay_value` is assigned. If you need to specify more than one object, enclose the objects in braces \(\{\}\).|

|Return Type|Description|
|-----------|-----------|
|`integer`|Returns the ID of the external setup and hold constraint.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter -clock is missing.|

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

The following example sets an external setup delay with 0.2 ns for A input port.

```
set_external_check -setup 0.2 -clock { clk } [ get_ports { A } ]
```

## Related Examples on GitHub

-   [set\_external\_check](https://github.com/MicrochipTech/Libero-SoC-Design-Suite-Tcl-Examples/tree/basic_tcl_examples/SmartTime/set_external_check)

## See Also

-   [set\_input\_delay](GUID-12FAC9A3-79DE-4CC8-8B3C-132B48D04A77.md)

**Parent topic:**[SmartTime Tcl Commands](GUID-96623DD0-9D90-4AFA-90C3-B2BAEEE15670.md)

