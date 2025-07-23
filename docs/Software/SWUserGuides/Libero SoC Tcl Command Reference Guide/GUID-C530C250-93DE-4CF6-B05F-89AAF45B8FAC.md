# sd\_delete\_bif\_pin

## Description

This tcl<br /> command deletes one or more BIF pins from the SmartDesign component.

**Important:** This command will not delete multiple bifs in this release. Support for deleting multiple pin a will be provided in the next Libero release. It is not required to build a SmartDesign component. It maps to an interactive user action in the SmartDesign Canvas and will not be present in the exported SmartDesign component Tcl description.​

```
sd_delete_bif_pin -sd_name {SmartDesign name} \
                  [-library "library"] \
                  -pin_name {pin name}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|Specifies the name of the SmartDesign component. It is<br /> mandatory. It is mandatory.|
|library|string|Specifies the name of the library the component belongs to. It<br /> is optional.|
|pin\_name|string|Specifies the name of the BIF port to be deleted. It is<br /> mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None​|Required parameter 'sd\_name' is missing.|
|None​|The component 'design\_name' doesn't exist.|
|None​|Required parameter 'pin\_name' is missing.|
|None|Parameter 'pin\_name' has illegal value.|
|None|Parameter 'param\_name' is not defined. Valid command<br /> formatting is 'sd\_delete\_bif\_pin -sd\_name "sd\_name" -pin\_name<br /> "pin\_name"'.|
|SDCTRL05​|Pin 'pin\_name' does not exist.|

## Supported Families

|Supported Families|Supported Versions|
|------------------|------------------|
|PolarFire®|v12.4+|
|SmartFusion® 2|v12.4+|
|RTG4™|v12.4+|
|IGLOO® 2|v12.4+|
|PolarFire SoC|v12.6+|

## Example

This examples<br /> deleted already create "BIF\_1" port from the 'Top'<br /> design:

```
sd_delete_bif_pin -sd_name {sd1} -pin_name {BIF_1}
```

## See Also

-   hdl\_core\_add\_bif
-   hdl\_core\_assign\_bif\_signal
-   sd\_create\_bif\_port

**Parent topic:**[SmartDesign Tcl Commands](GUID-92BDB298-D736-4F37-87A0-3E5E1200BEE6.md)

