# mss\_disable\_instance

## Description

This command is used to disable a core instance inside the MSS component.

```
mss_disable_instance \
-component_name {component_name} \
-instance_name {instance_name}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|-component\_name \{component\_name\}|string|Mandatory. Name of the MSS component.|
|-instance\_name \{instance\_name\}|string|Mandatory. Name of the core instance to be disabled inside the<br /> MSS component.|

## Example

```
mss_disable_instance -component_name {test_sb_MSS} -instance_name {I2C_1}
```

**Parent topic:**[MSS Tcl Commands](GUID-5D50ABEC-E4A6-4880-B7B2-D5AFC655143F.md)

