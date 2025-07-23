# Programmable Weak Pull- Up/Down and Bus-Keeper \(Hold\) Circuits

PolarFire family FPGAs have a programmable weak pull-down \(20 KΩ typical\),<br /> pull-up \(20 KΩ typical\), and bus-keeper circuit on every I/O pad when in<br /> input and output mode. Weak pull-up and pull-down circuits create a default<br /> setting for an input when it is not driven. For outputs, the weak pull-up<br /> and pull-down can be optionally programmed to set an initial level on the<br /> output pad before being actively driven. The bus-keeper circuit is used to<br /> weakly hold the signal on an I/O pin at its last driven state, keeping it at<br /> a valid level with minimal power dissipation. The bus-keeper circuitry also<br /> pulls undriven pins away from the input threshold voltage where noise can<br /> cause unintended oscillation. See device/package specific PPAT spreadsheet<br /> for default programming of weak pull-up/pull-down for unused pins from<br /> Libero SoC.

The following table lists the I/O standards that support weak pull-up/down and bus-keeper control.

|I/O Standards|Supported I/O Types|Options|
|-------------|-------------------|-------|
|LVTTLLVCMOS33, LVCMOS25, LVCMOS18, LVCMOS15, and LVCMOS12PCI|GPIO \(input only\)|OFFWeak pull-downWeak pull-upBus-keeper|
|LVCMOS18, LVCMOS15, and LVCMOS12|HSIO \(input only\)|OFFWeak pull-downWeak pull-upBus-keeper|

The programmable weak pull-down, pull-up, and bus-keeper settings are controlled by using the I/O attribute editor in Libero SoC or by using the following PDC command:

``` {#ID-00002291}
set_io –RES_PULL <value>
```

The value can be set as up, down, hold, or none.

Weak pull-up/pull-down is optionally available with PDC or I/O Editor for differential inputs.<br /> Optional pull-up/pull-down resistors might interfere with signal integrity.<br /> Users must simulate LVDS communications when using pull-up/pull-down<br /> options.

The following table lists the acceptable values for the `-RES_PULL` attribute for the input buffer.

|I/O Standards|Value|Description|
|-------------|-----|-----------|
|**Single I/Os**: LVTTL, LVCMOS33, LVCMOS25, LVCMOS18, LVCMOS15, LVCMOS12, and PCI|Up|Includes a weak resistor for pull-up of the input buffer|
|Down|Includes a weak resistor for pull-down of the input buffer|
|Hold|Holds the last value|
|None|Does not include a weak resistor|
|**Differential I/Os**: PPDS25, PPDS33, HCSL33, HCSL25, BUSLVDSE25, LVDS33, LVDS25, LVDS18G, MINILVDS33, MINILVDS25, RSDS33, RSDS25, LVPECL33, SUBLVDS33, SUBLVDS25, LCMDS33, and LCMDS25|Up|Includes a weak resistor for pull-up of the input buffer|
|Down|Includes a weak resistor for pull-down of the input buffer|

**Important:** The default value of the `-RES_PULL` attribute for input buffer is “Up”.

The following table lists the acceptable values for the `-RES_PULL` attribute for the output buffer.

|I/O Standards|Value|Description|
|-------------|-----|-----------|
|**Single I/Os**: LVTTL, LVCMOS33, LVCMOS25, LVCMOS18, LVCMOS15, LVCMOS12, and PCI|Up|Includes a weak resistor for pull-up of the output buffer|
|Down|Includes a weak resistor for pull-down of the output buffer|
|None|Does not include a weak resistor|

**Important:** The default value of the `-RES_PULL` attribute for output buffer is “None”.

**Parent topic:**[I/O Analog \(IOA\) Buffer Programmable Features](GUID-CC29CF66-77AD-471C-8A06-94A7337826B5.md)

