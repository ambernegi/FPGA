# read\_envm\_memory

## Description

This is a PolarFire SoC specific tcl command to read the ENVM memory from the device. It reads from the client configured in Libero or a page range can be given as inputs. The output will be in a matrix form displayed byte-wise and several rows with page number information.

Client name is optional in the command. However, if client name is specified, then it is validated against its start page and end page from the design.

```
read_envm_memory [-deviceName "device name"] \
                 [-client "client name"] \
                 -startpage "integer value" \
                 -endpage "integer value" \
                 [-fileName "envm data file name"]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|deviceName|string|Parameter is optional if only one device is available in the current configuration.|
|client|string|Specifies the client name.|
|startpage|string|Specifies the start page that is integer value.|
|endpage|string|Specifies the end page that is integer value.|
|fileName|string|Specifies the file name path where the data will be saved.|

|Return Type|Description|
|-----------|-----------|
|String|The output will be in a matrix form displayed byte-wise and several rows with page number information.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'startpage' is missing.|
|None|Required parameter 'endpage' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'read\_envm\_memory \[-deviceName "device name"\] \[-client "client name"\] -startpage "integer value" -endpage "integer value" \[-fileName "envm data file name"\]'|

## Supported Families

<table id="GUID-3F89E79C-A51F-4BB1-B611-849AA5A4C9A4"><tbody><tr><td>

PolarFire SoC\*

</td></tr></tbody>
</table>## Example

This example reads eNVM memory from 0 to 205 pages.

```
read_envm_memory -startpage "0" -endpage "205"
```

**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

