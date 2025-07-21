# smartpower\_add\_pin\_in\_domain

## Description

This tcl command adds a pin into a clock or set domain.

```
smartpower_add_pin_in_domain -pin_name {pin name} \
                             -pin_type {value} \
                             -domain_name {domain name} \
                             -domain_type {value}
```

## Arguments

<table id="GUID-E760424E-A3D0-4A34-A973-E298B5A8615B"><thead><tr><th>

Parameter

</th><th>

Type

</th><th>

Description

</th></tr></thead><tbody><tr><td>

pin\_name

</td><td>

string

</td><td>

Specifies the name of the pin to add to the domain.

</td></tr><tr><td>

pin\_type

</td><td>

string

</td><td>

Specifies the type of the pin to add. The acceptable values for this argument are the following:<br /> -   clock - The pin to add is a clock pin.
-   data - The pin to add is a data pin.

<br />

</td></tr><tr><td>

domain\_name

</td><td>

string

</td><td>

Specifies the name of the domain in which to add the specified pin.

</td></tr><tr><td>

domain\_type

</td><td>

string

</td><td>

Specifies the type of domain in which to add the specified pin. The acceptable values for this argument are the following:<br /> -   clock - The domain is a clock domain.
-   set - The domain is a set domain.

<br />

</td></tr></tbody>
</table>|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'pin\_name' is missing.|
|None|Required parameter 'pin\_type' is missing.|
|None|Required parameter 'domain\_type' is missing.|
|None|Required parameter 'domain\_name' is missing.|
|None|domain\_type: Invalid argument value: 'value' \(expecting clock or set\).|
|None|Parameter 'pin\_name' has illegal value.|
|None|Failed to add pin "pin\_name" to "domain".|
|None|pin\_type: Invalid argument value: 'value' \(expecting clock or data\).|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'smartpower\_add\_pin\_in\_domain \[-pin\_name "name of pin"\]+ -domain\_type "clock \| set" -domain\_name "name of domain" -pin\_type "clock \| data"'.|

## Supported Families

|Supported Families|Supported Versions|
|------------------|------------------|
|PolarFire®|v12.4+|
|SmartFusion® 2|v12.4+|
|RTG4™|v12.4+|
|IGLOO® 2|v12.4+|
|PolarFire SoC|v12.6+|

## Example

The following example adds a "XCMP3/U0/U1:Y" clock pin to an existing Clock "clk" domain:

```
smartpower_add_pin_in_domain -pin_name {XCMP3/U0/U1:Y} \
                             -pin_type {clock} \
                             -domain_name {clk} \
                             -domain_type {clock}
```

The following example adds a "XCMP3/U0/U1:Y" data pin to an existing Set "myset" domain:

```
smartpower_add_pin_in_domain -pin_name {XCMP3/U0/U1:Y} \
                             -pin_type {data} \
                             -domain_name {myset} \
                             -domain_type {set}
```

## See Also

-   [smartpower\_create\_domain](GUID-2B3716BF-DF9B-43DE-9CD1-B7738860DECE.md)

**Parent topic:**[SmartPower Tcl Commands](GUID-33C45F08-A467-4461-B5EF-8D86325E235A.md)

