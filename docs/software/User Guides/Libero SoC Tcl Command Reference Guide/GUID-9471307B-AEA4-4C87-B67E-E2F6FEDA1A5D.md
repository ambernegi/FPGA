# sb\_enable\_peripheral

## Description

This Tcl command is used to enable the MSS peripherals in various subsystems of the<br /> **Peripherals** page of the System Builder component.

**Note:** By default, MSS\_GIO, MSS\_USB, MSS\_MAC and MSS\_CAN are disabled in all devices. Use the `sb_enable_peripheral` command to enable the required peripheral.

```
sb_enable_peripheral \
-component_name {component_name} \
[-peripheral_name {peripheral_name}]

```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|-component\_name \{component\_name\}| |Mandatory. Name of the system builder component.|
|-peripheral\_name \{peripheral\_name\}| |Mandatory. Name of the MSS peripheral instance to be<br /> enabled.|

## Example

```
sb_enable_peripheral -component_name {sb} -peripheral_name {MSS_SPI_0}
```

**Parent topic:**[System Builder Tcl Commands](GUID-D8832000-73FB-42DC-860F-FF30F05EE075.md)

