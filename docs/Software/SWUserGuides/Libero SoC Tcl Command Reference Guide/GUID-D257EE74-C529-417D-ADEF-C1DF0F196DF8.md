# update\_fp6\_programmers

## Description

This Tcl command updates all the FlashPro6 programmers that require update. This<br /> command takes no parameters. To execute the Tcl Command in Libero SoC, add the<br /> command before `run_tool`. To execute the Tcl command in FlashPro<br /> Express tool or SmartDebug tool, add the Tcl command before<br /> `run_selected_actions`.

```
update_fp6_programmers
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|None|None|None|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'param\_name' is not defined. Valid command formatting<br /> is 'update\_fp6\_programmers'.|

## Supported Families

<table id="GUID-C11CBFA2-9548-450B-AF63-6EE37D1455DE"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

This example updates all the FlashPro6 programmers that require update.

```
update_fp6_programmers
```

**Parent topic:**[FlashPro Express Tcl Commands](GUID-4320979B-E17A-424D-ABEB-FC0D4BBACB08.md)

**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

