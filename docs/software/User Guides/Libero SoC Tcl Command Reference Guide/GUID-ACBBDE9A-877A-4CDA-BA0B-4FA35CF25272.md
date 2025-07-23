# FLASH\_FREEZE

## Description

"FLASH\_FREEZE" is a command tool used in configure\_tool. Use the "configure\_tool -name \{FLASH\_FREEZE\}" command to specify:

-   The state of the uRAM and LSRAM when the FPGA fabric is in the Flash Freeze state.

    ```
    configure_tool -name {FLASH_FREEZE} \
                   -params {name:value} \
                   -params {name:value}
    ```

-   The MSS clock source when the FPGA fabric is in the Flash Freeze state.

```
configure_tool -name {FLASH_FREEZE} -params {parameter:value}
```

## Arguments

<table id="GUID-CFE4611D-3E3E-41E1-88CA-3DFA24877EF9"><thead><tr><th>

Parameter

</th><th>

Type

</th><th>

Description

</th></tr></thead><tbody><tr><td>

FF\_RAM\_STATE

</td><td>

string

</td><td>

Specifies the uRAM and LSRAM state during Flash Freeze. The possible for this argument are: -   SUSPEND - Sets to Suspend; LSRAM and uSRAM contents are retained. By default is SUSPEND.
-   SLEEP - Sets to Sleep; LSRAM and uSRAM contents are not retained.

</td></tr><tr><td>

FF\_MSS\_CLOCK

</td><td>

string

</td><td>

Specifies the MSS Clock Source during Flash Freeze. The possible value for this argument are: -   RCOSC\_1MHZ - On-Chip 1 MHz RC Oscillator. By default is RCOSC\_1MHZ.
-   RCOSC\_50MHZ - On-Chip 50 MHz RC Oscillator.

</td></tr></tbody>
</table>|Return Type|Description|
|-----------|-----------|
|Integer|Returns 0 on success and 1 on failure.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'params' is missing.|

## Supported Families

|Supported Families|
|------------------|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following example sets uRAM and LSRAM state as "SUSPEND" and MSS Clock On-Chip 50 MHz RC Oscillator:

```
configure_tool -name {FLASH_FREEZE} \
               -params {FF_MSS_CLOCK:RCOSC_50MHZ} \
               -params {FF_RAM_STATE:SLEEP}
```

**Parent topic:**[Command Tools](GUID-57EC11A5-2069-4086-ADFB-D63113B3E275.md)

