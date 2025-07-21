# sd\_invert\_pins

## Description

This Tcl command inverts one or more top level ports or instance level pins in a SmartDesign.

**Note:** ​​​This command will not work on multiple pins in release v2021.1. Support for multiple pins will be provided in the next Libero release.

```
sd_invert_pins -sd_name {smartdesign component name} \ -pin_names {port or pin names}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|Name of the SmartDesign component. It is mandatory.|
|pin\_names|string|Specified the names of the ports or pins to be inverted. It is mandatory. This parameter can take multiple values\(example below\). The command will fail if the port/pin does not exist.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'sd\_name' is missing.|
|None|The component 'design\_name' doesn't exist.|
|None|Parameter 'd' is not defined. Valid command formatting is 'sd\_invert\_pins -sd\_name "sd\_name" -pin\_names "\[pin\_names\]+"'.|
|SDCTRL05|Pin 'pin\_name' does not exist.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following example inverts "din\_d" top level port in a "mydesign" SmartDesign:

```
sd_invert_pins -sd_name {mydesign} -pin_names {"din_d"}
```

The following example inverts "top\_0:clk" instance pin in a "mydesign" SmartDesign:

```
sd_invert_pins -sd_name {mydesign} -pin_names {"top_0:clk"}
```

**Parent topic:**[SmartDesign Tcl Commands](GUID-92BDB298-D736-4F37-87A0-3E5E1200BEE6.md)

