# smartpower\_init\_set\_primaryinputs\_options

## Description

This Tcl command initializes the frequency and probability of all primary inputs.

```
smartpower_init_set_primaryinputs_options \
              [-freq "decimal value [unit { Hz | KHz | MHz | % }]"] \
              [-proba "decimal value"]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|freq|string|Specifies the user input frequency \(in Hz, KHz or MHz\) or the toggle rate in percentage\(%\). If the unit is not provided and toggle rate is active, the value is handled as a toggle rate, if toggle rate is not active, the value is handled as a frequency.|
|proba|decimal|Specifies the user input probability in percentage\(%\). Must be a positive decimal value and less than or equal to 100.000.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'proba' has illegal value.|
|None|proba: Invalid argument value: 'value' \(expecting decimal value\).|
|None|Parameter 'proba' must be a positive decimal value.|
|None|Parameter 'proba' must be less than or equal to 100.000.|
|None|Parameter 'freq' has illegal value.|
|None|freq: Parameter format incorrect \(expecting a positive decimal value, optionally followed by a unit \(possible values are Hz, KHz, MHz or %\)\).|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'smartpower\_init\_set\_primaryinputs\_options \[-freq "decimal value \[unit \{Hz \| KHz \| MHz \| %\}\]"\] \[-proba "decimal value"\]'.|

## Supported Families

<table id="GUID-0D848B5C-ACE9-4EE3-977A-278DF1CF0B55"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

SmartFusion® 2

</td></tr><tr><td>

RTG4™

</td></tr><tr><td>

IGLOO® 2

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

The following example initializes all primary inputs after executing smartpower\_init\_do with -primaryinputs \{true\}:

```
smartpower_init_set_primaryinputs_options -freq {10 MHz} -proba {20}
```

## See Also

-   [smartpower\_init\_set\_combinational\_options](GUID-33E6B90F-0E5A-481B-950E-426395EDE7DE.md)
-   [smartpower\_change\_clock\_statistics](GUID-39111E73-F676-4B0B-92CA-6CF8E8219CCA.md)

**Parent topic:**[SmartPower Tcl Commands](GUID-33C45F08-A467-4461-B5EF-8D86325E235A.md)

