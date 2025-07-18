# extended\_run\_lib

**Note:** This is not a Tcl command; it is a shell script that can be run from the command-line.

The `extended_run_lib` Tcl script enables you to run the multiple pass<br /> layout in batch mode from a command-line.

```
$ACTEL_SW_DIR/bin/libero script:$ACTEL_SW_DIR/scripts/extended_run_lib.tcl logfile:extended_run.log “script_args:-root *path/designer/module\_name* [-n *numPasses*] [- starting_seed_index *numIndex*] [-compare_criteria *value*] [-c *clockName*] [-analysis *value*] [- slack_criteria *value*] [-stop_on_success] [-timing_driven|-standard] [-power_driven *value*] [-placer_high_effort *value*]”
```

**Note:** There is no option to save the design files from all the passes. Only the \(Timing or Power\) result reports from all the passes are saved.

## Arguments

|Parameter|Value|Description|
|---------|-----|-----------|
|-root|path/designer/module\_name|The path to the root module located under the designer directory<br /> of the Libero project.|
|\[-n \]|numPasses|Sets the number of passes to run. The default number of passes is<br /> 5.|
|\[-starting\_seed\_index \]|numIndex|Indicates the specific index into the array of random seeds which<br /> is to be the starting point for the passes. Value may range from 1<br /> to 100. If not specified, the default behavior is to continue from<br /> the last seed index that was used.|
|\[-compare\_criteria \]|value|<br /> <br /> Value Description frequencyUse clock frequency as criteria for<br /> comparing the results between passes. This option<br /> can be used in conjunction with the -c option<br /> \(described below\).violationsUse timing violations as criteria for<br /> comparing the results between passes. This option<br /> can be used in conjunction with the -analysis,<br /> -slack\_criteria and - stop\_on\_success options<br /> \(described below\).powerUse total power as criteria for comparing<br /> the results between passes, where lowest total<br /> power is the goal.<br /> <br />|
|\[-c \]|clockName|Applies only when the clock frequency comparison criteria is<br /> used. Specifies the particular clock that is to be examined. If no<br /> clock is specified, then the slowest clock frequency in the design<br /> in a given pass is used. The clock name should match with one of the<br /> Clock Domains in the Summary section of the Timing report.|
|\[-analysis \]|value|Applies only when the timing violations comparison criteria is<br /> used. Specifies the type of timing violations \(the slack\) to<br /> examine. The following table shows the acceptable values for this argument:<br /> Value Description maxExamines timing violations \(slack\) obtained<br /> from maximum delay analysis. This is the<br /> default.minExamines timing violations \(slack\) obtained<br /> from minimum delay analysis.<br />|
|\[-slack\_criteria \]|value|Applies only when the timing violations comparison criteria is<br /> used. Specifies how to evaluate the timing violations \(slack\). The<br /> type of timing violations \(slack\) is determined by the -analysis<br /> option. The following table shows the acceptable values for this argument:<br /> Value Description worstSets the timing violations criteria to<br /> Worst slack. For each pass obtains the most amount<br /> of negative slack \(or least amount of positive<br /> slack if all constraints are met\) from the timing<br /> violations report. The largest value out of all<br /> passes will determine the best pass. This is the<br /> default.tnsSets the timing violations criteria to<br /> Total Negative Slack \(tns\). For each pass it<br /> obtains the sum of negative slack values from the<br /> first 100 paths from the timing violations report.<br /> The largest value out of all passes determines the<br /> best pass. If no negative slacks exist for a pass,<br /> then the worst slack is used to evaluate that<br /> pass.<br />|
|\[-stop\_on\_success\]| |Applies only when the timing violations comparison criteria is<br /> used. The type of timing violations \(slack\) is determined by the<br /> `-analysis` option. Stops running the remaining<br /> passes if all timing constraints have been met \(when there are no<br /> negative slacks reported in the timing violations report\).|
|\[-timing\_driven\|-standard\]| |Sets layout mode to timing driven or standard \(non-timing<br /> driven\). The default is `-timing_driven` or the mode<br /> used in the previous layout command.|
|\[-power\_driven \]|value|Enables or disables power-driven layout. The default is off or<br /> the mode used in the previous layout command. The following table<br /> shows the acceptable values for this argument:<br /> Value Description offDoes not run power-driven layout.onEnables power-driven layout.<br />|
|\[-placer\_high\_effort \]|value|Sets placer effort level. The default is off or the mode used in<br /> the previous layout command. The following table shows the<br /> acceptable values for this argument:<br /> Value Description offRuns layout in regular effort.onActivates high effort layout mode.<br />|

## Returns

A nonzero value will be returned on error.

**Parent topic:**[Tcl Scripting Overview](GUID-57D1B766-9771-410F-B0F1-9199613DB164.md)

