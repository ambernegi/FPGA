# smartpower\_init\_set\_set\_reset\_options

## Description

This Tcl command initializes the frequency and probability of all set and reset nets.

```
smartpower_init_set_set_reset_options \
         [-freq "decimal value [unit { Hz | KHz | MHz | % }]"] \
         [-proba "decimal value"]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|freq|decimal|Specifies the user input frequency \(in Hz, KHz, or MHz\) or the toggle rate \(in %\). If the unit is not provided and toggle rate is active, the value is handled as a toggle rate, if toggle rate is not active, the value is handled as a frequency. This parameter is optional.|
|proba|decimal|Specifies the user input probability in persentage\(%\). This parameter is optional.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'proba' must be a positive decimal value.|
|None|Parameter 'proba' must be less than or equal to 100.000.|
|None|proba: Invalid argument value: 'value' \(expecting decimal value\).|
|None|proba: Invalid argument value: 'value' \(expecting decimal value\).|
|None|Parameter 'proba' has illegal value.|
|None|freq: Parameter format incorrect \(expecting a positive decimal value, optionally followed by a unit \(possible values are Hz, KHz, MHz or %\)\).|
|None|Parameter 'freq' has illegal value.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'smartpower\_init\_set\_set\_reset\_options \[-freq "decimal value \[unit \{ Hz \| KHz \| MHz \| % \}\]"\] \[-proba "decimal value"\]'.|

## Supported Families

<table id="GUID-73E32F8B-98C2-414E-9D01-64C7C77A4D85"><tbody><tr><td>

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

The following example initializes all set/reset nets after executing "smartpower\_init\_do" with "-set\_reset \{true\}":

```
smartpower_init_do -set_reset {true}
smartpower_init_set_set_reset_options -freq {10 MHz} -proba {20}
```

## See Also

-   [smartpower\_init\_do](GUID-70780312-85E8-4779-A8B6-59BF892E04E0.md)

**Parent topic:**[SmartPower Tcl Commands](GUID-33C45F08-A467-4461-B5EF-8D86325E235A.md)

