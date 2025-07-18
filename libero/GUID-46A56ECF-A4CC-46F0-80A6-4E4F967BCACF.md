# sd\_rename\_pin\_group

## Description

This Tcl command renames a pin group on an instance in a SmartDesign component.

```
sd_rename_pin_group -sd_name {smartdesign component name} \
                    -instance_name {instance name} \
                    -current_group_name {current pin group name} \
                    -new_group_name {new pin group name}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|sd\_name|string|Specifies the name of the SmartDesign component. It is mandatory.|
|instance\_name|string|Specifies the name of the instance on which the pin group is present. It is mandatory.|
|current\_group\_name|string|Specifies the name of the pin group to be renamed. It is mandatory.|
|new\_group\_name|string|Specifies the new name of the pin group. It is mandatory.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'sd\_name' is missing.|
|None|Required parameter 'instance\_name' is missing.|
|None|Required parameter 'current\_group\_name' is missing.|
|None|Required parameter 'new\_group\_name' is missing.|
|None|Parameter 'param' is not defined. Valid command formatting is 'sd\_rename\_pin\_group -sd\_name "sd\_name" -current\_group\_name "current\_group\_name" -new\_group\_name "new\_group\_name" -instance\_name "instance\_name"'.|
|SDCTRL05|Pin 'MyGroup' does not exist.|
|None|Parameter 'current\_group\_name' has illegal value.|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|PolarFire SoC|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

This command renames "Group" to "MyNewGroup" on the "COREAXINTERCONNECT\_C0\_0" instance in the "TOP" design:

```
sd_rename_pin_group -sd_name {TOP} \
                    -instance_name {COREAXINTERCONNECT_C0_0} \
                    -current_group_name {Group} \
                    -new_group_name {MyNewGroup}
```

## See Also

-   sd\_create\_pin\_group
-   sd\_add\_pins\_to\_group

**Parent topic:**[SmartDesign Tcl Commands](GUID-92BDB298-D736-4F37-87A0-3E5E1200BEE6.md)

