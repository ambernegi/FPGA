# export\_ba\_files

## Description

Tcl command to export the backannotated files. The backannotated files are:

-   &lt;design\_name&gt;\_fast\_hv\_lt\_ba.v
-   &lt;design\_name&gt;\_slow\_lv\_ht\_ba.v
-   &lt;design\_name&gt;\_slow\_lv\_lt\_ba.v \(Verilog backannotated netlist\) or &lt;design\_name&gt;\_fast\_hv\_lt\_ba.vhd
-   &lt;design\_name&gt;\_slow\_lv\_ht\_ba.vhd
-   &lt;design\_name&gt;\_slow\_lv\_lt\_ba.vhd \(VHDL backannotated netlist\)
-   &lt;design\_name&gt;\_fast\_hv\_lt\_ba.sdf
-   &lt;design\_name&gt;\_slow\_lv\_ht\_ba.sdf
-   &lt;design\_name&gt;\_slow\_lv\_lt\_ba.sdf \(Standard Delay Format\) timing file.

These files are passed to the default simulator for postlayout simulation. Before exporting, you need to run 'Place and Route'.

```
export_ba_files -export_dir {absolute path to folder location} \
                -export_file_name {name of file} \
                -vhdl {value} \
                -min_delay {value}
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|export\_dir|string|Specifies the path where you wish to export the backannotated files.|
|export\_file\_name|string|File name to generate the files. If not specified, it takes &lt;design\_name&gt; as the default. If specified it takes &lt;design\_name\_file\_name&gt;.|
|vhdl|integer|Generates the &lt;design\_name&gt;\_ba.v and &lt;design\_name&gt;\_ba.sdf when set to 0 and &lt;design\_name&gt;\_ba.vhd and &lt;design\_name&gt;\_ba.sdf when set to 1. Default is 0.|
|min\_delay|integer|Set to 1 to export enhanced min delays to include your best-case timing results in your Back Annotated file. Default is 0.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'export\_dir' is missing.|
|None|vhdl: Invalid argument value: 'value' \(expecting TRUE, 1, true, FALSE, 0 or false\).|
|None|min\_delay: Invalid argument value: 'value' \(expecting TRUE, 1, true, FALSE, 0 or false\).|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'export\_ba\_files -export\_dir "Export Dir Name" \\ \[-export\_file\_name "Export File Name"\] \\ \[-vhdl "TRUE \| FALSE"\] \\ \[-min\_delay "TRUE \| FALSE"\] ' .|

## Supported Families

|Supported Families|
|------------------|
|PolarFire®|
|RTG4™|
|SmartFusion® 2|
|IGLOO® 2|

## Example

The following example creates the "`E:\designer\export\sd1"` directory where the following backannotated files are generated and exported.

-   test\_fast\_hv\_lt\_ba.sdf
-   test\_fast\_hv\_lt\_ba.v
-   test\_slow\_lv\_ht\_ba.sdf
-   test\_slow\_lv\_ht\_ba.v
-   test\_slow\_lv\_lt\_ba.sdf
-   test\_slow\_lv\_lt\_ba.v

```
export_ba_files -export_dir {E:\designs\export\sd1} \
                -export_file_name {test} \
                -vhdl 0 \
                -min_delay 1
```

**Parent topic:**[Project Manager Tcl Commands](GUID-CE445F8D-419D-434B-9288-A0005F280E89.md)

