# set\_clock\_uncertainty

## Description

Specifies simple clock uncertainty for single clock and clock-to-clock uncertainty<br /> between two clocks \(from and to\).

The `set_clock_uncertainty` command sets the timing uncertainty of<br /> clock networks. It can be used to model clock jitter or add guard band in timing<br /> analysis.

SmartTime computes uncertainty values very similar to the<br /> `set_clock_latency` command \(when used with the<br /> `-early` and `-late` arguments\), but with one<br /> difference in the timing report. Uncertainty number is always applied to the<br /> required time calculation whereas latency numbers are applied to both arrival and<br /> required time. Uncertainty is added for both setup and hold checks.

To ensure that clock jitter is modeled accurately using the<br /> `set_clock_uncertainty` command, you must explicitly use<br /> `-setup` argument. If the `-setup` argument is not<br /> specified, SmartTime will apply the uncertainty value to both setup and hold<br /> calculations leading to incorrect jitter modeling.

|`-setup` used|`-hold` used|Result|
|-------------|------------|------|
|No|No|Setup and hold checks.|
|No|Yes|Hold checks only.|
|Yes|No|Setup checks only. For jitter modeling.|
|Yes|Yes|Setup and hold checks.|

Either simple clock uncertainty or clock-to-clock uncertainty can be specified.<br /> Simple clock uncertainty can be set on a clock or on any pin in the clock network.<br /> It will then apply to any path with the capturing register in the forward cone of<br /> the uncertainty. If multiple simple uncertainty applies to a register, the last one<br /> \(in the propagation order from the clock source to the register\) is used.<br /> Clock-to-clock uncertainty applies to inter-clock paths. Both `from`<br /> clock and `to` clock must be specified. Clock-to-clock uncertainty<br /> has higher priority than simple uncertainty. If both are set \(a clock-to-clock<br /> uncertainty and a simple clock uncertainty on the `to` clock\), the<br /> simple clock uncertainty will be ignored for inter-clock paths, only the<br /> clock-to-clock uncertainty will be used.

``` {#CODEBLOCK_EY5_P34_HTB}
set_clock_uncertainty [-setup] [-hold] uncertainty [object_list -from from_clock | 
-rise_from rise_from_clock | -fall_from fall_from_clock -to to_clock | -rise_to rise_to_clock |
-fall_to fall_to_clock ]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|uncertainty|floating point|Specifies the time in nanoseconds that represents the amount of variation between two clock edges.|
|object\_list|list of strings|Specifies a list of clocks, ports, or pins for simple uncertainty; the uncertainty is applied either to destination flops clocked by one of the clocks in the object list option, or destination flops whose clock pins are in the fanout of a port or a pin specified in the object\_list option.|
|from|list of strings|Specifies that the clock-to-clock uncertainty applies to both rising and falling edges of the source clock list. Only one of the `-from`, `-rise_from`, or `-fall_from` arguments can be specified for the constraint to be valid.|
|rise\_from|list of strings|Specifies that the clock-to-clock uncertainty applies only to rising edges of the source clock list. Only one of the `-from`, `-rise_from`, or `-fall_from` arguments can be specified for the constraint to be valid.|
|fall\_from|list of strings|Specifies that the clock-to-clock uncertainty applies only to falling edges of source clock list. Only one of the `-from`, `-rise_from`, or `-fall_from` arguments can be specified for the constraint to be valid.|
|from\_clock/rise\_from\_clock/fall\_from\_clock|list of strings|Specifies the list of clock names as the uncertainty source.|
|to|list of strings|Specifies that the clock-to-clock uncertainty applies to both rising and falling edges of the destination clock list. Only one of the `-to`, `-rise_to`, or `-fall_to` arguments can be specified for the constraint to be valid.|
|rise\_to|list of strings|Specifies that the clock-to-clock uncertainty applies only to rising edges of the destination clock list. Only one of the `-to`, `-rise_to`, or `-fall_to` arguments can be specified for the constraint to be valid.|
|fall\_to|list of strings|Specifies that the clock-to-clock uncertainty applies only to falling edges of the destination clock list. Only one of the `-to`, `-rise_to`, or `-fall_to` arguments can be specified for the constraint to be valid.|
|to\_clock/rise\_to\_clock/fall\_to\_clock|list of strings|Specifies the list of clock names as the uncertainty destination.|
|setup|None|Specifies that the uncertainty applies only to setup checks. If none or both `-setup` and `-hold` are present, the uncertainty applies to both setup and hold checks.|
|hold|None|Specifies that the uncertainty applies only to hold checks. If none or both `-setup` and `-hold` are present, the uncertainty applies to both setup and hold checks.|

|Return Type|Description|
|-----------|-----------|
|integer|Returns the ID of the clock uncertainty constraint.|

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

Simple Clock Uncertainty constraint examples.

The following example specifies uncertainty of 2 ns.

```
set_clock_uncertainty 2 [get_clocks clk]
```

The following example specifies setup uncertainty of 2 ns.

```
set_clock_uncertainty 2 -setup [get_clocks clk]
```

Clock to Clock Uncertainty constraint examples:

The following example specifies uncertainties of 10ns between Clk1 and Clk2 clock domains.

```
set_clock_uncertainty 10 -from [get_clocks { Clk1 }] -to [get_clocks { Clk2 }]
```

The following example specifies setup uncertainties between Clk1 and \{Clk2 Clk3\} clock domains with specific edges.

```
set_clock_uncertainty 0 -from [get_clocks { Clk1 }] -fall_to [get_clocks { Clk2 Clk3 }] -setup
```

```
set_clock_uncertainty 4.3 -fall_from [get_clocks { Clk1 Clk2 }] -rise_to *
```

```
set_clock_uncertainty 0.1 -rise_from [ get_clocks { Clk1 Clk2 }] \
-fall_to [get_clocks { Clk3 Clk4 }] -setup
```

```
set_clock_uncertainty 5 -rise_from [get_clocks {Clk1}]  -to [ get_clocks {*} ]
```

## Related Examples on GitHub

-   [set\_clock\_uncertainty](https://github.com/MicrochipTech/Libero-SoC-Design-Suite-Tcl-Examples/tree/basic_tcl_examples/SmartTime/set_clock_uncertainty)

## See Also

-   [list\_clock\_uncertainties](GUID-9B766EDF-E9D2-4494-97DB-F6E1FE1A9A23.md)
-   [remove\_clock\_uncertainty](GUID-25290BB2-49A2-4955-AD9C-B499EF32CD4B.md)

**Parent topic:**[SmartTime Tcl Commands](GUID-96623DD0-9D90-4AFA-90C3-B2BAEEE15670.md)

