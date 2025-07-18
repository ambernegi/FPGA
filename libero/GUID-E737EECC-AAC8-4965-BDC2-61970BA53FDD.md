# complete\_debug\_job

## Description

Completes the current open job and generates a job status container including cryptographically<br /> signed Job Ticket end certifiers and Certificates of Conformance \(if enabled\) of the<br /> programmed devices. It archives ticket data from the HSM database. The resultant Job<br /> Status container can be imported into Job Manager and validated using U-HSM. If the<br /> job status file is not specified, the information is printed in the log window and<br /> no Job Status container is created for subsequent verification.

The HSM Job can be completed only if the number of devices in each HSM ticket has been exhausted.<br /> If devices remain, the job can only be terminated by using the<br /> `-terminate` option.

**Note:** This command fails if there are devices left in any HSM ticket and the terminate option is not used.

``` {#CODEBLOCK_Z4R_PX1_K5B}
complete_debug_job [-job_status_file "job status file"] [-terminate]

```

## Arguments

|Parameter|Type|Description|
|---------|----|-----------|
|job\_status\_file|string|Full path to the output Job Status container, which contains End-Job Certifier and CofCs. If not<br /> specified, information is printed in the log window.|
|terminate|flag|Terminates the HSM job even if there are devices left in any HSM ticket. This parameter is optional if the number of devices in all tickets has been exhausted.|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Fpeng error: Chain manager is not set.|
|None​|Parameter 'param\_name' is not defined. Valid command formatting is 'complete\_debug\_job<br /> \[-job\_status\_file "job status file"\] \\<br /> \[-terminate\]'.|

## Supported Families

<table id="TABLE_GPR_PX1_K5B"><tbody><tr><td>

PolarFire

</td></tr><tr><td>

SmartFusion 2

</td></tr><tr><td>

IGLOO 2

</td></tr></tbody>
</table>## Example

This example terminates an HSM<br /> job.

``` {#CODEBLOCK_IPR_PX1_K5B}
complete_debug_job -terminate -job_status_file {./MyJobStatusEnd}
```

**Parent topic:**[SmartDebug Tcl Commands](GUID-5F0515FB-DC45-4C39-86E5-8B7DC659F010.md)

