# EXPORTSDF

## Description

"EXPORTSDF" is a command tool used in the configure\_tool and run\_tool command. This command exports the back annotated &lt;root\_name&gt;\_ba.v and &lt;root\_name&gt;\_ba.sdf files to the designer/&lt;root\_name&gt; folder.

```
configure_tool -name {EXPORTSDF} -params {DELAY_TYPE: true | false}
run_tool -name {EXPORTSDF}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|DELAY\_TYPE|boolean|Exports your enhanced min delays to include your best-case timing results in your Back Annotated file.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'params' is missing.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following example exports Back Annotated file:

```
configure_tool -name {EXPORTSDF} -params {DELAY_TYPE:true}
```

**Parent topic:**[Command Tools](GUID-57EC11A5-2069-4086-ADFB-D63113B3E275.md)

