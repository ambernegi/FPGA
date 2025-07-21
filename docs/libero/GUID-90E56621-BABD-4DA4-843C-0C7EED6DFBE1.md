# smartpower\_remove\_scenario

## Description

This Tcl command removes a custom scenario from the current design.

```
smartpower_remove_scenario -name {Scenario name}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|name|string|Specifies the name of the custom scenario to be removed. This parameter is mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'name' has illegal value.|
|None|Required parameter 'name' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'smartpower\_remove\_scenario -name "scenario name"'.|

## Supported Families

<table id="GUID-AA9783E3-77D5-4DCA-93DA-BAB8CCE88A87"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

SmartFusion® 2

</td></tr><tr><td>

RTG4™

</td></tr><tr><td>

IGLOO® 2

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

This example removes a "MyScenario" custom scenario from the current design:

```
smartpower_remove_scenario -name {MyScenario}
```

## See Also

-   [smartpower\_add\_new\_scenario](GUID-7295EA35-AE66-494A-984A-D173C8C69BAE.md)
-   [smartpower\_edit\_scenario](GUID-40A7EC2B-26A6-4EE6-B080-3F9BED9021DC.md)

**Parent topic:**[SmartPower Tcl Commands](GUID-33C45F08-A467-4461-B5EF-8D86325E235A.md)

