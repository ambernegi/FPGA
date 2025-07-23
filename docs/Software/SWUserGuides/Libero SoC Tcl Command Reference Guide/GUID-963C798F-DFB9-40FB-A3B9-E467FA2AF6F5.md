# sd\_show\_bif\_pins

## Description

This tcl command exposes one or more internal scalar or bus pins/ports of a Bus Interface pin/port. A Bus Interfacepin/port is usually a group of normal scalar or bus pins/ports grouped together and used to connect instances thathave similar interfaces.

**Note:**

This command will not expose multiple pins/ports in release v2021.1. Support to expose multiple scalar or bus pins/portswill be provided in the next Libero release.

```
sd_show_bif_pins -sd_name {smartdesign component name} \
                 -bif_pin_name {name of the bif pin or port} \
                 -pin_names {pins or ports to be exposed}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|Specifies the name of the SmartDesign component. It is mandatory.|
|bif\_pin\_name|string|Specifies the name of the Bus Interface pin/port for which the internal pins/ports need to be exposed. It is mandatory.|
|pin\_names|string|Specifies the names of the Bus Interface internal pins/ports to be exposed. It is mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'pin\_names' has illegal value.|
|None|Required parameter 'pin\_names' is missing.|
|None|Parameter 'bif\_pin\_name' has illegal value.|
|None|Required parameter 'bif\_pin\_name' is missing.|
|None|Parameter 'sd\_name' has illegal value.|
|None|Required parameter 'sd\_name' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'sd\_show\_bif\_pins -sd\_name "sd\_name" -bif\_pin\_name "bif\_pin\_name" -pin\_names "pin\_names"'.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

This example exposes "COREAXI4INTERCONNECT\_C0\_0:MASTER0\_AWADDR" pin for "COREAXI4INTERCONNECT\_C0\_0:AXI4mmaster0" bif pin.

```
sd_show_bif_pins -sd_name {top} \
                 -bif_pin_name {COREAXI4INTERCONNECT_C0_0:AXI4mmaster0} \
                 -pin_names {COREAXI4INTERCONNECT_C0_0:MASTER0_AWADDR}
```

## See Also

-   sd\_delete\_bif\_pin


**Parent topic:**[SmartDesign Tcl Commands](GUID-92BDB298-D736-4F37-87A0-3E5E1200BEE6.md)

