# set\_data\_storage\_client

## Description

This Tcl command is added to the `uprom.cfg` file, which will then be given as the<br /> parameter to the configure\_uprom command.

```
set_data_storage_client -client_name {name} \
                        -number_of_words {number} \
                        -content_type {MEMORY_FILE | STATIC_FILL} \
                        -memory_file_format {Microsemi-Binary} \
                        -memory_file {path} \
                        -base_address {hexadecimal_string} \
                        -use_for_simulation {0}
```

## Arguments

<table id="GUID-870704B4-A69F-4E55-8E11-CDD8F17C99C9"><thead><tr><th>

Parameter

</th><th>

Type

</th><th>

Description

</th></tr></thead><tbody><tr><td>

client\_name

</td><td>

string

</td><td>

The name of the client. Must start with an alphabetic letter. Underscores and numerals are allowed at all positions other than the first.

</td></tr><tr><td>

number\_of\_words

</td><td>

integer

</td><td>

The size of the client specified in number of words.

</td></tr><tr><td>

content\_type

</td><td>

string

</td><td>

Source of data for the client. This can either be a memory file, or all zeros. Allowed values are MEMORY\_FILE or STATIC\_FILL. -   MEMORY\_FILE - content memory file must be specified.
-   STATIC\_FILL - client memory will be filled with 1s, no content memory file.

</td></tr><tr><td>

memory\_file\_format

</td><td>

string

</td><td>

Only ‘Microchip-Binary’ is supported at this time.

</td></tr><tr><td>

memory\_file

</td><td>

string

</td><td>

Path of the memory file. This can be absolute, or relative to the project.

</td></tr><tr><td>

base\_address

</td><td>

hexadecimal

</td><td>

Hexadecimal address where the first byte of user data will be placed.

</td></tr><tr><td>

use\_for\_simulation

</td><td>

boolean

</td><td>

Only value 0 is allowed.

</td></tr></tbody>
</table>|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|None|

## Supported Families

<table id="GUID-5BA78D61-CE75-4DCA-8090-80FCFE095290"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

This example sets data storage client with the following parameter values.

```
set_data_storage_client -client_name {client1} \
                        -number_of_words {57} \
                        -use_for_simulation {0} \
                        -content_type {MEMORY_FILE} \
                        -memory_file_format {Microsemi-Binary} \
                        -memory_file {D:/local_z_folder/work/memory_files/sar_86586_uprom.mem} \
                        -base_address {0}
```

**Parent topic:**[Programming and Configuration Tcl Commands](GUID-B021E93C-650D-42F1-B90A-AE43EE93E641.md)

