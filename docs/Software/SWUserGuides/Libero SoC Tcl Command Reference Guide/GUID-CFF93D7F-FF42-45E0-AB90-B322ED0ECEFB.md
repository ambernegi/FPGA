# set\_global\_include\_file

## Description

This Tcl command for setting a file as global include file.

```
set_global_include_file -file {filename}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|file|string|The user provides the file path to set as global include file. The file path can be absolute path, linked files path or path with Environment variable from project settings.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Invalid Global Include File 'value'.|
|None|Parameter 'file' has illegal value.|
|None|Required parameter 'file' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'set\_global\_include\_file -file "set global include file"'.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

This example sets global include file with absolute file path.

```
set_global_include_file -file {E:\prj\global_include_files\hdl\add.h}
```

ENV from Project settings

```
set_global_include_file -file {${ENV_2}/xyz.h}
```

Linked Files TCL variable

```
set_global_include_file -file "$proj/hdl/abcd.v"
```

**Parent topic:**[Project Manager Tcl Commands](GUID-CE445F8D-419D-434B-9288-A0005F280E89.md)

