# smartpower\_initialize\_clock\_with\_constraints

## Description

This Tcl command initializes the clock frequency and the data frequency of a single clock domain with a specified clock name and the initialization options.

**Note:**

-   This command is associated with the functionality of Initialize frequencies and probabilities dialog box.
-   This command is associated with the right click menu Synchronize Domain with SmartTime on a single clock domain in the Domains tab.

```
smartpower_initialize_clock_with_constraints -clock_name {value}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|clock\_name|string|Specifies the name of the clock that will be initialized. This parameter is mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'clock\_name' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'smartpower\_initialize\_clock\_with\_constraints \[-clock\_name "name of clock"\]+'.|

## Supported Families

<table id="GUID-6B3D2962-4A98-4568-B1F8-1C138A1A89B3"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

SmartFusion® 2

</td></tr><tr><td>

RTG4™

</td></tr><tr><td>

IGLOO® 2

</td></tr></tbody>
</table>## Example

The following example initializes "my\_clock" with clock constraints from SmartTime:

```
smartpower_initialize_clock_with_constraints -clock_name {my_clock}
```

## See Also

-   [smartpower\_create\_domain](GUID-2B3716BF-DF9B-43DE-9CD1-B7738860DECE.md)

**Parent topic:**[SmartPower Tcl Commands](GUID-33C45F08-A467-4461-B5EF-8D86325E235A.md)

