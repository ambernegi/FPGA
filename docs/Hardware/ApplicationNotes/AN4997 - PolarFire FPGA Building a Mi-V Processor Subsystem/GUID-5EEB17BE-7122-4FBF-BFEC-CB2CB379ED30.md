# Importing Other Constraint Files

The JTAG clock constraint and the asynchronous clocks constraint must be<br /> imported. These constraints \(`.sdc`\) files are available in the<br /> `DesignFiles_directory\HW\src\constraints` folder.

To import and map the constraint files, perform the following steps:

1.  On the **Timing** tab, click **Import**.
2.  Navigate to the `DesignFiles_directory\HW\src\constraints`, and select the `timing_user_constraints.sdc` file.
3.  Select the **Synthesis**, **Place and Route**, and **Timing Verification** checkboxes next to the `timing_user_constraints.sdc` file.

    This constraint file defines that the PF\_CCC\_C0\_0 output clock and PF\_DDR3\_C0\_0 AXI clock are asynchronous clocks.

4.  Click **Save**.

**Parent topic:**[Managing Timing Constraints](GUID-75F68635-D7F9-435D-8BE0-FD55AE977D03.md)

