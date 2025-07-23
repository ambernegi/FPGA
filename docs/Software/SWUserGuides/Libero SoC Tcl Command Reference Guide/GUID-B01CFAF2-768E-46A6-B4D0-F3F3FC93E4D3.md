# EXPORTNETLIST

## Description

"EXPORTNETLIST" is a command tool used in the run\_tool command. This command exports a<br /> `*.v` or `*.vhd` netlist file to the active<br /> synthesis implementation folder.

```
run_tool -name {EXPORTNETLIST}
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

The following command exports netlist file:

```
run_tool -name {EXPORTNETLIST}
```

**Parent topic:**[Command Tools](GUID-57EC11A5-2069-4086-ADFB-D63113B3E275.md)

