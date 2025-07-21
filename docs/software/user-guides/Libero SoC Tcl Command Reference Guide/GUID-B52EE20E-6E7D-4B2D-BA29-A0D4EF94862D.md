# save\_smartdesign

## Description

This Tcl command saves all the changes made in a SmartDesign component.

```
save_smartdesign -sd_name "smartdesign_component_name"
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|Specifies the name of the SmartDesign component to be saved. It is mandatory.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'sd\_name' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'save\_smartdesign -sd\_name "sd\_name" '.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following example saves "top" SmartDesign.

```
save_smartdesign -sd_name {top}
```

## See Also

-   [open\_smartdesign](GUID-2D2BF568-BA10-4635-8D58-43ECF09AA359.md)

**Parent topic:**[Project Manager Tcl Commands](GUID-CE445F8D-419D-434B-9288-A0005F280E89.md)

