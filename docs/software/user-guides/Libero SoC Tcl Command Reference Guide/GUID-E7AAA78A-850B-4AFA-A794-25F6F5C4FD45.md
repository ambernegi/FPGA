# sd\_instantiate\_hdl\_core

## Description

This Tcl command instantiates a HDL+ core in a SmartDesign component. HDL+ core definition must be created on a HDL module before using this command.

```
sd_instantiate_hdl_core -sd_name {smartdesign component name} \
                        -hdl_core_name {hdl core module name} \
                        [-instance_name {instance name}]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|Specifies the name of the SmartDesign component. It is mandatory.|
|hdl\_core\_name|string|Specifies the name of the HDL+ core module being instantiated in the SmartDesign component. It is mandatory.|
|instance\_name|string|Specifies the instance name of the HDL+ core being instantiated in the SmartDesign. It is optional. By default, the instance name is &lt;hdl\_core\_module\_name&gt;\_&lt;index&gt;; \(index is an automatically generated integer starting at 0 such that the instance name is unique in the SmartDesign\).|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'sd\_name' is missing.|
|None|Required parameter 'hdl\_core\_name' is missing.|
|None|'1' violates HDL naming rules, please specify a different name|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'sd\_instantiate\_hdl\_core -sd\_name "sd\_name" -hdl\_core\_name "hdl\_core\_name" \[-instance\_name "instance\_name"\]'.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following example instantiates a HDL+ "top" core in a "mydesign" SmartDesign component as "top\_0" \(by default\):

```
sd_instantiate_hdl_core -sd_name {mydesign} \
                        -hdl_core_name {top} \
                        -instance_name {}
```

## See Also

-   sd\_instantiate\_hdl\_macro

-   sd\_instantiate\_core


**Parent topic:**[SmartDesign Tcl Commands](GUID-92BDB298-D736-4F37-87A0-3E5E1200BEE6.md)

