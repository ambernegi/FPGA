# smartpower\_remove\_pin\_of\_domain

## Description

This Tcl command removes a clock pin or a data pin from a clock or set domain,<br /> respectively.

**Note:** The domain name must be the name of an existing domain. The pin name must be the name of an existing pin. Execute the "smartpower\_commit" Tcl command for preserving any changes in SmartPower.

```
smartpower_remove_pin_of_domain [-pin_name {name of pin}] \
                                -pin_type {clock | data} \
                                -domain_name {name of domain} \
                                -domain_type {clock | set}
```

## Arguments

<table id="GUID-2222C55C-9C5D-45DD-A265-FCD669E4B6EF"><thead><tr><th>

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

Specifies the name of the pin to remove from the domain.

</td></tr><tr><td>

pin\_type

</td><td>

string

</td><td>

Specifies the type of the pin to remove. The acceptable values<br /> for this argument are the following: -   clock - The pin to remove is a clock pin.
-   set - The pin to remove is a data pin.

</td></tr><tr><td>

domain\_name

</td><td>

string

</td><td>

Specifies the name of the domain from which to remove the<br /> pin.

</td></tr><tr><td>

domain\_type

</td><td>

string

</td><td>

Specifies the type of domain from which the pin is being removed.<br /> The acceptable values for this argument are the following: -   clock - The domain is a clock domain.
-   set - The domain is a set domain.

</td></tr></tbody>
</table>|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'domain\_type' is missing.|
|None|domain\_type: Invalid argument value: 'type name' \(expecting clock<br /> or set\).|
|None|Required parameter 'domain\_name' is missing.|
|None|Required parameter 'pin\_name' is missing.|
|None|Required parameter 'pin\_type' is missing.|
|None|pin\_type: Invalid argument value: 'type\_name' \(expecting clock or<br /> data\).|
|None|Parameter 'pin\_name' is missing or has invalid value.|
|None|Parameter 'domain\_name' is missing or has invalid value.|
|None|Failed to remove pin "in" from domain 'domain\_value'.|
|None|Parameter 'param\_name' is not defined. Valid command formatting<br /> is 'smartpower\_remove\_pin\_of\_domain \[-pin\_name "name of pin"\]+<br /> -domain\_type "clock \| set" -domain\_name "name of domain" -pin\_type<br /> "clock \| data"'.|

## Supported Families

<table id="GUID-A379EE84-57D1-4AFB-835E-72E2B66F1EAD"><tbody><tr><td>

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

The following example removes the clock pin named "XCMP3/UO/U1:Y" from the clock<br /> domain named "myclk":

```
smartpower_remove_pin_of_domain -pin_name {XCMP3/U0/U1:Y} \
                                -pin_type {clock} \
                                -domain_name {myclk} \
                                -domain_type {clock}
```

The following example removes the data pin named "count" from the set domain named<br /> "InputSet":

```
smartpower_remove_pin_of_domain -pin_name {count} \
                                -pin_type {data} \
                                -domain_name {InputSet} \
                                -domain_type {set}
```

**Parent topic:**[SmartPower Tcl Commands](GUID-33C45F08-A467-4461-B5EF-8D86325E235A.md)

