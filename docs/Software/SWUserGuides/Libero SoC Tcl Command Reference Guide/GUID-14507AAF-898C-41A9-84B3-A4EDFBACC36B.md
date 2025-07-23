# sd\_connect\_instance\_pins\_to\_ports

## Description

This tcl command connects all pins of an instance to new SmartDesign top level ports.

```
sd_connect_instance_pins_to_ports -sd_name {smartdesign component name} \
                                  -instance_name {instance name}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|Specifies the name of the SmartDesign component. It is mandatory.|
|instance\_name|string|Specifies the instance name for which all the pins must be connected to top level ports. It is mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'instance\_name' has illegal value.|
|None|Required parameter 'instance\_name' is missing.|
|None|Parameter 'sd\_name' has illegal value.|
|None|Required parameter 'sd\_name' is missing.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'sd\_connect\_instance\_pins\_to\_ports -sd\_name "sd\_name" -instance\_name "instance\_name"'.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

This example connects pins to ports of the instance \{CORESPI\_C0\_0\}.

```
sd_connect_instance_pins_to_ports -sd_name {top} \
                                  -instance_name {CORESPI_C0_0}
```

**Parent topic:**[SmartDesign Tcl Commands](GUID-92BDB298-D736-4F37-87A0-3E5E1200BEE6.md)

