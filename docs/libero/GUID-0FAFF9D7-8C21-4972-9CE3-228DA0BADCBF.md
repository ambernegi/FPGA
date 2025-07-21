# clone\_scenario

## Description

Creates a timing scenario with the new\_scenario\_name, which includes a copy of all constraints in<br /> the original scenario. The new scenario is then added to the list of scenarios. You<br /> must provide a unique name \(that is, it cannot already be used by another timing<br /> scenario\).

**Note:** It is recommended to use the `organize_tool_files` command instead of `clone_scenario`.

```
clone_scenario original new_scenario_name
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|`original`|string|Specifies the name of the source timing scenario to clone \(copy\). The source must be a valid, existing timing scenario.|
|`new_scenario_name`|string|Specifies the name of the new scenario to be created.|

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

The following example creates a new timing scenario with the name<br /> `my_new_scenario` by duplicating an existing one \(primary\).

```
clone_scenario primary my_new_scenario
```

## See Also

-   [create\_scenario](GUID-F9921609-5ABA-433F-AF82-084D7E74BBF0.md)
-   [remove\_scenario](GUID-3A312F37-292D-479B-9CFD-A111CE65F038.md)
-   [rename\_scenario](GUID-3D689BB0-A88F-4362-81B0-E0D58B4A7381.md)

## Related Examples on GitHub

-   [clone-scenario](https://github.com/MicrochipTech/Libero-SoC-Design-Suite-Tcl-Examples/tree/basic_tcl_examples/SmartTime/clone_scenario)

**Parent topic:**[SmartTime Tcl Commands](GUID-96623DD0-9D90-4AFA-90C3-B2BAEEE15670.md)

