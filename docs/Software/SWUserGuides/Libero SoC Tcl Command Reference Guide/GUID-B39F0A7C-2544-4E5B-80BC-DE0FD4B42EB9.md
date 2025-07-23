# process\_job\_request

## Description

This Tcl<br /> command processes a job request received from Job Manager. It is part of the Job<br /> Ticket generation process.

**Important:** HSM server name must be specified via HSM\_SERVER\_NAME DEF variable.

```
process_job_request -request_file "job request file" \
                    -reply_file "job reply file" \
		    [-overwrite_reply "TRUE | FALSE"]
```

## Arguments

<table id="GUID-26FBFFF0-2567-4BF9-887C-E465E5F448CE"><thead><tr><th>

Parameter

</th><th>

Type

</th><th>

Description

</th></tr></thead><tbody><tr><td>

request\_file

</td><td>

string

</td><td>

Specifies full file name of job request file. This parameter is<br /> mandatory.

</td></tr><tr><td>

reply\_file

</td><td>

string

</td><td>

Specifies full file name of job reply file. This parameter is<br /> mandatory.

</td></tr><tr><td>

overwrite\_reply

</td><td>

boolean

</td><td>

This parameter is optional. The possible value of this parameter<br /> are the following: -   TRUE or 1: Allows overwriting of any pre-existing reply\_file.
-   FALSE or 0: Does not allow overwriting of any pre-existing reply\_file.

</td></tr></tbody>
</table>|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Required parameter 'request\_file' is missing.|
|None|Required parameter 'reply\_file' is missing.|
|None|Parameter 'request\_file' : the file '/request\_file\_name' does not<br /> exist.|
|None|overwrite\_reply: Invalid argument value: 'value' \(expecting TRUE,<br /> 1, true, FALSE, 0 or false\).|
|None|Cannot get HSM.|
|None|Parameter 'param\_name' is not defined. Valid command formatting<br /> is 'process\_job\_request -request\_file "job request file" \\<br /> -reply\_file "job reply file" \\ \[-overwrite\_reply "TRUE \|<br /> FALSE"\]'.|

## Supported Families

<table id="GUID-2CA6E74B-83EF-4442-B6E5-3E62E63AC9D6"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

SmartFusion® 2

</td></tr><tr><td>

IGLOO® 2

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

This example<br /> processes a job<br /> request:

```
process_job_request \
        -request_file {D:/flashpro_files/jobmgr_project/cm_request.req} \
        -reply_file {D:/flashpro_files/jobmgr_project/cm_reply.rep} \
        -overwrite_reply {TRUE}
```

## See Also

-   set\_hsm\_params
-   create\_job\_project

**Parent topic:**[HSM Tcl Commands](GUID-CD881DBA-BED9-4BE7-B7B4-5359C305F0A3.md)

