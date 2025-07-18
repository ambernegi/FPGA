# create\_smartdesign

## Description

This Tcl command creates a SmartDesign to your project. To create design, click the Create SmartDesign tool name from Design Flow.

```
create_smartdesign -sd_name "smartdesign_component_name"
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|Specifies the name of the SmartDesign component to be created. It is mandatory.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Cannot create SmartDesign ' smartdesign\_component\_name' because it violates HDL naming rules. Please specify a different name.|
|None|Required parameter 'sd\_name' is missing.|
|None|Parameter 'component' is missing or has invalid value.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'create\_smartdesign -sd\_name "sd\_name"'.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

Creates new design component with "top" name.

```
create_smartdesign -sd_name {top}
```

**Parent topic:**[Project Manager Tcl Commands](GUID-CE445F8D-419D-434B-9288-A0005F280E89.md)

