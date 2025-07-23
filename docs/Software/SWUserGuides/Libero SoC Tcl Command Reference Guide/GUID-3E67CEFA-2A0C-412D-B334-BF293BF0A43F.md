# sb\_configure\_envm

## Description

This Tcl command is used to specify a `.cfg` file with all clients<br /> information in the **ENVM** tab of the<br /> **Memories** page in the System Builder component.

```
sb_configure_envm \
-component_name {component_name} \
-cfg_file {file_path}

```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|-component\_name \{component\_name\}|string|Mandatory. Name of the system builder component.|
|-cfg\_file &lt;file\_path&gt;|string|Mandatory. Path of the configuration file \(.cfg\) used to<br /> configure the ENVM.|

## Example

```
sb_configure_envm -component_name {sb} -cfg_file{./ENVM.cfg} 
```

**Parent topic:**[System Builder Tcl Commands](GUID-D8832000-73FB-42DC-860F-FF30F05EE075.md)

