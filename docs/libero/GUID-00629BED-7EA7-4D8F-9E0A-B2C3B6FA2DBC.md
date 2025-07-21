# GENERATEPROGRAMMINGDATA

## Description

"GENERATEPROGRAMMINGDATA" is the name of a command tool used in the run\_tool command. The "run\_tool -name \{GENERATEPROGRAMMINGDATA\}" Tcl command generates the files needed for generating programming bitstream files.

```
run_tool -name {GENERATEPROGRAMMINGDATA}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|None|None|None|

|Return Type|Description|
|-----------|-----------|
|Integer|Returns 0 on success and 1 on failure.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|None|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following command generats programming bitstream file:

```
run_tool -name {GENERATEPROGRAMMINGDATA}
```

**Parent topic:**[Command Tools](GUID-57EC11A5-2069-4086-ADFB-D63113B3E275.md)

