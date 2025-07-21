# get\_user\_clock\_frequencies

## Description

This Tcl command calculates the user clock frequencies.

**Note:**

Before this commands usage user has to enable FHB\(FPGA Hardware Breakpoint\) controller from Libero project settings.

```
get_user_clock_frequencies [-deviceName "device name"] 
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|deviceName|string|Specify device name. This parameter is optional if only one device is available in the current configuration.|

|Return Type|Description|
|-----------|-----------|
|String|Displays user clock frequency in megahertz \(MHz\).|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Fhb control: The design does not have FHB enabled.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is.'get\_user\_clock\_frequencies \[-deviceName "device name"\] '.|

## Supported Families

<table id="GUID-FA989CD1-3396-4DEA-9136-F6AEFE4D7148"><tbody><tr><td>

PolarFire

</td></tr><tr><td>

<br /> PolarFire SoC<br />

</td></tr><tr><td>

SmartFusion 2

</td></tr><tr><td>

IGLOO 2

</td></tr><tr><td>

RTG4

</td></tr><tr><td>

 

</td></tr></tbody>
</table>## Example

Get 'M4' device user clock frequensy:

```
get_user_clock_frequencies -deviceName "M4" 
```

Output:

User clock frequency - clocking\_0\\/PF\_out0 value = 100.07 MHz

User clock frequency - clocking\_0\\/PF\_out1 value = 132.02 MHz

## See Also

-   event\_counter

-   run\_frequency\_monitor


**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

