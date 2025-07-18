# plot\_eye

## Description

This Tcl command is used to plot eye and export eye plots.

```
plot_eye [-deviceName "device name"] \
         -lane "Physical Lane Name" \
         [-file "filename"]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|deviceName|string|Optional user-defined device name. The device name is not required if there is only one device in the current configuration, or a device has already been selected using the set\_debug\_device command.|
|lane|string|Specify the lane instance name.|
|file|string|Specify the path to the location where the file is to be exported.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'lane' is missing.|
|None|Parameter 'file' has illegal value.|
|None|Plot Eye: Lane Name not found in the list of assigned physical lanes in Libero.Provide the correct lane name.|
|None|Parameter 'lane' has illegal value.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'plot\_eye \[-deviceName "device name"\] -lane "Physical Lane Name" \[-file "filename"\] .|

## Supported Families

<table id="GUID-FC6C94D1-07C0-4BF5-8F99-6C289B08376E"><tbody><tr><td>

PolarFire

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

This example plots eye for lane \{Q2\_LANE0\} and saves it into \{./export.txt\} file.

```
plot_eye -lane {Q2_LANE0} -file {./export.txt}
```

**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

