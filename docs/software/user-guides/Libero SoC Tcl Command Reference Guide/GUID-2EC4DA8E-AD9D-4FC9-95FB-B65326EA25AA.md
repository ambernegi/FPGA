# set\_programming\_file

## Description

This Tcl command Sets the programming file for a device. Either the -file or the -no\_file flag must be specified. A programming file must be loaded\(exported from Libero\). The device must be a Microchip device.

```
set_programming_file [-name {name}] \
-file {absolute or relative path and the name of file} \
[-no_file]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|name|string|Specifies the device name. This argument must be specified only in chain programming mode. It is optional.|
|file|stirng|Specifies the absolute or relative path and the name of programming file either stp or ppd file. stp and ppd are exported from libero - export bitstream dialog.|
|no\_file|none|Specifies to unload the current programming file.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|You must specify the device name parameter for the command 'set\_programming\_file' in chain programming mode.|
|None|You must either specify the 'file' or the 'no\_file' parameter.|
|None|Parameter 'file' has illegal value.|
|None|The device with name 'device\_name' does not exist.|

## Supported Families

<table id="GUID-A4FB756B-A656-4F46-87F1-0155D00BD61F"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

SmartFusion® 2

</td></tr></tbody>
</table>## Exceptions​

Must be a Microchip device.

## Example

The following command sets "e:/test/test.ppd" programming file in single programming mode:

```
set_programming_file -file {e:/test/test.ppd}
```

The following command sets "e:/test/test.stp" programming file in chain programming mode:

```
set_programming_file -name {MyDevice1} -file {e:/test/test.stp}
set_programming_file -name {MyDevice1} -no_file
```

**Parent topic:**[FlashPro Express Tcl Commands](GUID-4320979B-E17A-424D-ABEB-FC0D4BBACB08.md)

