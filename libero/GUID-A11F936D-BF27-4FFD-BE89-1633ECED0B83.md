# cut\_device

## Description

This Tcl command removes one or more devices from the chain. It places the removed device in the clipboard. Chain programming mode must be set to use this command. See the paste\_device command for more information.

```
cut_device -name {name}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|name|string|Specifies the device name. You can repeat this argument for multiple devices.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|The device with name 'device\_name' doesn't exist.|
|None|Required parameter 'name' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'cut\_device \[-name "name"\]+'.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following example removes the devices 'MyDevice1' and 'MyDevice2' from the chain.

```
cut_device -name {MyDevice1} -name {MyDevice2}
```

## See Also

-   paste\_device

**Parent topic:**[Configure JTAG Chain Tcl Commands](GUID-ABB3D62F-F2CF-49CC-9DC4-8C3B307A6A0A.md)

