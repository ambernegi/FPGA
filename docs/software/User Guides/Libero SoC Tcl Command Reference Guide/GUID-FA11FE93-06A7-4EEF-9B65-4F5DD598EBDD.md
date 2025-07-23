# set\_external\_delay

## Description

Specifies the external delay between `-from` and `-to` ports<br /> \(outside of chip\). The delay is considered during<br /> Timing Analysis for PLL external feedback delay<br /> calculation when the PLL output goes outside of<br /> the chip through the `-from` pin,<br /> and re-enters the chip through the<br /> `-to` pin, which then connects to<br /> the PLL feedback clock input pin.

**Important:** This constraint is not supported by the Synplify Pro Synthesis software. In Libero flow, this constraint is skipped for Synplify Pro Synthesis software.

``` {#CODEBLOCK_HNP_WCM_MWB}
set_external_delay ‑from value ‑to value [‑min] [‑max] <delay_value>
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|`from`|string|Specifies the output port that is connected to PLL output. This argument is mandatory.|
|`to`|string|Specifies the input port that is connected to PLL feedback. This argument is mandatory.|
|`min`|flag|Specifies the external feedback delay for minimum analysis.|
|`max`|flag|Specifies the external feedback delay for maximum analysis.|
|`delay_value`|real|Specifies the external delay value between `-from` to `-to` ports in nanoseconds. This argument is mandatory. If neither the `-min` nor `-max` parameter value is specified, the same `delay_value` is used for both minimum and maximum analysis.|

|Return Type|Description|
|-----------|-----------|
|void|No return type|

## Error Codes

|Error Code|Description|
|----------|-----------|
|SDC0015|Invalid external delay constraint: port list `<specified_port>` is incorrect.|
|SDC0078|Invalid external delay constraint: shared `-from` or `-to`<br /> ports|
|SDC0061|Error in command `set_external_delay`: Parameter `-from` has<br /> illegal value|
|SDC0061|Error in command `set_external_delay`: Parameter `-to`has<br /> illegal value|

## Supported Families

<table id="GUID-56F9E300-6CAB-48D0-9D92-B4EC8F62D904"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

PolarFire SoC

</td></tr><tr><td>

SmartFusion® 2

</td></tr><tr><td>

IGLOO® 2

</td></tr><tr><td>

RTG4™

</td></tr></tbody>
</table>## Example

The following example sets the PLL external feedback off-chip delay between ports `GL0_CLK_OUT` and `FB_CLK_IN` to 3 ns.

``` {#CODEBLOCK_WFY_RBT_MWB}
set_external_delay -from [ get_ports { GL0_CLK_OUT} ] -to [ get_ports { FB_CLK_IN } ] 3.0
```

**Parent topic:**[SmartTime Tcl Commands](GUID-96623DD0-9D90-4AFA-90C3-B2BAEEE15670.md)

