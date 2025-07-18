# select\_libero\_design\_device

## Description

This Tcl command selects the Libero design device for the Programming Connectivity and Interface tool within Libero. This command is needed when the tool cannot automatically resolve the Libero design device when there are two or more identical devices that match the Libero design device in the configured JTAG chain.

```
select_libero_design_device -name {device name}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|name|string|Specifies a user-assigned unique device name in the JTAG chain. This paramater is mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'name' is missing.|
|None|The device '' doesn't exist.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'select\_libero\_design\_device -name "name"'.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

This example selects \{M3E050TS\} device for the Programming Connectivity and Interface tool within Libero.

```
select_libero_design_device -name {M3E050TS}
```

**Parent topic:**[Configure JTAG Chain Tcl Commands](GUID-ABB3D62F-F2CF-49CC-9DC4-8C3B307A6A0A.md)

