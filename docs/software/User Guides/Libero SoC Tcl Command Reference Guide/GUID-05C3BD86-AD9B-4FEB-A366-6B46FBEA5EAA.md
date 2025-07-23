# sb\_disable\_peripheral

## Description

This Tcl command is used to disable the MSS peripherals in various subsystems of the<br /> **Peripherals** page of the System Builder component.

**Note:** By default, MSS\_MMUART\_0/1, MSS\_I2C\_0/1, MSS\_SPI\_0/1 are enabled in all devices. Use the `sb_disable_peripheral` command to disable the peripherals that are not needed.

```
sb_disable_peripheral \
-component_name {component_name} \
[-peripheral_name {peripheral_name}]

```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|-component\_name \{component\_name\}|string|Mandatory. Name of the system builder component.|
|-peripheral\_name \{peripheral\_name\}|string|Mandatory. Name of the MSS peripheral instance to be<br /> disabled.|

## Example

```
sb_disable_peripheral -component_name {sb} -peripheral_name {MSS_SPI_0}
```

**Parent topic:**[System Builder Tcl Commands](GUID-D8832000-73FB-42DC-860F-FF30F05EE075.md)

