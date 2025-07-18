# read\_sdc

## Description

Read a SDC file into the component database.

```
read_sdc -component <filename>
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|-component|—|This is a mandatory flag for `read_sdc` command when we derive constraints.|
|filename|String|Path to the SDC file.|

|Return Type|Description|
|-----------|-----------|
|0|Command succeeded.|
|1|Command failed. There is an error. You can observe the error message in the console.|

## List of Errors

|Error Code|Error Message|Description|
|----------|-------------|-----------|
|ERR0023|Required parameter file name is missing.|The mandatory option file name is not specified.|
|ERR0000|SDC file &lt;file\_path&gt; is not readable.|The specified SDC file does not have read permissions.|
|ERR0001|Unable to open &lt;file\_path&gt; file.|The SDC file does not exist. The path must be corrected.|
|ERR0008|Missing `set_component` command in &lt;file\_path&gt; file|The specified component of SDC file does not specify the component.|
|ERR0009|&lt;List of errors from sdc file&gt;|The SDC file contains incorrect sdc commands. Example when there is an error in `set_multicycle_path` constraint: Error while executing command `read_sdc: in <sdc_file_path> file`: Error in command `set_multicycle_path: Unknown parameter [get_cells {reg_a}]`.|

## Supported Families

<table id="GUID-CE3C559F-304A-45BD-8DA3-D28A986E3100"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

PolarFire SoC

</td></tr><tr><td>

RTG4™

</td></tr><tr><td>

SmartFusion® 2

</td></tr><tr><td>

IGLOO® 2

</td></tr></tbody>
</table>## Example

```
read_sdc -component {./component/work/ccc0/ccc0_0/ccc0_ccc0_0_PF_CCC.sdc}
```

**Parent topic:**[Derive Constraints Tcl Commands](GUID-EF4215C4-4E60-4551-BFBD-C4A85BEC13C2.md)

**Related Links**  


[Working with the derive\_constraints Utility](GUID-E3B8F7D6-F5DB-4B9C-BADD-8A299A8946BD.md)

[set\_device](GUID-39C65B3D-C691-4828-B683-6BF6124A3D64.md)

[read\_verilog](GUID-A6B878AC-8A09-4A07-9F0F-8F56A93ACC4B.md)

[read\_vhdl](GUID-5A4AFED5-32F0-457C-B56A-82A66D7E56EB.md)

[set\_top\_level](GUID-F75EEF2F-7038-4A76-A731-9C5C3E42926E.md)

[read\_ndc](GUID-65B669F6-2223-4F29-A83C-8C9CD0036EB2.md)

[derive\_constraints](GUID-D8E94959-76E9-4271-97BF-B64A72DF17C1.md)

[write\_sdc](GUID-EF3BF9B5-94C1-4645-9554-4393735F9B29.md)

[write\_pdc](GUID-AC49E0C6-E7D0-4500-B3A7-DF56585FD7EE.md)

[write\_ndc](GUID-399EF5CE-68B7-4742-B3E0-DAAF4768D37B.md)

[add\_include\_path](GUID-39A8B4B7-B61B-40C6-A32F-BEB54CF08FA8.md)

