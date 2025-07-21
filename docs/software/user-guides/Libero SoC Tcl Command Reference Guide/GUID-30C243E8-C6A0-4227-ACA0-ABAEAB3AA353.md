# xcvr\_write\_register

## Description

This Tcl command writes SCB registers and their field values. Write value is in hex format. This command is used in SmartDebug Signal Integrity.

```
xcvr_write_register [-deviceName {device name}] \     
                    [-inst_name {Instance name}] \
                    -reg_name {Transceiver register name} \
                    -value {Transceiver register value}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|deviceName|string|Optional user-defined device name. The device name is not required if there is only one device in the current configuration, or a device has already been selected using the set\_debug\_device command.|
|inst\_name|string|Specify the lane instance name used in the design.|
|reg\_name|string|Specify the &lt;reg\_name&gt; for register name or &lt;reg\_name&gt;:&lt;field\_name&gt; for the register’s field.|
|value|integer|Specify the value in hex format.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'value' has illegal value.|
|None|Required parameter 'value' is missing.|
|None|Parameter 'reg\_name' has illegal value.|
|None|Required parameter 'reg\_name' is missing.|
|None|Parameter 'inst\_name' has illegal value.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is'xcvr\_write\_register \[-deviceName "device name"\] \[-inst\_name "Instance name"\] \[-broadcast "TRUE \| FALSE"\] -reg\_name "Transceiver register name" -value "Transceiver register value"'.|
|None​|Must specify either '-inst\_name' or '-broadCast' parameter.|

## Supported Families

<table id="GUID-1D911BEF-708A-4279-B55C-9EB47DD957EE"><tbody><tr><td>

PolarFire

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

Writing pcscmn’s 32-bit register GSSCLK\_CTRL

```
xcvr_write_register -inst_name {CM1_PCIe_SS_0/PF_PCIE_0/LANE1} \
                    -reg_name {GSSCLK_CTRL} \
                    -value 0xffffffff
```

## See Also

-   xcvr\_add\_register​​​

-   xcvr\_export\_register

-   xcvr\_read\_register


**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

