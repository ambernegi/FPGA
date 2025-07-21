# About the Timing Constraints Editor

This chapter provides an overview of the Timing Constraints Editor.

## Constraints Editor Window

The **Constraints Editor** window is organized into the following<br /> areas:

-   Constraint Browser
-   Constraint List
-   Constraint Adder

![???](GUID-EE5EB3C9-528F-41C8-B587-D44718B0419B-low.jpg "Constraints Editor")

### Constraints Browser

The **Constraint Browser** categorizes constraints based on the following<br /> types of<br /> constraints:

-   Requirements are constraints to meet the design’s timing requirements and specifications. Examples are clock constraints and generated clock constraints.
-   Exceptions are constraints on certain timing paths for special considerations. Examples are false path constraints and multicycle path constraints.
-   Advanced are special timing constraints such as clock latency and clock groups.

### Constraints List

The **Constraints List** is a spreadsheet of constraints with detailed values<br /> and parameters of the constraint displayed in individual cells. You can click the<br /> individual spreadsheet cells to change the values of the constraint parameters.

### Constraints Adder

Constraints Adder is the first row of the constraint list spreadsheet. There are two ways to add<br /> a constraint from this row.

-   To add a constraint of the same type to the **Constraint List**, right-click a row and select **Add Constraint**. This method displays the specific add constraint dialog.
-   Click in a cell, and then double-click and start typing. This method is for the experienced users who know the design well and do not need to rely on the dialog box for guidance.

You can perform the following tasks in the Constraints View:

-   From the **Constraint Browser**, select a constraint type, and then create or edit the constraint.
-   Add a new constraint and check the syntax.
-   Right-click a constraint in the **Constraints List** to edit or delete.
-   Use the first row to create a constraint, and then add it to the **Constraints List**.

### Constraint Editor Icons

You can click the icons across the top of the Constraint Editor to add constraints. Tool tips are<br /> available to identify the constraints. The following table lists the the icons.

|Icon|Name \(Tool tip\)|
|----|-----------------|
|![???](GUID-03176160-D521-4007-B70C-1AE955D0AF01-low.jpg)|Add Clock Constraint|
|![???](GUID-A708BD0B-99EA-4C05-A70E-2469FF19B9CF-low.jpg)|Add Generated Clock Constraint|
|![???](GUID-6E4AF235-FD1E-4D0A-8528-D21CBA1BA4D6-low.jpg)|Add Input Delay Constraint|
|![???](GUID-5562FD1F-C728-4EDA-A484-690D3984B0C8-low.jpg)|Add Output Delay Constraint|
|![???](GUID-045D1A96-12ED-49EA-8601-95070D909220-low.jpg)|Add Maximum Delay Constraint|
|![???](GUID-2C836049-A701-465D-AC57-667CBBA5076C-low.jpg)|Add Minimum Delay Constraint|
|![???](GUID-94899C41-747E-457A-A1EE-E7B544FF2254-low.jpg)|Add Multicycle Path Constraint|
|![???](GUID-2934A6CE-47DA-4097-A7B5-0CC58E50E895-low.jpg)|Add False Path Constraint|
|![???](GUID-58451AE9-5705-4D22-9B86-81E6428F5F67-low.jpg)|Add Disable Timing Constraint|
|![???](GUID-801A2F27-678F-452C-AC81-A9E649ABA160-low.jpg)|Add Clock Source Latency|
|![???](GUID-C99D74A0-9899-4AB7-82CB-73EB71644786-low.jpg)|Add Clock to Clock Uncertainty|

## Adding Constraints

The Constraints Editor provides four ways to add constraints using the **Add Constraints** dialog box.

1.  Option 1: Click the **Add Constraint** ![???](GUID-BE78FD2F-4D0E-48D8-9046-9F91AB5082A2-low.jpg) icon.
2.  Option 2:

    In the **Constraints Browser**, click the type<br /> of constraints you want to add.

    ![](GUID-73200350-331A-4539-A758-685E8EB0174C-low.png "Adding Constraints Using Constraints Browser")

3.  Option 3:

    From the<br /> **Constraints** menu, click a constraint.

    <br />

    ![](GUID-413C12D3-A295-4A15-92A9-7DC88BC3F442-low.png "Adding Constraints Using Constraints Menu")

    <br />

4.  Option 4:

    In the **Constraints Browser**, click the type<br /> of constraints you want to add. Right-click the first row and in the context<br /> menu that appears, click the constraint.

    <br />

    ![](GUID-F04BF082-B4F9-4908-89BE-294F89BD45E1-low.png "Adding Constraints Using Constraint Adder")

    <br />


