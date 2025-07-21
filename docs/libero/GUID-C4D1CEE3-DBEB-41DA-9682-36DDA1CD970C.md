# Simulating Your Design

To simulate your design outside of Libero \(that is, using your own simulation environment and simulator\), perform the following steps:

1.  Design Files:
    1.  Pre-Synthesis simulation:
        -   Import your RTL into your simulation project.
        -   For each [Component Manifests](GUID-E82E32F4-E622-477E-A4C9-37BB5DE032DC.md) Report.
            -   Import each file under **HDL source files for all Synthesis and Simulation tools** into your simulation project.
        -   Compile these files as per your simulator's instructions.
    2.  Post-synthesis simulation:
        -   Import your post-synthesis `*.vm` netlist \(generated in [Synthesizing Your Design](GUID-568A8F4F-5C22-46BE-82A7-E99D4E82354F.md)\) into your simulation project and compile it.
    3.  Post-layout simulation:
        -   First, complete implementing your design \(see [Implementing Your Design](GUID-F965CBB5-6C3C-4168-9F79-536DB5AB4A36.md)\). Ensure that your final Libero project is in post-layout state.
        -   Double-click `Generate BackAnnotated Files` in the **Libero Design Flow** window. It generates two files:

            ``` {#CODEBLOCK_CQ5_HHX_Z5B}
            <project directory>/designer/<root>/<root>_ba.v/vhd <project directory>/designer/<root>/<root>_ba.sdf 
            ```

        -   Import both of these files into your simulation tool.
2.  Stimulus and Configuration files:
    1.  For each [Component Manifests](GUID-E82E32F4-E622-477E-A4C9-37BB5DE032DC.md) Report:
        -   Copy all files under the `Stimulus Files for all Simulation Tools` sections to the root directory of your Simulation project.
    2.  Ensure that any Tcl files in the preceding lists \(in step [2.a](GUID-C4D1CEE3-DBEB-41DA-9682-36DDA1CD970C.md#GUID-6D4481D7-AF25-42C7-88E6-F848EAF01EC1)\) are executed first, before the start of simulation.
    3.  `UPROM.mem`: If you use the UPROM core in your design with the option **Use content for simulation** enabled for one or more data storage clients that you wish to simulate, you must use the executable pa4rtupromgen \(`pa4rtupromgen.exe on windows`\) to generate the `UPROM.mem` file. The `pa4rtupromgen` executable takes the `UPROM.cfg` file as inputs through a Tcl script file and outputs the `UPROM.mem` file required for simulations. This `UPROM.mem` file must be copied to the simulation folder prior to the simulation run. An example showing the `pa4rtupromgen`executable usage is provided in the following steps. The `UPROM.cfg` file is available in the directory `<Project>/component/work/<uPROM component name>/<uPROM instance name>` in the Libero project that you used to generate the UPROM component.
    4.  `snvm.mem`: If you use the System Services core in your design and configured the **sNVM** tab in the core with the option **Use content for simulation** enabled for one or more clients that you wish to simulate, a `snvm.mem` file is automatically generated to the directory `<Project>/component/work/<PolarFire System Services component name>/<uPROM instance name>` in the Libero project that you used to generate the System Services component. This `snvm.mem` file must be copied to the simulation folder prior to the simulation run.
3.  Create a working folder and a sub-folder named **simulation** under the working folder.

    The<br /> `pa4rtupromgen` executable expect the presence of the<br /> **simulation** sub folder in the working folder and the<br /> `*.tcl` script is placed in the **simulation** sub<br /> folder.

4.  Copy the `UPROM.cfg` file from the first Libero project created for component generation into the working folder.
5.  Paste the following commands in a `*.tcl` script and place it in the simulation folder created in step [3](GUID-C4D1CEE3-DBEB-41DA-9682-36DDA1CD970C.md#GUID-CF78ABD7-A894-4A64-8575-DC05F8B4BE64).

    ``` {#CODEBLOCK_NQ5_HHX_Z5B}
    Sample *.tcl for PolarFire and PolarFire Soc Family devices to generate URPOM.mem file from UPROM.cfg
    set_device -fam <family> -die <internal_die_name> -pkg <internal_pkg_name> 
    set_input_cfg -path <path_to_UPROM.cfg> 
    set_sim_mem -path <path_to_UPROM_Initialization_File/UPROM.mem> 
    gen_sim -use_init false 
    
    ```

    For the proper internal name to use for the die and package, see the<br /> `*.prjx` file of the first Libero project \(used for component<br /> generation\).

    The argument `use_init` must be set to<br /> false.

    Use the `set_sim_mem` command to specify the path to the<br /> output file `UPROM.mem` that is generated upon execution of the<br /> script file with the `pa4rtupromgen` executable.

6.  At the command prompt or `cygwin` terminal, go to the working directory created in step [3](GUID-C4D1CEE3-DBEB-41DA-9682-36DDA1CD970C.md#GUID-CF78ABD7-A894-4A64-8575-DC05F8B4BE64). Execute the `pa4rtupromgen` command with the--script option and pass to it the `*.tcl` script created in the previous step.

    For Windows®:

    ```
    <Libero_SoC_release_installation>/designer/bin/pa4rtupromgen.exe \
     --script./simulation/<Tcl_script_name>.tcl
    ```

    For Linux®:

    ```
    <Libero_SoC_release_installation>/bin/pa4rtupromgen 
    --script./simulation/<tcl_script_name>.tcl
    ```

7.  After successful execution of the `pa4rtupromgen` executable, check that the `UPROM.mem` file is generated in the location specified in the `set_sim_mem` command in the `*.tcl` script.
8.  To simulate the sNVM, copy the `snvm.mem` file from your first Libero project \(used for component configuration\) into the top level simulation folder of your simulation project to run simulation \(outside of Libero SoC\). To simulate UPROM contents, copy the generated `UPROM.mem` file into the top level simulation folder of your simulation project to run simulation \(outside of Libero SoC\).

**Important:** To simulate the functionality of SoC Components, download the pre-compiled PolarFire simulation libraries and import them into your simulation environment as described here. For more details, see [Appendix B—Importing Simulation Libraries into Simulation Environment](GUID-12CE2A8E-1846-4B44-9EE7-92EFF2A1A043.md).

