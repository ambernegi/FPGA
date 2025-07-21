# sd\_connect\_pin\_to\_port

## Description

This Tcl command connects a SmartDesign instance pin to a new top level port. This command is equivalent to the 'Promote to Top Level' GUI action on an instance pin.

**Note:** This command is not required to build a SmartDesign component. It maps to an interactive user action in the SmartDesign Canvas and will not be present in the exported SmartDesign component Tcl description.

```
sd_connect_pin_to_port -sd_name {smartdesign component name} \
                       -pin_name {pin name} \
                       [-port_name {port name}]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|Specifies the name of the SmartDesign component. It is mandatory.|
|pin\_name|string|Specifies the name of the instance level pin that needs to be connected to a top level port. It is mandatory.|
|port\_name|string|Specifies the name of the new top level port that the instance pin will be connected to. It is optional. If the port name is not specified, the new port takes the name of the instance pin. If the port name as defined by these rules already exists, the tool automatically creates a new port with name &lt;port\_name&gt;\_&lt;index&gt; \(index is an automatically generated integer starting at 0 such that the port name is unique in the SmartDesign\).|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Pin 'instance\_name:pin\_name' does not exist.|
|None|Required parameter 'sd\_name' is missing.|
|None|You must specify a pin name.|
|None|Cannot promote pin 'pin\_name' on 'instance\_name' to top because it is already connected to a top level port.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'sd\_connect\_pin\_to\_port -sd\_name "sd\_name" \[-pin\_name "pin\_name"\] \[-port\_name "port\_name"\]'.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

-   The following command connects "D" input pin of "DFN1\_0" instance to "D" input port which was<br /> created with the name of port\_name and automatically generated<br /> index\(unique\):

    ```
    sd_connect_pin_to_port -sd_name {top} -pin_name {DFN1_0:D}
    ```

-   The following command connects "DFN1\_0" instance "Q" output pin to "Q\_OUT" port:

    ```
    sd_connect_pin_to_port -sd_name {top} \
                           -pin_name {DFN1_0:Q} \
                           -port_name {Q_OUT}
    ```


## See Also

-   sd\_connect\_pin

**Parent topic:**[SmartDesign Tcl Commands](GUID-92BDB298-D736-4F37-87A0-3E5E1200BEE6.md)

