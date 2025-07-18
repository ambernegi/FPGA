# set\_multicycle\_path

## Description

Defines a path that takes multiple clock cycles in the current scenario. Setting multiple cycle paths constraint overrides the single cycle timing relationships between sequential elements by specifying the number of cycles that the data path must have for setup or hold checks. If you change the multiplier, it affects both the setup and hold checks.

False path information always takes precedence over multiple cycle path information. A specific maximum delay constraint overrides a general multiple cycle path constraint. If you specify more than one object within one `-through` option, the path passes through any of the objects.

You must specify at least one of the `-from` , `-to`, or `-through` arguments for this constraint to be valid.

```
set_multicycle_path ncycles [-setup] [-hold] [-setup_only] [-from from_list] \
[-through through_list ] [-to to_list] [ -start ] [ -end ]
```

## Arguments

<table id="GUID-FA6D6B42-2D2E-42AE-8893-B46F2103183F"><thead><tr><th>

Parameter

</th><th>

Type

</th><th>

Description

</th></tr></thead><tbody><tr><td>

`ncycles`

</td><td>

integer

</td><td>

Specifies an integer value that represents a number of cycles the data path must have for setup or hold check. The value is relative to the starting point or ending point clock, before data is required at the ending point. Number of cycles must be greater than `1`. If you set ncycles as `2.2` or `4/2` or `"8a"` then it is being truncated as `2` or `4` or `8`, and no warning is reported.

</td></tr><tr><td>

`setup`

</td><td>

None

</td><td>

Optional. Applies the cycle value for the setup check only. The default hold check will be applied unless you have specified another set\_multicycle\_path command for the hold value.

</td></tr><tr><td>

`hold`

</td><td>

None

</td><td>

Optional. Applies the cycle value for the hold check only. This option does not affect the setup check. **Note:** If you do not specify `-setup` or `-hold`, the cycle value is applied to the setup check and the default hold check is 0 not ncycles -1 .

</td></tr><tr><td>

`setup_only`

</td><td>

None

</td><td>

Optional. Specifies that the path multiplier is applied to setup paths only.

</td></tr><tr><td>

`from`

</td><td>

list of strings

</td><td>

Specifies a list of timing path starting points. A valid timing starting point is a clock, a primary input, an inout port, or a clock pin of a sequential cell.

</td></tr><tr><td>

`through`

</td><td>

list of strings

</td><td>

Specifies a list of<br /> pins,<br /> ports, nets, or instances \(cells\) through which<br /> the multiple cycle paths must pass.

</td></tr><tr><td>

`to`

</td><td>

list of strings

</td><td>

Specifies a list of timing path ending points. A valid timing ending point is a clock, a primary output, an inout port, or a data pin of a sequential cell.

</td></tr><tr><td>

`start`

</td><td>

None

</td><td>

Changes the clock edges used to launch and capture the data. By default, setup multicycle<br /> holds the multicycle shifts launching edge backwards<br /> \(that<br /> is-start<br /> is the default for hold\). -start allows you to change those defaults<br /> and hold multicycle by shifting the launching clock forward.

</td></tr><tr><td>

`end`

</td><td>

None

</td><td>

Changes the clock edges used to launch and capture the data. By default, setup multicycle<br /> shifts the capturing edge forward<br /> \(that<br /> is-end<br /> is the default for setup\). -end allows you to change the defaults<br /> and specify a setup multicycle by shifting the capturing clock<br /> backward.

</td></tr></tbody>
</table>## Error Codes

|Error Code|Description|
|----------|-----------|
|Error: SDC0004|clk does not match any clock name or source.|
|Error: SDC0015|port list \[get\_ports \{ CLK\_0\_D \}\] is incorrect.|
|Error: SDC0054|Invalid IO delay constraint: the min delay is greater than max delay.|
|Error: SDC0061|Parameter \_AtclParam0\_ has illegal value.|

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
</table>## Exceptions

Multiple priority management is not supported in Microchip SoC designs. All multiple cycle path constraints are handled with the same priority.

## Example

The following example sets all paths between reg1 and reg2 to 3 cycles for setup check. Hold check is measured at the previous edge of the clock at reg2.

```
set_multicycle_path 3 -from [get_pins {reg1}] –to [get_pins {reg2}]
```

The following example specifies that four cycles are needed for setup check on all paths starting at the registers in the clock domain ck1. Hold check is further specified with two cycles instead of the three cycles that would have been applied otherwise.

```
set_multicycle_path 4 -setup -from [get_clocks {ck1}]
```

```
set_multicycle_path 2 -hold -from [get_clocks {ck1}]
```

The following example specifies that four cycles are needed for setup only check on all paths<br /> starting at the registers in the clock domain `REF_CLK_0`.

```
set_multicycle_path -setup_only 4 -from [ get_clocks { REF_CLK_0 } ]
```

The following are few more examples of the `set_multicycle_path –setup_only` command.

```
set_multicycle_path -setup_only 4 -from [ all_registers ]
set_multicycle_path -setup_only 4 -through [ get_cells { comb_0/XOR2_0 } ]
set_multicycle_path -setup_only 4 -from [ get_clocks { PF_CCC_C0_0/PF_CCC_C0_0/pll_inst_0/OUT0 } ] -to [ get_clocks { PF_CCC_C0_0/PF_CCC_C0_0/pll_inst_0/OUT1 } ]
```

The following example shifts lauching edge 1 clk1 cycle backward

```
set_multicycle_path -setup -start 2 -from [ get_clocks clk1 ] -to [ get_clocks clk2 ]
```

The following example shifts capturing edge 1 clk2 cycle forward

```
set_multicycle_path -setup -end 2 -from [ get_clocks clk1 ] -to [ get_clocks clk2 ]
```

## Related Examples on GitHub

-   [set\_multicycle\_path](https://github.com/MicrochipTech/Libero-SoC-Design-Suite-Tcl-Examples/tree/basic_tcl_examples/SmartTime/set_multicycle_path)

## See Also

-   [remove\_multicycle\_path](GUID-723B415A-8372-4EA9-AAA5-0653DF318A17.md)

**Parent topic:**[SmartTime Tcl Commands](GUID-96623DD0-9D90-4AFA-90C3-B2BAEEE15670.md)

