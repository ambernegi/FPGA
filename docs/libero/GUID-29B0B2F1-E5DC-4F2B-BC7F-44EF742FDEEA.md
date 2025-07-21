# generate\_design\_initialization\_data

## Description

This Tcl command creates the memory files on disk, adds the initialization clients to the target memories, and writes the configuration files to disk. This command also runs validation on the saved configuration files and writes out errors \(if any\) in the log. This command causes the UI of the Configure Design Initialization Data and Memories tool to refresh and show the latest configuration and validation errors \(if any\) in the tables. This command takes no parameters.

```
generate_design_initialization_data
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|None|None|None|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'generate\_design\_initialization\_data'.|

## Supported Families

<table id="GUID-C11CBFA2-9548-450B-AF63-6EE37D1455DE"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

This example creates the memory files on disk, adds the initialization clients to the target memories, and writes the configuration files to disk.

```
generate_design_initialization_data
```

**Parent topic:**[Programming and Configuration Tcl Commands](GUID-B021E93C-650D-42F1-B90A-AE43EE93E641.md)

