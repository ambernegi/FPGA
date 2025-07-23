# sb\_configure\_peripheral

## Description

This Tcl command is used to configure the MSS peripherals in various subsystems of<br /> the **Peripherals** page of the System Builder component.

```
sb_configure_peripheral \
-component_name {component_name} \
[-peripheral_name {peripheral_name}]
[-params {param_list}]

```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|-component\_name \{component\_name\}|string|Mandatory. Name of the system builder component.|
|-peripheral\_name \{peripheral\_name\}|string|Mandatory. Name of the MSS peripheral instance to be<br /> enabled.|
|-params \{param\_list\}|string|Mandatory. List of the configuration parameters for the selected<br /> MSS peripheral.|

## Example

```
sb_configure_peripheral -component_name {sb} -peripheral_name {MM_UART_0} -params {"MODE:MODE_ASYNC" "MODE_DUPLEX:MODE_FULL" "MODEM_MUX:MUX_IO" "TX_RX_MUX:MUX_IO" "USE_MODEM:false" }
```

**Parent topic:**[System Builder Tcl Commands](GUID-D8832000-73FB-42DC-860F-FF30F05EE075.md)

