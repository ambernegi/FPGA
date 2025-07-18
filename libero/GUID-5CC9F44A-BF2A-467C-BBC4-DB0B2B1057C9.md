# configure\_flashpro6\_prg

## Description

This Tcl command changes FlashPro6 programmer settings. You can configure FlashPro6 programmer in Libero SoC Software or via this command in FlashPro Express software. You will be able to set VPUMP voltage for the programmer and force JTAG \(Joint Test Action Group\) or SPI \(Serial Peripheral Interface bus\) clock from the TCK \(JTAG clock\) or SCK \(SPI clock\) drop down list of frequencies you want to use for the programming. Similarly other programmer such as FlashPro5/4/3 can also selected and related options can be set.

```
configure_flashpro6_prg [-vpump {ON | OFF} ] \
[-force_freq {ON | OFF}] \
[-freq "freq"] \
[-force_sck_freq {ON | OFF} \
[-sck_freq "sck_freq"]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|vpump|string|Enables FlashPro5 programmer to drive VPUMP. Set to ON to drive VPUMP. Valid value is ON \(default\) or OFF.|
|force\_freq|string|Forces the FlashPro software to use the TCK frequency specified by the software rather than the TCK frequency specified in the programmer file. Valid values are ON, OFF\(default\).|
|freq|integer|Specifies the TCK frequency in MHz. TCK is used with a maximum frequency of 20 MHz, and the default frequency is 4 MHz. It can takes the value between 1 MHz to 6 MHz or it can be 10,15 or 30 MHz.|
|force\_sck\_freq|string|Forces the FlashPro software to use the SCK frequency. Valid values are ON, OFF\(default\).|
|sck\_freq|floating|Specifies the SCK frequency in MHz. SCK is used with a maximum frequency of 40 MHz, and the default frequency is 20 MHz. Limitation of the SCK frequency for the selected programmer: 1.00, 2.00, 2.50, 3.33, 4.00, 5.00, 6.67, 8.00, 10.00, 13.33, 20.00 MHz|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

<table id="GUID-7BFF1E38-D842-4467-AFDD-70FB58CD23E9"><thead><tr><th>

Error Code

</th><th>

Description

</th></tr></thead><tbody><tr><td>

None

</td><td>

Parameter 'parameter\_name' is not defined. Valid command formatting is ```
configure_flashpro6_prg [-vpump "ON | OFF"] \
[-force_freq "ON | OFF"] \
[-freq "freq"] \
[-force_sck_freq "ON | OFF"] \
[-sck_freq "sck_freq"]'
```

</td></tr><tr><td>

None

</td><td>

Invalid 'freq' argument value: '4' \(expecting 1000000, 2000000, 3000000, 4000000, 5000000, 6000000, 7000000, 8000000, 9000000, 10000000, 11000000, 12000000, 13000000, 14000000, 15000000, 16000000, 17000000, 18000000, 19000000 or 20000000\).

</td></tr><tr><td>

None

</td><td>

Invalid 'sck\_freq' argument value: '2' \(expecting 400000, 500000, 600000, 700000, 800000, 1000000, 2000000, 2500000, 3330000, 4000000, 5000000, 6670000, 8000000, 10000000, 13330000, 20000000 or 40000000\)

</td></tr></tbody>
</table>## Supported Families

<table id="GUID-A32F7C08-0CB5-4343-8E75-3ABAE98BC8D8"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

PolarFire SoC

</td></tr><tr><td>

SmartFusion® 2

</td></tr></tbody>
</table>## Example

The following example sets TCK at a frequency of 4 MHz and sets force\_freq to OFF:

```
configure_flashpro6_prg -force_freq {OFF} -freq {4}
```

The following example sets SCK at a frequency of 2 MHz and sets force\_sck\_freq to ON:

```
configure_flashpro6_prg -force_sck_freq {ON} -sck_freq {2}
```

## See Also

-   configure\_flashpro3\_prg
-   configure\_flashpro4\_prg
-   configure\_flashpro5\_prg

**Parent topic:**[FlashPro Express Tcl Commands](GUID-4320979B-E17A-424D-ABEB-FC0D4BBACB08.md)

