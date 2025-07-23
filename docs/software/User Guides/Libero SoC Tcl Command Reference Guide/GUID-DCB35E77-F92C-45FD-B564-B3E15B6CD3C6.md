# Basic Syntax

Tcl scripts contain one or more commands separated by either new lines or semicolons.<br /> A Tcl command consists of the name of the command followed by one or more arguments.<br /> The format of a Tcl command is:

```
command arg1 ... argN
```

The command in the following example computes the sum of 2 plus 2 and returns the<br /> result, 4.

```
expr 2 + 2
```

The `expr` command handles its arguments as an arithmetic expression,<br /> computing and returning the result as a string. All Tcl commands return results. If a<br /> command has no result to return, it returns an empty string.

To continue a command on another line, enter a backslash \(\\\) character at the end of<br /> the line. For example, the following Tcl command appears on two lines:

```
import -format "edif" -netlist_naming "Generic" -edif_flavor "GENERIC" {prepi.edn}
```

Comments must be preceded by a hash character \(\#\). The comment delimiter \(\#\) must be<br /> the first character on a line or the first character following a semicolon, which<br /> also indicates the start of a new line. To create a multi-line comment, you must put<br /> a hash character \(\#\) at the beginning of each line.

**Important:** Be sure that the previous line does not end with a continuation character \(\\\). Otherwise, the comment line following it will be ignored.

**Parent topic:**[Tcl Scripting Overview](GUID-57D1B766-9771-410F-B0F1-9199613DB164.md)

## Special Characters

Square brackets \(`[ ]`\) are special characters in Tcl. To use square brackets in names such as port names, you must either enclose the entire port name in curly braces, or lead the square brackets with a slash \(\\\) character.

## Sample Tcl Script

```
#Create a new project and set up a new design
new_project -location {D:/2Work/my_pf_proj} -name {my_pf_proj} -project_description {}\
-block_mode 0 -standalone_peripheral_initialization 0 -use_enhanced_constraint_flow 1\
-hdl {VERILOG} -family {PolarFire} -die {MPF300TS_ES} -package {FCG1152} -speed {-1} \
-die_voltage {1.0} -part_range {EXT} -adv_options {IO_DEFT_STD:LVCMOS 1.8V}\
-adv_options {RESTRICTPROBEPINS:1} -adv_options {RESTRICTSPIPINS:0}\
-adv_options {SYSTEM_CONTROLLER_SUSPEND_MODE:1} -adv_options {TEMPR:EXT} \
-adv_options {VCCI_1.2_VOLTR:EXT} -adv_options {VCCI_1.5_VOLTR:EXT} \
-adv_options {VCCI_1.8_VOLTR:EXT} -adv_options {VCCI_2.5_VOLTR:EXT} \
-adv_options {VCCI_3.3_VOLTR:EXT} -adv_options {VOLTR:EXT} 
#Import HDL source file
import_files -convert_EDN_to_HDL 0 -hdl_source {C:/test/prep1.v} 
#Import HDL stimulus file
import_files -convert_EDN_to_HDL 0 -stimulus {C:/test/prep1tb.v} 
#set the top level design name
set_root -module {prep1::work}
#Associate SDC constraint file to Place and Route tool
organize_tool_files -tool {PLACEROUTE} -file {D:/2Work/my_pf_proj/constraint/user.sdc} \
-module {prep1::work} -input_type {constraint} 
#Associate SDC constraint file to Verify Timing tool
organize_tool_files -tool {VERIFYTIMING} -file {D:/2Work/my_pf_proj/constraint/user.sdc}\
-module {prep1::work} -input_type {constraint} 
#Run synthesize
run_tool -name {SYNTHESIZE} 
#Configure Place and Route tool
configure_tool -name {PLACEROUTE} -params {DELAY_ANALYSIS:MAX} -params {EFFORT_LEVEL:false}\
-params {INCRPLACEANDROUTE:false} -params {MULTI_PASS_CRITERIA:VIOLATIONS}\
-params {MULTI_PASS_LAYOUT:false} -params {NUM_MULTI_PASSES:5} -params {PDPR:false}\
-params {RANDOM_SEED:0} -params {REPAIR_MIN_DELAY:false} -params {SLACK_CRITERIA:WORST_SLACK} \
-params {SPECIFIC_CLOCK:} -params {START_SEED_INDEX:1} -params {STOP_ON_FIRST_PASS:false}\
-params {TDPR:true} 
#Run Place and Route
run_tool -name {PLACEROUTE} 
#Configure Timing Report Generation
configure_tool -name {VERIFYTIMING} -run_tool -name {PLACEROUTE}params {CONSTRAINTS_COVERAGE:1}\
-params {FORMAT:XML} -params {MAX_TIMING_FAST_HV_LT:0} -params {MAX_TIMING_SLOW_LV_HT:1}\
-params {MAX_TIMING_SLOW_LV_LT:0} -params {MAX_TIMING_VIOLATIONS_FAST_HV_LT:0} \
-params {MAX_TIMING_VIOLATIONS_SLOW_LV_HT:1} -params {MAX_TIMING_VIOLATIONS_SLOW_LV_LT:0}\
-params {MIN_TIMING_FAST_HV_LT:1} -params {MIN_TIMING_SLOW_LV_HT:0} -params {MIN_TIMING_SLOW_LV_LT:0} -params {MIN_TIMING_VIOLATIONS_FAST_HV_LT:1} -params {MIN_TIMING_VIOLATIONS_SLOW_LV_HT:0} \
-params {MIN_TIMING_VIOLATIONS_SLOW_LV_LT:0}
#Run Verify Timing tool 
run_tool -name {VERIFYTIMING} 
#Run Power Verification tool 
run_tool -name {VERIFYPOWER} #Export bitstream
export_bitstream_file -file_name {prep1} \
-export_dir {D:\2Work\my_pf_proj\designer\prep1\export} -format {STP} -master_file 0 \
-master_file_components {} -encrypted_uek1_file 0 -encrypted_uek1_file_components {} \
-encrypted_uek2_file 0 -encrypted_uek2_file_components {} \
-trusted_facility_file 1 -trusted_facility_file_components {FABRIC}
```

