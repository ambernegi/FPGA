# smartpower\_init\_set\_registers\_options

## Description

This Tcl command initializes the frequency and probability of all register outputs.

```

smartpower_init_set_registers_options \
		[-with "default"] \
        	[-freq "decimal value [unit { Hz | KHz | MHz | % }]"] \
		[-proba "decimal value"]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|freq|string|Specifies the user input frequency \(in Hz, KHz, or MHz\) or the toggle rate in percentage\(%\). If the unit is not provided and togglerate is active, the value is handled as a toggle rate; if toggle rate is not active, the value is handled as a frequency.|
|proba|decimal|Specifies the user input probability in percentage\(%\). Must be less than or equal to 100.000.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'proba' has illegal value.|
|None|Parameter 'proba' must be less than or equal to 100.000.|
|None|proba: Invalid argument value: 'value' \(expecting decimal value\).|
|None|Parameter 'freq' has illegal value.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'smartpower\_init\_set\_registers\_options \[-freq "decimal value \[unit \{ Hz \| KHz \| MHz \| % \}\]"\] \[-proba "decimal value"\]'.|

## Supported Families

<table id="GUID-5AB56E6D-E4D2-49FE-869E-55B87FE700F9"><tbody><tr><td>

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

The following example initializes all register outputs after executing "smartpower\_init\_do with -registers \{true\}":

```
smartpower_init_set_registers_options -freq {10 MHz} \
                                      -proba {20}
```

**Parent topic:**[SmartPower Tcl Commands](GUID-33C45F08-A467-4461-B5EF-8D86325E235A.md)

