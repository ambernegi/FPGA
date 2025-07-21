# export\_interrupt\_map

This Tcl command exports the interrupt connectivity map of a chosen SmartDesign to a<br /> file. As input, it takes the file path to export the `.json` file in<br /> a particular location and the SmartDesign name for which you want to export the<br /> interrupt report.

**Tip:** This command can be executed for all families without receiving any error messages. However, the exported data might only be of assistance for the PolarFire SoC family.

``` {#CODEBLOCK_SRD_FHJ_LVB}
export_interrupt_map -file {C:\Users\name\Desktop\tmp.json} -sd_name topSD 
        -file : exported file path/name
        -sd_name : SmartDesign name, for which the connectivity map will be constructed
```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|file|String|Specifies the exported file path/name.|
|sd\_name|String|Specifies the SmartDesign name, for which the connectivity map<br /> will be constructed.|

|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|Error: SmartDesign 'DesignName' doesn't exist. Please specify a<br /> valid SmartDesign component name.|When specifying wrong SmartDesign name in the<br /> `sd_name` parameter.|
|Error: Invalid extension specified for the report. Please specify<br /> a valid extension. Valid extension is \\'json\\'.|When the specified file extension is not correct.|
|Error: The report cannot be exported. Please check the specified<br /> file path and write permissions to it.|When the file is not possible to open \(file path is wrong, we do<br /> not have write permission\).|
|Error: Unable to load SmartDesign 'DesignName' model, please<br /> provide a valid SmartDesign.|When the specified SmartDesign is impossible to load|
|Error: 'DesignName' is not a SmartDesign component. Please<br /> specify a valid SmartDesign component name.|When the specified SmartDesign component type is not valid \(is<br /> test bench, IP core, etc\)|
|Info: Successfully exported Interrupt Map Report file to:<br /> \\'FileName\\'\\n".|When the JSON file is successfully exported.|
|Please specify a valid file path and name.|If the "File Name" label is empty in pop-up dialog.|
|Please specify a valid extension \(`.json`\) for<br /> the report.|If the "File Name" label doesn't have correct extension in pop-up<br /> dialog.|
|Please specify a valid SmartDesign component name.|If the "SmartDesign Name" label is empty in pop-up<br /> dialog.|

## Example

This example exports the interrupt connectivity map of the chosen SmartDesign to a<br /> file.

``` {#CODEBLOCK_QGS_HHJ_LVB}
export_interrupt_map -file {C:\Users\name\Desktop\tmp.json} -sd_name topSD
```

**Parent topic:**[Project Manager Tcl Commands](GUID-CE445F8D-419D-434B-9288-A0005F280E89.md)

