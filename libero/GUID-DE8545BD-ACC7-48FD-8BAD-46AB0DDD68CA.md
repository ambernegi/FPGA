# sd\_rename\_instance

## Description

This Tcl command renames an instance name in a SmartDesign component. This command can be used to<br /> rename any type of instances \(instances of other SmartDesigns components, core<br /> components, HDL modules, HDL+ cores and Microchip macros\) in a SmartDesign.

**Note:** This command is not required to build a SmartDesign component. It command maps to an interactive user action in the SmartDesign Canvas and will not be present in the exported SmartDesign component Tcl description.

```
sd_rename_instance -sd_name {smartdesign component name} \
                   -current_instance_name {instance name} \
                   -new_instance_name {new instance name}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|Specifies the name of the SmartDesign component in which the instance name has to be renamed. It is mandatory.|
|current\_instance\_name|string|Specifies the name of the instance to be renamed. It is mandatory.|
|new\_instance\_name|string|Specifies the new instance name. It is mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'new\_instance\_name' has illegal value.|
|None|Parameter 'current\_instance\_name' has illegal value.|
|None|Required parameter 'sd\_name' is missing.|
|None|'Instance name' has been duplicated, please specify a different name.|
|None|Instance 'instance\_name' does not exist.|
|None|The first character of '\*' must be a letter.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'sd\_rename\_instance -sd\_name "sd\_name" -current\_instance\_name "current\_instance\_name" -new\_instance\_name "new\_instance\_name"'.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following command renames "DFF\_0" instance name with a new "DFF\_1" name in the 'top' SmartDesign

```
sd_rename_instance -sd_name {top} \
                   -current_instance_name {DFF_0} \
                   -new_instance_name {DFF_1}
```

## See Also

-   sd\_instantiate\_macro

**Parent topic:**[SmartDesign Tcl Commands](GUID-92BDB298-D736-4F37-87A0-3E5E1200BEE6.md)

