# set\_plain\_text\_client

## Description

This Tcl command is added to the `sNVM.cfg` file that is given as the parameter to<br /> the configure\_snvm command.

```
set_plain_text_client -client_name {name} \
                      -number_of_bytes {number} \
                      -content_type {MEMORY_FILE | STATIC_FILL} \
                      -content_file_format {Microchip-Binary 8/16/32 bit} \
                      -content_file {path} \
                      -start_page {number} \
                      -use_for_simulation {0} \
                      -reprogram {0 | 1} \
                      -use_as_rom {0 | 1}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|client\_name|string|Specifies the name of the client. Needs to start with an alphabetic letter. Underscores and numerals are allowed at all positions other than the first.|
|number\_of\_bytes|integer|The size of the client specified in bytes.|
|content\_type|string|Source of data for the client. This can either be a memory file, or all zeros. Allowed values are MEMORY\_FILE or STATIC\_FILL|
|content\_file\_format|string|Only ‘Microchip-Binary 8/16/32 bit’ is supported at this time.|
|content\_file|string|Path of the memory file. This can be absolute, or relative to the project.|
|start\_page|integer|The page number in sNVM where data for this client will be placed.|
|use\_for\_simulation|boolean|Only value 0 is allowed.|
|reprogram|boolean|Specifies whether the client will be programmed into the final design or not. Possible values are 0 or 1.|
|use\_as\_rom|boolean|Specifies whether the client will allow only reads, or both read and writes. Possible values are 0 or 1.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|None|

## Supported Families

<table id="GUID-BCCBA108-8A68-4DDE-AE17-BDDAE754099F"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

This example sets plain\_tets client with the following parameter values.

```
set_plain_text_client -client_name {a} \
                      -number_of_bytes 12 \
                      -content_type {MEMORY_FILE} \
                      -content_file_format {Microchip-Binary 8/16/32 bit} \
                      -content_file {} \
                      -start_page 1 \
                      -use_for_simulation 0 \
                      -reprogram 1 \
                      -use_as_rom 0
```

## See Also

-   set\_cipher\_text\_auth\_client
-   set\_usk\_client

**Parent topic:**[Programming and Configuration Tcl Commands](GUID-B021E93C-650D-42F1-B90A-AE43EE93E641.md)

