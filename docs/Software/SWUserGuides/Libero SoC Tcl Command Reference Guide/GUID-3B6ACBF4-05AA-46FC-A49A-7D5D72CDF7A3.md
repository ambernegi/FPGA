# get\_pins

## Description

Returns an object representing the pin\(s\) that match those specified in the pattern argument.<br /> Wildcards can be used to select multiple pins at once. If no objects match the<br /> criteria, the empty string is returned.

```
get_pins pattern
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|`pattern`|string|Specifies the pattern to match the pins to return. For example, `get_pins clock_gen*` returns all pins starting with the characters `clock_gen`, where `*` is a wildcard that represents any character string. This is mandatory.|

|Return Type|Description|
|-----------|-----------|
|`object`|Returns an object representing the pin\(s\) that match those specified in the pattern argument.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter \_AtclParam0\_ is missing.|

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

The following example creates a clock on pin `clock_gen/reg2:Q` with a period of 10 ns.

```
create_clock -period 10 [get_pins clock_gen/reg2:Q]
```

## Related Examples on GitHub

-   [get\_pins](https://github.com/MicrochipTech/Libero-SoC-Design-Suite-Tcl-Examples/tree/basic_tcl_examples/SmartTime/get_pins)

## See Also

-   [create\_clock](GUID-4E57FF57-C7A3-4E62-B7FC-7D826501B5BF.md)
-   [create\_generated\_clock](GUID-36A5C4BB-EA20-4AF5-B4D5-1C9F4DA91964.md)
-   [set\_false\_path](GUID-7CE41461-4066-4811-9165-24CE466AB221.md)
-   [set\_min\_delay](GUID-244CC545-2A74-4548-8861-D493EAB878BA.md)
-   [set\_max\_delay](GUID-CDCFAAE7-BB67-4F0A-9E54-88F759325E05.md)
-   [set\_multicycle\_path](GUID-652A2AE7-5995-4C36-A9DF-FDCA8CE0B5C3.md)

**Parent topic:**[SmartTime Tcl Commands](GUID-96623DD0-9D90-4AFA-90C3-B2BAEEE15670.md)

