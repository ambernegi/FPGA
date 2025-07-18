# scan\_ecc\_memories

## Description

This Tcl command scans and reports any errors detected in the PolarFire, PolarFire SoC, RTG4, RT<br /> PolarFire, and RT PolarFire SoC TPSRAM blocks that have ECC enabled.

```
scan_ecc_memories [-deviceName "device name"] \
                  [-fileName "Output file name"]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|deviceName|string|Optional user-defined device name. The device name is not required if there is only one device in the current configuration, or a device has already been selected using the set\_debug\_device command.|
|fileName|string|Specify the name of the file where output is redirected. This argument is mandatory.|

|Return Type|Description|
|-----------|-----------|
|string|Reports memory blocks where data corruption has been detected.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'param\_name' is not defined. Valid command formatting is'scan\_ecc\_memories \[-deviceName "device name"\] \[-fileName "Output file name"\]'.|
|None|Parameter 'fileName' has illegal value.|
|None|Unable to write to the file.|

## Supported Families

<table id="GUID-7616DF5D-3B8F-45B1-9F56-78A59C908699"><tbody><tr><td>

PolarFire

</td></tr><tr><td>

PolarFire SoC

</td></tr><tr><td>

RTG4

</td></tr></tbody>
</table>## Example

This example scans TPSRAM blocks and saves the report into the \{./output.txt\} file. Log is provided with names of logical and physical blocks if corruption in data is detected. If no corruption is detected, then an appropriate message is provided.

```
scan_ecc_memories -filename {./output.txt}
```

**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

