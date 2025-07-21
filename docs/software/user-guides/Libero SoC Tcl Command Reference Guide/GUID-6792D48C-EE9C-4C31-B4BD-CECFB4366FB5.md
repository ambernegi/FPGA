# download\_core

## Description

This Tcl command downloads a core and adds it to your repository. The Catalog enables you to download cores from a web repository into a Vault. A Vault is a local directory \(either local to your machine or on the local network\) that contains cores downloaded from one or more repositories. A repository is a location on the web that contains cores that can be included in your design. The Catalog displays all the cores in your Vault.

You may want to import a core from a file when:

-   You do not have access to the internet and cannot download the core.
-   A core is not complete and has not been posted to the web \(you have an evaluation core\).

```
download_core -vlnv "Vendor:Library:Name:Version" [-location "location"]
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|vlnv|string|Vendor, library, name and version of the core you want to download. It is mandatory. You can repeat this argument for multiple VLNVs.|
|location|string|Location of the repository where you wish to add the core. It is optional.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'vlnv' is missing.|
|None|Parameter 'vlnv' is missing or has invalid value.|
|None|Parameter 'location' has illegal value.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'download\_core \[-vlnv "vlnv"\]+ \[-location "location"\] ' .|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following example downloads the System Builder \(PF\_DDR4\) core to the repository www.microsemi.com/repositories/SgCore.

```
download_core -vlnv {Actel:SystemBuilder:PF_DDR4:1.0.102} \
        -location {www.microsemi.com/repositories/SgCore}
```

## See Also

-   [configure\_core](GUID-57EB91A2-2781-47C9-95DB-32A2EFD56AF3.md)
-   [create\_and\_configure\_core](GUID-68621767-6285-43A3-8C5E-B8306CC0C496.md)
-   [download\_latest\_cores](GUID-6A9D5996-EBF2-4FBA-8A35-1A82822441FD.md)

**Parent topic:**[Project Manager Tcl Commands](GUID-CE445F8D-419D-434B-9288-A0005F280E89.md)

