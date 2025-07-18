# sd\_remove\_comp\_synth\_attr

## Description

This Tcl command removes the synthesis attribute from the specified SmartDesign module.

```
sd_remove_comp_synth_attr -sd_name {SmartDesign component name} \
                          [-attr_name {synthesis attribute name}]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|This argument is used to specify the name of the SmartDesign module from which the synthesis attribute is removed. This is a mandatory argument.|
|attr\_name|string|Synthesis attribute to be deleted. If the argument is not specified, all the attributes are deleted.|

## Synthesis Attributes

The following is the list of attributes and directives available in the Synopsys® FPGA synthesis tool that are supported by SmartDesign.

|Name|Object|Attribute/Directive|
|----|------|-------------------|
|syn\_insert\_buffer|port, instance|Attribute|
|syn\_keep|net|Directive|
|syn\_maxfan|port, net, instance, register|Attribute|
|syn\_no\_compile\_point|module/architecture|Attribute|
|syn\_noclockbuf|port, net, module/architecture|Attribute|
|syn\_noprune|instance, module/architecture|Directive|
|syn\_preserve|register, port, module/architecture|Directive|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Failed to remove the synthesis attribute 'syn\_no\_compile\_point' from the component 'top'. This attribute does not exist.|
|None|Parameter 'attr\_name' has illegal value.|
|None|The component 'sd\_name' does not exist.|
|None|Parameter 'sd\_name' has illegal value.|
|None|Required parameter 'sd\_name' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'sd\_remove\_comp\_synth\_attr -sd\_name "sd\_name" \[-attr\_name "attr\_name"\]'.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

This example removes the "syn\_no\_compile\_point" attribute of the "top" component.

```
sd_remove_comp_synth_attr -sd_name {top} \
                          -attr_name {syn_no_compile_point}
```

## See Also

-   sd\_set\_comp\_synth\_attr

**Parent topic:**[SmartDesign Tcl Commands](GUID-92BDB298-D736-4F37-87A0-3E5E1200BEE6.md)

