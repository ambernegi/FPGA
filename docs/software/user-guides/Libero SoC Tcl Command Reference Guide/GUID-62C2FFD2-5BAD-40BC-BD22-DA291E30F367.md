# smartpower\_battery\_settings

## Description

This SmartPower Tcl command sets the battery capacity in SmartPower. The battery capacity is used to compute the battery life of your design.

```
smartpower_battery_settings [-capacity {decimal value}]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|capacity|decimal|Specify the battery capacity in mA\*Hours. Value must be a positive decimal. This parameter is mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|capacity: Invalid argument value: 'value' \(expecting decimal value\).|
|None|Parameter 'capacity' has illegal value.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'smartpower\_battery\_settings \[-capacity "decimal value"\]'.|

## Supported Families

<table id="GUID-11FA037C-5B63-46E3-B3BC-1CA38E4AE888"><tbody><tr><td>

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

This example sets the battery capacity to 1800 mA \* Hours.

```
smartpower_battery_settings -capacity {1800}
```

**Parent topic:**[SmartPower Tcl Commands](GUID-33C45F08-A467-4461-B5EF-8D86325E235A.md)

