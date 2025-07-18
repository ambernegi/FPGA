# rescan\_programmer

## Description

This Tcl command rescans for programmer connected to the host via the USB port.

**Note:**

-   This command does not have any arguments.

-   In the demo mode, this command returns "simulation".


```
rescan_programmer [-deviceName "device name"]
```

## Arguments

|Return Type|Description|
|-----------|-----------|
|String|Displays the programmer ID.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|No programmers found. Check the programmer connection to the computer and ensure the drivers are properly installed.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'rescan\_programmer \[-deviceName "device name"\] '.|

## Supported Families

<table id="GUID-5D23AC89-39DB-4F94-8C80-150E405468C9"><tbody><tr><td>

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

This example rescans the programmer connection.

```
rescan_programmer
```

This example rescans and retrieves the programmer name.

```
set programmer_id [rescan_programmer]
puts $programmer_id
```

**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

