# configure\_flashpro4\_prg

## Description

This Tcl command changes FlashPro4 programmer settings. You can configure FlashPro programmer in Libero SoC Software or wia this command in FlashPro Express software. You will be able to set VPUMP voltage for the programmer and force TCK drop down list of frequencies you want to use for the programming. Similarly other programmer such as FlashPro3/5/6 can also be selected and related options can be set

```
configure_flashpro4_prg [-vpump {ON|OFF}] \
[-clk_mode {discrete_clk | free_running_clk}] \
[-force_freq {ON|OFF}] \
[-freq {freq}]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|vpump|string|Enables FlashPro4 programmer to drive VPUMP. Set to ON to drive VPUMP. Valid values are ON or OFF.|
|clk\_mode|string|Specifies free running or discrete TCK. Valid value is "discrete\_clk" or "free\_running\_cl".|
|force\_freq|string|Forces the FlashPro software to use the TCK frequency specified by the software rather than the TCK frequency specified in the programmer file. Valid values are ON or OFF.|
|freq|integer|Specifies the TCK frequency in MHz. It can be between 1 MHz to 6 MHz.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

<table id="GUID-DBD669A2-2DD6-43B9-8039-3BF7A0B1768F"><thead><tr><th>

Error Code

</th><th>

Description

</th></tr></thead><tbody><tr><td>

None

</td><td>

Parameter 'parameter\_name' is not defined. Valid command formatting is ```
configure_flashpro4_prg [-vpump "ON | OFF"] \
[-clk_mode "free_running_clk | discrete_clk"] \
[-force_freq "ON | OFF"] \
[-freq "freq"]
```

</td></tr><tr><td>

None

</td><td>

Invalid argument value: \(expecting 1000000, 2000000, 3000000, 4000000, 5000000 or 6000000\).

</td></tr><tr><td>

None

</td><td>

Invalid 'clk\_mode' argument value: '' \(expecting free\_running\_clk or discrete\_clk\).

</td></tr></tbody>
</table>## Supported Families

<table id="GUID-73E79B8D-0E43-464F-BB29-5F1B80C0317D"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

SmartFusion® 2

</td></tr></tbody>
</table>## Example

The following example sets the VPUMP option to ON and uses a free running TCK at a frequency of 4 MHz \(force\_freq is set to OFF\):

```
configure_flashpro4_prg -vpump {ON} \
-clk_mode {free_running_clk} \
-force_freq {OFF} \
-freq {4}
```

The following example sets the VPUMP option to ON, uses a discrete TCK and sets force\_freq to ON at 2 MHz:

```
configure_flashpro4_prg -vpump {ON} \
-clk_mode {discrete_clk} \
-force_freq {ON} \
-freq {2}
```

## See Also

-   configure\_flashpro3\_prg
-   configure\_flashpro5\_prg
-   configure\_flashpro6\_prg

**Parent topic:**[FlashPro Express Tcl Commands](GUID-4320979B-E17A-424D-ABEB-FC0D4BBACB08.md)

