# remove\_min\_delay

## Description

Removes<br /> a minimum delay constraint from the current timing scenario by specifying either its<br /> exact arguments or its ID. If the arguments do not match a minimum delay constraint<br /> in the current scenario, or if the specified ID does not refer to a minimum delay<br /> constraint, this command fails.

Do not specify both minimum delay arguments and the constraint ID.

```
remove_min_delay [-from from_list] [-to to_list] [-through through_list]
```

```
remove_min_delay -id constraint_ID
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|`from`|list of strings|Specifies a list of timing path starting points. A valid timing starting point is a clock, a primary input, an inout port, or a clock pin of a sequential cell.|
|`through`|list of strings|Specifies a list of pins, ports, cells, or nets through, which the disabled paths must<br /> pass.|
|`to`|list of strings|Specifies a list of timing path ending points. A valid timing ending point is a clock, a primary output, an inout port, or a data pin of a sequential cell.|
|`id`|integer|Specifies the ID of the minimum delay constraint to remove from the current scenario. You must specify either the exact minimum delay arguments to remove or the constraint ID that refers to the minimum delay constraint to remove.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Invalid arguments<br /> `-from/-to/-through.`|
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

You cannot use wildcards when specifying a clock or port name, either alone or in an accessor command.

## Example

The following example specifies a range of minimum delay constraints to remove.

```
remove_min_delay -through U0/U1:Y
```

## Related Examples on GitHub

-   [remove\_min\_delay](https://github.com/MicrochipTech/Libero-SoC-Design-Suite-Tcl-Examples/tree/basic_tcl_examples/SmartTime/remove_min_delay)

## See Also

-   [set\_min\_delay](GUID-244CC545-2A74-4548-8861-D493EAB878BA.md)

**Parent topic:**[SmartTime Tcl Commands](GUID-96623DD0-9D90-4AFA-90C3-B2BAEEE15670.md)

