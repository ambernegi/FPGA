# rename\_file

## Description

This Tcl command copies/renames a file specified by the `-file` parameter to a different name specified by the `-target` parameter. Creates a new file in the &lt;project\_name&gt; directory.

```
rename_file -file { absolute path and the name of file } -target { new_filename }
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|file|string|Specifies the absolute path and original name of the file.|
|target|string|Specifies the just new name of the file. If specified constraint file, then created new file in constraint directory, otherwise new file created in the &lt;project\_name&gt; directory, not renamed.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'file' is missing.|
|None|Parameter 'file' has illegal value.|
|None|Required parameter 'target' is missing.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following command copies the constraint a.sdc file specified by the `-file` parameter to a b.sdc specified by `-target` parameter in the "c:/user/" directory.

```
rename_file -file {c:/user/a.sdc} -target {b.sdc}
```

The following command copies the a.v verilog file specified by the `-file` parameter to a b.v specified by `-target` parameter in the project directory not in hdl.

```
rename_file -file { /libero_prj/hdl/a.v } -target {b.v}
```

**Parent topic:**[Project Manager Tcl Commands](GUID-CE445F8D-419D-434B-9288-A0005F280E89.md)

