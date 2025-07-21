# create\_probe\_group

## Description

This Tcl command creates a new probe group.

```
create_probe_group -name {Group name}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|name|string|Specifies the name of the new probe group.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'name' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'create\_probe\_group -name "group name"'.|
|None|Parameter 'name' has illegal value.|

## Supported Families

<table id="GUID-B56EEE34-A56E-4E73-BCAF-21F615277629"><tbody><tr><td>

PolarFire

</td></tr><tr><td>

<br /> PolarFire SoC<br />

</td></tr><tr><td>

SmartFusion 2

</td></tr><tr><td>

IGLOO 2

</td></tr><tr><td>

RTG4

</td></tr></tbody>
</table>## Example

This example creates new probe group named "my\_new\_grp" :

```
create_probe_group -name my_new_grp
```

**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

