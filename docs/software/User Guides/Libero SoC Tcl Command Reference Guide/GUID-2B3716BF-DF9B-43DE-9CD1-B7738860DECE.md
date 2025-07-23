# smartpower\_create\_domain

## Description

This Tcl command creates a new clock or set domain.

**Note:** The domain name cannot be the name of an existing domain. The domain type must be either clock or set.

```
smartpower_create_domain -domain_type {domain type} -domain_name {domain name}
```

## Arguments

<table id="GUID-AD29637F-FC32-4795-B2D0-4D354EDB6215"><thead><tr><th>

Parameter

</th><th>

Type

</th><th>

Description

</th></tr></thead><tbody><tr><td>

domain\_type

</td><td>

string

</td><td>

Specifies the type of domain to create. The acceptable values for this argument are: -   clock - The domain is a clock domain.
-   set - The domain is a set domain.

</td></tr><tr><td>

domain\_name

</td><td>

string

</td><td>

Specifies the name of the new domain.

</td></tr></tbody>
</table>|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'domain\_name' has illegal value.|
|None|Required parameter 'domain\_name' is missing.|
|None|domain\_type: invalid argument value: 'type\_name'\(expecting set or clock\).|
|None|A domain with name "domain\_name" already exists.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'smartpower\_create\_domain -domain\_name "domain name" -domain\_type "set \| clock"'.|

## Supported Families

<table id="GUID-2DE5C82D-C2C6-46BA-95B6-C4347A09E605"><tbody><tr><td>

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

The following example creates a new set domain named "myset":

```
smartpower_create_domain -domain_type {set} -domain_name {myset}
```

## See Also

-   [smartpower\_init\_do](GUID-70780312-85E8-4779-A8B6-59BF892E04E0.md)
-   [smartpower\_remove\_domain](GUID-402D351D-BAAE-45F4-A96A-11F443FE5479.md)

**Parent topic:**[SmartPower Tcl Commands](GUID-33C45F08-A467-4461-B5EF-8D86325E235A.md)

