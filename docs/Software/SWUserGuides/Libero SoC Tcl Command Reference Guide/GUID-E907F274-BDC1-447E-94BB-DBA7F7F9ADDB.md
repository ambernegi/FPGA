# nvm\_update\_storage\_client

## Description

This Tcl command updates an existing storage client in the SmartFusion 2 and IGLOO 2 eNVM.

**Note:** You can repeat &lt;params&gt; argument for specifying multiple parameters.

```
nvm_update_storage_client -params {parameter:value}
```

This command is usually put in a configuration `*.cfg` file and passed as an<br /> argument to the script parameter of the run\_tool command.

```
run_tool -name {UPDATE_ENVM} -script "update.cfg"
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|client\_name|string|Specifies the name of the eNVM storage client to update.|
|number\_of\_words|decimal|Specifies the number of words, `number_of_words` available to users = Number of user pages \* BYTES\_PER\_PAGE \*8 / word\_size.|
|use\_for\_simulation|boolean|Specifies whether or not the storage client is used for simulation. The possible value are: true, 1, false or 0.|
|base\_address|hexadecimal|Specifies the client base address. eNVM address range and available number of words are device dependent. See the [eNVM Configuration User Guide for details.](https://coredocs.s3.amazonaws.com/Libero/SmartFusion2MSS/MSS_ENVM/sf2_mss_envm_config_ug_1.pdf)|
|retrieve\_address|boolean|Specifies whether or not the address is retrieved from a file.|
|reprogram|boolean|Specifies whether reprogram or not the data storage client is re-programmed.|
|memory\_file\_format|string|Specifies the memory file format: INTELHEX \| MOTOROLAS \|SIMPLEHEX \| BINARY.|
|memory\_file|string|Specifies the absolute or relative path of the memory file.|
|content\_type|string or integer|Specifies the content type.|
|lock\_address|boolean|If set to 1, the start address of the client\(s\) is locked and cannot be changed during optimization..|
|static\_fill\_pattern|string|Specifies the static fill pattern: 0 or 1.|
|use\_as\_rom|boolean|Specifies whether or not the data storage client is to be used as ROM.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|None|

## Supported Families

<table id="GUID-0D42FD9C-3B7A-4B80-BB9A-7EC50C23F73E"><tbody><tr><td>

SmartFusion® 2

</td></tr><tr><td>

IGLOO® 2

</td></tr></tbody>
</table>## Example

The following example configures eNVM storage client with "update\_envm.cfg": sets name, maximum devices to program and maximum value:

```
nvm_update_storage_client \
		    -client_name {client1} \
		    -word_size 32 \
                    -number_of_words {512}
                    -maximum_value {12}
```

## See Also

-   UPDATE\_ENVM
-   nvm\_update\_serialization\_client

**Parent topic:**[Programming and Configuration Tcl Commands](GUID-B021E93C-650D-42F1-B90A-AE43EE93E641.md)

