# Updating a Core Version

Perform the following procedure to update a core version:

1.  Download the latest version of the core into your vault.

2.  Upgrade each configured core in your design to the latest version by right-clicking the core component in the design hierarchy and selecting **Update Component Version**. The component is regenerated automatically.

    **Important:** The **Update Component Version** option is now available on instances of core components in a SmartDesign canvas as well. In addition, the selected core version is downloaded automatically from the Update Component Version dialog itself if needed.

3.  Review the SmartDesign components and user RTL files in which the core component has been instantiated. If the port-list of the core component is modified after updating to the new core version, right-click the core component's instance in the SmartDesign and select **Update Instance** to update its port-list. Check for any pin/port disconnections in the SmartDesign or for any new pins exposed on the core component's instance, and then connect them or tie them off as needed and regenerate the SmartDesign component.

4.  Build Design Hierarchy and Derive the Timing Constraints again from the Constraint Manager tool to use the latest generated core timing constraints.

5.  Rerun the design flow.


**Parent topic:**[Migrating Designs to Libero SoC](GUID-DB080ED8-B7CB-4D0A-A9E4-76504DFDFF09.md)

