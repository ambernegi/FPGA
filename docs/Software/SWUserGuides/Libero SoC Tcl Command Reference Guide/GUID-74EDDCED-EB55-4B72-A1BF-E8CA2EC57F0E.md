# set\_as\_target

## Description

This Tcl command sets a SDC, PDC file as the target file to receive and store new constraints. To set \*.sdc \*.pdc files as target, click the Manage Constraints tool name from Design Flow.

```
set_as_target [-type { constraint_file_type to associate } ] \
              -file { file to set as target }
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|type|string|Specifies the file type: sdc, io\_pdc or fp\_pdc.|
|file|string|Specifies the file which shoukd be set as target.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'file' is missing.|
|None|-file option can't be empty.Please specify a valid path|
|None|Invalid argument passed to -type option, the valid values are io\_pdc/fp\_pdc/sdc|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'set\_as\_target \[-type "type to associate"\] -file "file to set as target"' .|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

This command sets the SDC file project\_folder /constraints/user.sdc as the target to receive and store new SDC commands.

```
set_as_target -type {sdc} -file {./constraint/user.sdc}
```

This command sets the PDC file project\_folder /constraints/user.pdc as the target to receive and store new PDC commands.

```
set_as_target -type {pdc} -file {./constraint/user.pdc}
```

## See Also

-   [unset\_as\_target](GUID-06271878-A36C-4722-93BC-46DC055BED0E.md)

**Parent topic:**[Project Manager Tcl Commands](GUID-CE445F8D-419D-434B-9288-A0005F280E89.md)

