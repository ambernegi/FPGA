# configure\_envm

## Description

This Tcl command configures the eNVM clients in the eNVM tab of the Design and Memory<br /> Initialization tool. This command also specifies the user eNVM clients.

**Important:** You must run Generate Design Initialization Data \(generate\_design\_initialization\_data\) after configuring eNVM \(configure\_envm\) and/or Design Initialization \(configure\_design\_initialization\_data\).

``` {#CODEBLOCK_TJD_M3H_P1C}
configure_envm -cfg_file {path_to_configuration_file.cfg}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|cfg\_file|string|Specifies the path to the configuration file of the eNVM client. This parameter is mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'cfg\_file' is missing.|
|None|Unable to locate or read ENVM configuration file '\*ENVM.cfg'.|
|None|You have to specify ENVM configuration file for 'cfg\_file' parameter.|
|None|Parameter 'cfg\_file' has illegal value.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'configure\_envm -cfg\_file "cfg\_file"'.|

## Supported Families

<table id="GUID-43B975D4-9690-44DC-9829-118EA3E17AA4"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

This example configures the eNVM clients with \{`./src/ENVM.cfg`\} file.

``` {#CODEBLOCK_UJD_M3H_P1C}
configure_envm -cfg_file {./src/ENVM.cfg}
```

**Parent topic:**[Programming and Configuration Tcl Commands](GUID-B021E93C-650D-42F1-B90A-AE43EE93E641.md)

