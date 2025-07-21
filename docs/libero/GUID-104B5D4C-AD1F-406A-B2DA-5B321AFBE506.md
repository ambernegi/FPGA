# set\_input\_jitter

## Description

Sets the input jitter for a given clock.

``` {#CODEBLOCK_WKG_5VL_GTB}
set_input_jitter <input_jitter> <clock>
```

**Important:**

-   This constraint is not supported as a Tcl command. Enter it as part of a timing constraint \(`.sdc`\) file.
-   The SynplifyPro synthesis software ignores the `set_input_jitter` SDC constraint.

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|`<input_jitter>`|floating point|Specifies the input jitter value in nanoseconds. This value must<br /> be greater than zero. The input\_jitter value allows the user to<br /> specify the clock jitter on the external clock. For RTG4™ FPGAs, the user must include the larger of the<br /> external clock jitter or the RTG4 Input Buffer jitter data sheet<br /> specifications using this constraint. Furthermore for RTG4 FPGAs, if<br /> the input port is a Strobe input to the RTG4 CCC SpaceWire clock and<br /> data recovery circuit, use this constraint to account for the CCC<br /> SpaceWire effective recovered clock jitter data sheet specification<br /> during STA.|
|`<input clock>`|string|Specifies the clock on which to apply the input clock jitter<br /> value. The user must ensure there is also a create\_clock SDC<br /> constraint applied to the same clock input port to define that input<br /> as a clock for Static Timing Analysis \(STA\).|

## Example

The following example sets the input jitter to 2.1 nanosecond.

**Important:** The clock used to set the jitter is the clock name that is defined in the `create_clock` command. CLK is the clock port name.



``` {#CODEBLOCK_JTD_BS3_45B}
create_clock -name { clockName }-period 20 -waveform {0 10 } [ get_ports { CLK } ]
set_input_jitter 2.1 [ get_clocks { clockName } ] 

```

**Parent topic:**[SmartTime Tcl Commands](GUID-96623DD0-9D90-4AFA-90C3-B2BAEEE15670.md)

