# select\_programmer

## Description

This Tcl command enables the specified programmer and disables all other connected programmers. This command is useful when multiple programmers are connected.

```
select_programmer -programmer_id {programmer id} \
                  [-host_name {host name}] \
                  [-host_port {host port}]
```

## Arguments

<table id="GUID-CFC935ED-712E-46A7-8C25-821EC93BCB4C"><thead><tr><th>

Parameter

</th><th>

Type

</th><th>

Description

</th></tr></thead><tbody><tr><td>

programmer\_id

</td><td>

string

</td><td>

The programmer to be enabled. This parameter is mandatory.

</td></tr><tr><td>

host\_name

</td><td>

string

</td><td>

The host name or IP address. This argument is required for a remote programmer and optional for a local programmer. For local programmer, if specified it must be “localhost”. This parameter is optional.

</td></tr><tr><td>

host\_port

</td><td>

string

</td><td>

This argument is required for a remote programmer and optional for a local programmer. If omitted, the default port is used \(currently, the default is 80\). For a local host, both “localhost” and its port should be specified or omitted. This parameter is optional.**Note:** The def variable “LOCAL\_PROGRAM\_DEBUG\_SERVER\_PORT” is used to set a different default local hostport.

</td></tr></tbody>
</table>|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'programmer\_id' is missing.|
|None|Parameter 'host\_port' has illegal value.|
|None|Parameter 'host\_name' has illegal value.|
|None|Unable to select programmer 'value'.|
|None|Parameter 'programmer\_id' has illegal value.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'select\_programmer -programmer\_id "programmer\_id" \[-host\_name "host\_name"\] \[-host\_port "host\_port"\]'.|

## Supported Families

<table id="GUID-2A2859EF-B580-47D9-AC51-A7A62710D785"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

SmartFusion® 2

</td></tr><tr><td>

RTG4™

</td></tr><tr><td>

IGLOO® 2

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

This example selects the programmer with \{00557\} id, \{localhost\} host name and \{80\} host port.

```
select_programmer -programmer_id {00557} \
                  -host_name {localhost} \
                  -host_port {80}
```

This example selects the programmer with \{00557\} id.

```
select_programmer -programmer_id {00557}
```

**Parent topic:**[Programming and Configuration Tcl Commands](GUID-B021E93C-650D-42F1-B90A-AE43EE93E641.md)

