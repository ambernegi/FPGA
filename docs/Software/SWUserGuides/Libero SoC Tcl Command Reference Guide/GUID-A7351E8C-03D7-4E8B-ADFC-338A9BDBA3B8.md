# remove\_clock

## Description

Removes the specified clock constraint from the current timing scenario. If the specified name<br /> does not match a clock constraint in the current scenario, or if the specified ID<br /> does not refer to a clock constraint, this command fails.

Do not specify both the clock and port names and the constraint ID.

```
remove_clock -name clock_name | -id constraint_ID
```

## Arguments

<table id="GUID-A0CA1A7F-D568-46B2-B16E-818B2A67E178"><thead><tr><th>

Parameter

</th><th>

Type

</th><th>

Description

</th></tr></thead><tbody><tr><td>

`name`

</td><td>

`string`

</td><td>

Specifies the name of the clock constraint to remove from the current scenario. Specify<br /> either a clock name or an ID. **Note:** Specify clock name as \{CLK\}, not \[get\_clocks \{CLK\}\].

</td></tr><tr><td>

`id`

</td><td>

`integer`

</td><td>

Specifies the ID of the clock constraint to remove from the current scenario. Specify either<br /> an ID or a clock name that exists in the current scenario.

</td></tr></tbody>
</table>## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Invalid clock name argument.|
|None|Only one argument is needed.|

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

You cannot use wildcards when specifying a clock names.

## Example

The following example removes the clock constraint named `my_user_clock`.

```
remove_clock -name my_user_clock
```

The following example removes the clock constraint using its ID.

```
set clockId [create_clock –name my_user_clock –period 2]
```

```
remove_clock –id $clockId
```

## Related Examples on GitHub

-   [remove\_clock](https://github.com/MicrochipTech/Libero-SoC-Design-Suite-Tcl-Examples/tree/basic_tcl_examples/SmartTime/remove_clock)

## See Also

-   [create\_clock](GUID-4E57FF57-C7A3-4E62-B7FC-7D826501B5BF.md)
-   [create\_generated\_clock](GUID-36A5C4BB-EA20-4AF5-B4D5-1C9F4DA91964.md)

**Parent topic:**[SmartTime Tcl Commands](GUID-96623DD0-9D90-4AFA-90C3-B2BAEEE15670.md)

