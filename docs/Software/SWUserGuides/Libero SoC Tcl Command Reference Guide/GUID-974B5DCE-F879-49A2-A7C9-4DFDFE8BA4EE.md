# sd\_disconnect\_pins

## Description

This Tcl command disconnects a list of SmartDesign top level ports and/or instance pins from the net they are connected to.

**Note:** This command is not required to build a SmartDesign component. It maps to an interactive user action in the SmartDesign Canvas and will not be present in the exported file when user selects Libero Project -'Export Component Description\(Tcl\)' on a SmartDesign component.

```
sd_disconnect_pins -sd_name {smartdesign component name} \
                   -pin_names {port or pin or slice names}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|Specifies the name of the SmartDesign component. It is mandatory.|
|pin\_names|string|Specifies the port, pin and/or slice names to be disconnected as follows: \{"instance\_name:pin\_name" "port\_name"\}. This command will fail if the ports, pins and/or slices do not exist. There may be multiple `-pin_names` arguments \(see example below\). This is mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'pin\_names' is missing or has invalid value.|
|None|Required parameter 'sd\_name' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'sd\_disconnect\_pins -sd\_name "sd\_name" -pin\_names "\[pin\_names\]+"'.|
|SDCTRL05|Pin 'pin\_name' does not exist.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

-   The following command disconnects "B\_ren" and "B\_ADRR\[12:12\]" slice from the "SD1" design:

    ```
    sd_disconnect_pins -sd_name {SD1} \
                       -pin_names {B_ren RAM1K20_0:B_ADRR[12:12]}
    ```

-   The following command disconnects "AND2\_0:B", "AND3\_0:APF\_XCVR\_ERM\_C0\_0:LANE0\_RX\_READY" pin/ports<br /> from the "SD2" SmartDesign:

    ```
    sd_disconnect_pins \
          -sd_name {SD2} \
          -pin_names {AND2_0:B AND3_0:APF_XCVR_ERM_C0_0:LANE0_RX_READY}
    ```


## See Also

-   sd\_connect\_pins

**Parent topic:**[SmartDesign Tcl Commands](GUID-92BDB298-D736-4F37-87A0-3E5E1200BEE6.md)

