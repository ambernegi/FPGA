# list\_min\_delays

## Description

Returns<br /> details about all of the minimum delay constraints in the current timing constraint<br /> scenario.

```
list_min_delays
```

## Arguments

|Return Type|Description|
|-----------|-----------|
|`string`|Details about all of the min delay constraints in the current timing constraint scenario.|

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

With this command we get the details about all of the minimum delay constraints in the current timing constraint scenario.

```
puts [list_min_delays]
```

## Related Examples on GitHub

-   [list\_min\_delays](https://github.com/MicrochipTech/Libero-SoC-Design-Suite-Tcl-Examples/tree/basic_tcl_examples/SmartTime/list_min_delays)

## See Also

-   [remove\_min\_delay](GUID-5FFAD113-DEA0-481F-83EC-1E7EDC1C1E41.md)
-   [set\_min\_delay](GUID-244CC545-2A74-4548-8861-D493EAB878BA.md)

**Parent topic:**[SmartTime Tcl Commands](GUID-96623DD0-9D90-4AFA-90C3-B2BAEEE15670.md)

