# sb\_disable\_core

## Description

This Tcl command is used to disable the cores/bus interfaces in various subsystems of<br /> the **Peripherals** page of the System Builder component<br /> \(excluding the MSS Peripherals\).

```
sb_disable_core \
-component_name {component_name} \
[-core_name {core_name}]

```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|-component\_name \{component\_name\}|string|Mandatory. Name of the system builder component.|
|-core\_name \{core\_name\}|string|Optional. Name of the instance of the core in the System Builder<br /> component.|

## Example

```
sb_disable_core -component_name {sb} -core_name {FIC_0_AMBA_MASTER}
```

**Parent topic:**[System Builder Tcl Commands](GUID-D8832000-73FB-42DC-860F-FF30F05EE075.md)

