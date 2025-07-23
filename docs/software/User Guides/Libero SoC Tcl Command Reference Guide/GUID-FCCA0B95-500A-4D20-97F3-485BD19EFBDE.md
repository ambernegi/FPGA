# ssn\_analyzer\_set\_dontcare

## Description

This Tcl command is specific to the Simultaneous Switching Noise \(SSN\) Analyzer. It sets specific<br /> I/Os to the dont\_care state or resets dont\_care I/Os to non-dont\_care. A dont\_care<br /> I/O is considered as an aggressor only and not as a victim.

```
ssn_analyzer_set_dontcare -io {ioName} \
                          -iobank {ioBankName} \
                          -value {integer value}
```

## Supported Die/Package

|Family|Die|Package|
|------|---|-------|
|SmartFusion® 2|M2S150\|T\|TS|1152 FC|
|M2S090\|T\|TS|676 FBGA|
|M2S060\|T\|TS|676 FBGA|
|M2S050\|T\|TS\|T\_ES|896 FBGA|
|M2S025\|T\|TS|484 FBGA|
|M2S025\|T\|TS|400 VF|
|M2S010\|T\|TS|484 FBGA|
|IGLOO® 2|M2GL150\|T\|TS|1152 FC|
|M2GL090\|T\|TS|676 FBGA|
|M2GL060\|T\|TS|676 FBGA|
|M2GL050\|T\|TS|896 FBGA|
|M2GL025\|T\|TS|484 FBGA|
|M2GL025\|T\|TS|400 VF|
|M2GL010\|T\|TS|484 FBGA|

## Not Supported Die/Package

|Family|Die|Package|
|------|---|-------|
|RTG4™|RT4G150\|L|1657 FCG|
|PolarFire®|MPF200TS|FCS325|
|MPF300TS|FC484/FCS536/FCV484|
|MPF300XT|FCG484|
|MPF500TS|FC1152/FC784|
|RTPF500T\|TL\|TS\|TLS|CG1509|

**Important:** 1 ns pulse width is only supported for MPF300XT/FCG1152.

## Arguments

<table id="GUID-8A549F3D-A224-44F5-88C6-5F56AC5EED03"><thead><tr><th>

Parameter

</th><th>

Type

</th><th>

Description

</th></tr></thead><tbody><tr><td>

io

</td><td>

string

</td><td>

Specifies the I/O to be dont\_care \(the don't\_care I/O is not be considered as a victim,<br /> whereas it is considered as an aggressor for the SSN analysis\) or<br /> resets dont\_care I/Os to non-dont\_care.

</td></tr><tr><td>

iobank

</td><td>

string

</td><td>

Specifies the I/O bank name the specified I/O belongs to.

</td></tr><tr><td>

value

</td><td>

integer

</td><td>

Specifies an integer of 0 or 1 where -   1 is used to set an I/O to be dont\_care.
-   0 is used to reset an I/O to be non-dont\_care.

</td></tr></tbody>
</table>|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'ioBank' is not defined. Valid command formatting is 'set\_dontcare -io "io" -iobank "iobank" -value "integer value"'.|
|None|Required parameter 'iobank' is missing.|
|None|Parameter 'io' has illegal value.|
|None|Required parameter 'io' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'set\_dontcare -io "io" -iobank "iobank" -value "integer value"'.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following example sets the I/O named "DATA2" in I/O bank "Bank2" to dont\_care:

```
ssn_analyzer_set_dontcare -io {DATA2} 
                          -ioBank {Bank2} 
                          -value {1} 
```

The following example sets the dont\_care I/O named "DATA1" in I/O bank "Bank3" to non-dont\_care:

```
ssn_analyzer_set_dontcare -io {DATA1} \ 
                          -ioBank {Bank3} \
                          -value {0}
```

**Parent topic:**[Simultaneous Switching Noise Analyzer \(SSNA\) Tcl Commands](GUID-6974B6B6-2F4C-426D-AF6B-A4FC5791C527.md)

