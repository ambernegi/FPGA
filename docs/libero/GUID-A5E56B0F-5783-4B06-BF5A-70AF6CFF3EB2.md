# new\_project

## Description

This Tcl command creates a SmartDebug project that enables the user to debug the design. Either DDC can be used to create a project or construct automatically with DDC.

```
new_project [-location {project location}] \
        [-name {name of the new SmarDebug project}] \
        -import_ddc {path to the DDC file} \
        [-auto_construct {"TRUE"|"FALSE"}] \
        [-set_programmer {set debug programmer}]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|location|string|Specifiy the location of the project where user wants to create the project. Must not be an existing directory. This parameter is optional. If -location option is omitted, the tool creates a new project in the current directory.|
|name|string|Specifiy name of the new project. This parameter is optional. This parameter is optional. If this option is omitted, the tool creates a new project with 'untitled\_project' name.|
|import\_ddc|string|Specifiy the path to the DDC\(Design Debug Data Container\) file exported from Libero to be imported. Set empty parameter value if -auto\_construct is 1.|
|auto\_construct|boolean|Valid values are:TRUE or 1, FALSE or 0\(default\). Specify 1 or TRUE if you want to create new project importing DDC file otherwise specify 0 or FALSE. This parameter is optional.|
|set\_programmer|string|Set ID code of the programmer. This parameter is optional.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'param\_name' is not defined. Valid command formatting is'new\_project \[-location "project folder"\] \[-name "name"\] \[-import\_ddc "DDC file"\] \[-auto\_construct "TRUE \| FALSE"\] \[-set\_programmer "set debug programmer"\].|

.

## Supported Families

<table id="GUID-E0F7707D-BFA2-41B4-9D23-5C308A062793"><tbody><tr><td>

PolarFire

</td></tr><tr><td>

SmartFusion 2

</td></tr><tr><td>

IGLOO 2

</td></tr><tr><td>

RTG4

</td></tr></tbody>
</table>## Example

Create new project using Standalone SmartDebug:

```
new_project -location {/exprj} \
        -name {exprj} \
        -import_ddc {./src/top.ddc} \
        -auto_construct 0 \
        -set_programmer {AF01QVEAF}
```

## See Also

-   import\_ddc\_file


**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

