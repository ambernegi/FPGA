# Running Tcl Scripts from the Command Line

You can run Tcl scripts from your Windows or Linux command line as well as pass<br /> arguments to scripts from the command line.

**Note:** Tcl commands in this section are not case-sensitive.

## To execute a Tcl script file in the Libero SoC Project Manager software from a shell command line:

At the prompt, type the path to the Microchip SoC software installation location<br /> followed by the word "SCRIPT" and a colon, and then the name of the script file as<br /> follows:

-   For Linux: `<location of Libero SoC software installation>/bin/libero script:<filename>.tcl`. For example, to run the Tcl script file "myscript.tcl", type:

    ```
    C:\libero\bin\libero script:myscript.tcl
    ```

-   For Windows: `<location of Libero SoC software installation>\Designer\bin\libero.exe script:<filename>.tcl`. Where `<location of Microchip SoC software>` is the root directory in which you installed the Microchip SoC software, and `<filename>` is the name, including a relative or absolute path, of the Tcl script file to execute. For example, to run the Tcl script file "myscript.tcl", type:

    ```
    C:/Microchip/Libero/Designer/bin/libero.exe script:myscript.tcl
    ```


## To pass arguments from the command line to your Tcl script file:

At the prompt, type the path to the Microchip SoC software installation location<br /> followed by the SCRIPT argument:

-   For Linux: &lt;location of Microchip SoC software&gt;\\bin\\libero “SCRIPT\_ARGS:&lt;filename arg1 arg2 ...&gt;”. For example:

    ```
    C:\libero\bin\libero SCRIPT:myscript.tcl “SCRIPT_ARGS:one two three”
    ```

-   For Windows: &lt;location of Microchip SoC software&gt;/Designer/bin/libero.exe “SCRIPT\_ARGS:&lt;filename arg1 arg2 ...&gt;”. Where &lt;location of Microchip SoC software&gt; is the root directory in which you installed the Microchip SoC software, and “SCRIPT\_ARGS:&lt;filename arg1 arg2 ...&gt;” is the name, including a relative or absolute path, of the Tcl script file and arguments you are passing to the script file. For example:

    ```
    C:/Microchip/Libero/Designer/bin/libero.exe SCRIPT:myscript.tcl “SCRIPT_ARGS:one two three”
    ```


## To obtain the output from the log file:

At the prompt, type the path to the Microchip SoC software installation location<br /> followed by the SCRIPT, SCRIPT\_ARGS and LOGFILE arguments.

```
<location of Microchip SoC software> SCRIPT:<filename>.tcl “SCRIPT_ARGS:a b c” LOGFILE:<output.log>
```

Where:

-   `location of Microchip SoC software` is the root directory in which you installed the Microchip SoC software.
-   `SCRIPT:<filename>.tcl` is the name, including a relative or absolute path, of the Tcl script file.
-   `SCRIPT_ARGS` are the arguments you are passing to the script file.
-   `output.log` is the name of the log file.

For example:

```
C:\libero\designer\bin\libero SCRIPT:testTclparam.tcl “SCRIPT_ARGS:a b c” LOGFILE:testTclparam.log
```

**Parent topic:**[Tcl Scripting Overview](GUID-57D1B766-9771-410F-B0F1-9199613DB164.md)

