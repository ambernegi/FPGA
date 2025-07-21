# unset\_live\_probe

## Description

This Tcl command discontinues the debug function and clears both live probe channels \(Channel A and Channel B\). An all zeros value is shown for both channels in the oscilloscope.

**Note:**

For RTG4, only one probe channel \(Probe Read Data Pin\) is available.

```
unset_live_probe [-deviceName "device name"] \
                 [-probeA "TRUE | FALSE"] \
                 [-probeB "TRUE | FALSE"]'
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|deviceName|string|Parameter is optional if only one device is available in the current configuration.|
|probeA|boolean|Specify 1 or TRUE for unset live probe on Channel A, otherwise specify 0 or FALSE.|
|probeB|boolean|Specify 1 or TRUE for unset live probe on Channel B, otherwise specify 0 or FALSE.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Cannot unset live probes: Mention the name of the channel to unset.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'unset\_live\_probe \[-deviceName "device name"\] \[-probeA "TRUE \| FALSE"\] \[-probeB "TRUE \| FALSE"\]'.|
|None|probeA: Invalid argument value: \(expecting TRUE, 1, true, FALSE, 0 or false\).|
|None|probeB: Invalid argument value: \(expecting TRUE, 1, true, FALSE, 0 or false\).|
|None|Parameter 'deviceName' has illegal value.|

## Supported Families

<table id="GUID-A68C02FD-5D12-49B6-9C44-9C96605A14C2"><tbody><tr><td>

PolarFire

</td></tr><tr><td>

PolarFire SoC

</td></tr><tr><td>

SmartFusion 2

</td></tr><tr><td>

IGLOO 2

</td></tr><tr><td>

RTG4

</td></tr></tbody>
</table>## Example

The following example unsets both live probe channels \(Channel A and Channel B\) from the device sf2:

```
unset_live_probes -probeA 1 -probeB 1 [-deviceName {sf2}]
```

## See Also

-   set\_live\_probe


**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

