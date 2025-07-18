# organize\_tool\_files

## Description

This Tcl command is used to specify specific files to be passed to and used by a Libero tool. If you do not want to pass file by Libero tools then specify `-file` option value as empty: `-file {}`.

```
organize_tool_files \
         -tool {tool_name} \
         [-file {absolute path to specific file} ] \
         [-module {<design_name>::work} ] \
         -input_type {value}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|tool|string|Specifies the name of the tool files you want to organize. Valid values are:`SYNTHESIZE | COMPILE | PLACEROUTE | SIM_PRESYNTH | SIM_POSTSYNTH | SIM_POSTLAYOUT | VERIFYTIMING`.|
|file|string|Specifies the absolute path to the specific file; there may be multiple -file arguments \(see example below\). It is mandatory. You can specify file as: `-file {filename}` or `-file "filename"`. You can repeat this argument for specifing multiple files.|
|module|string|Module definition, format is `<design_name>::work` or `<design_name>`. It is optional. Default is `<root_design_name>::work`.|
|input\_type|string|Specifies type of input file. Possible values are:`constraint | source | simulation | stimulus | unknown`. It is mandatory.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|'user.sdc' is not in the project.|
|None|Required parameter 'file' is missing.|
|None|Required parameter 'tool' is missing.|
|None|Required parameter 'input\_type' is missing.|
|None|input\_type: Invalid argument value: 'value' \(expecting source, constraint, simulation, stimulus or unknown\).|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'organize\_tool\_files -tool "tool name" \[-file "file"\]+ \[-module "module"\] -input\_type "source \| constraint \| simulation \| stimulus \| unknown" '.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following command organizes the test\_derived.sdc and user.sdc files of SDC \(Synopsys Design Constraint\) file type for the tool VERIFYTIMING for the sd1::work design.

```
organize_tool_files \ 
-tool {VERIFYTIMING} \
-file {D:/Designs/my_proj/constraints/test_derived.sdc} \
-file {D:/Designs/my_proj/constraints/user.sdc} \
-module {sd1::work} \
-input_type {constraint}
```

**Parent topic:**[Project Manager Tcl Commands](GUID-CE445F8D-419D-434B-9288-A0005F280E89.md)

