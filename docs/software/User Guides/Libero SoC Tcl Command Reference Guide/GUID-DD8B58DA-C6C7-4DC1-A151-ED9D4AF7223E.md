# run\_frequency\_monitor

## Description

This tcl command calculates the frequency of any signal in the design that can be assigned to Live Probe channel A and displays the Frequency. The Frequency unit of measurement is in Megahertz \(MHz\).

It is run after setting the live probe signal to channel A.

```
run_frequency_monitor [-deviceName "device name"] \
                      -signal "signal name" \
                      -time "time in seconds to delay before calculate"
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|deviceName|string|Specify device name. This parameter is optional if only one device is available in the current configuration.|
|signal|string|Specifies the signal name assigned to Live Probe channel A. This parameter must be specified with the -time parameter.|
|time|integer or double|Specifies the duration in seconds to run frequency monitor. The value can be 0.1, 1, 5, 8, or 10.|

|Return Type|Description|
|-----------|-----------|
|String|Displays the Frequency with value-property format.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|No recognized device 'device\_name' is available for debugging.|
|None|Parameters are missing.|
|None|Parameter '-signal' is missing.|
|None|Parameter '-time' is missing.|
|None|Invalid monitor time specified. The values can be either 0.1, 1, 5, 8 or 10.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is'run\_frequency\_monitor \[-deviceName "device name"\] \[-signal "signal"\] \[-time "time"\]'.|

## Supported Families

<table id="GUID-F7B66A6B-D074-42CB-9B9C-361C33FC50D5"><tbody><tr><td>

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

```
set_live_probe -probeA {Q_c:DFN1_0:Q} -probeB {}
run_frequency_monitor -signal {Q_c:DFN1_0:Q} -time {0.1}
```

## See Also

-   fhb\_control

-   set\_live\_probe

-   event\_counter


**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

