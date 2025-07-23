# set\_usk\_client

## Description

This Tcl command is added to the `sNVM .cfg` file that is given as the parameter<br /> to the configure\_snvm command. The USK client is required if sNVM has one or more<br /> clients of type ‘Authenticated’.

```
set_usk_client -start_page {number} \
               -key {Hexadecimal string of size 24} \
               -use_for_simulation {0 | 1} \
               -reprogram {0 | 1}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|start\_page|integer|The page number in sNVM where data for this client will be placed.|
|key|hexadecimal|A string of 24 hexadecimal characters.|
|use\_for\_simulation|boolean|Specifies whether the client will be used for simulation or not. Possible values are 0 or 1.|
|reprogram|boolean|Specifies whether the client will be programmed into the final design or not. Possible values are 0 or 1.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|None|

## Supported Families

<table id="GUID-7CBAF7E9-CFA1-4F51-91E4-0E8C51B8766F"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

This example sets the USK client with the following parameter values.

```
set_usk_client -start_page 4 \
               -key {D8C8831F3A2F72EDC569503F} \
               -use_for_simulation 0 \
               -reprogram 1
```

## See Also

-   set\_plain\_text\_client
-   set\_plain\_text\_auth\_client
-   set\_cipher\_text\_auth\_client

**Parent topic:**[Programming and Configuration Tcl Commands](GUID-B021E93C-650D-42F1-B90A-AE43EE93E641.md)

