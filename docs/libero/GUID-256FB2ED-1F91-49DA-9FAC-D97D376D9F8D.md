# set\_debug\_programmer

## Description

Identifies the programmer you want to use for debugging \(if you have more than one\).

```
set_debug_programmer -name { programmer_name }
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|name|string|Specify the programmer. This argument is mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Unable to select programmer 'prog\_name' for debug.|
|None​|Required parameter 'name' is missing.|
|None​|Parameter 'param\_name' is not defined. Valid command formatting is 'set\_debug\_programmer -name "programmer name"'|
|None​|Parameter 'name' has illegal value.|

## Supported Families

<table id="GUID-C4B10434-10FE-42DA-B80B-074836E1EA83"><tbody><tr><td>

PolarFire

</td></tr><tr><td>

PolarFire SoC

</td></tr><tr><td>

SmartFusion 2

</td></tr><tr><td>

IGLOO 2

</td></tr><tr><td>

RTG4

</td></tr></tbody>
</table>## Example

The following example selects the programmer 10841:

```
set_debug_programmer -name {10841}
```

**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

