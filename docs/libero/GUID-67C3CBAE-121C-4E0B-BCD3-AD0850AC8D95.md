# Generating the SmartDesign Component

After creating your visual design, you need to convert your design into an HDL file that is<br /> used during synthesis and/or simulation of the design. Click **Generate Component** in SmartDesign toolbar to automatically invoke the DRC and check for<br /> any errors.

If there are any DRC errors, the error messages are printed in the<br /> **Message** window. All errors must be fixed for a successful component<br /> generation. Once all the errors are fixed, the component can be generated either recursively<br /> or non-recursively. Non-Recursive generation is enabled by default.

**Important:** Generating a SmartDesign component invalidates the synthesis state of the design if the component is used in that design.

## Generating the SmartDesign Component Recursively

In recursive generation mode, the **Generate** functionality generates all<br /> non-generated components, including the SmartDesign and the configured core components in a<br /> bottom-up fashion. The parent SmartDesign components generates only if all the components it<br /> uses are generated successfully.

To enable recursive generation of designs, perform the following steps:

1.  On the menu, click **Project** &gt; **Preferences**. The **Project Preferences** dialog box appears.
2.  In the **Project Preferences** dialog box, select **Design Flow** from the preferences list on the left side. All the design flow related options are displayed on the right side.
3.  In the **SmartDesign generation options** group, select **Generate recursively**. Recursive generation of the SmartDesign is enabled.

## Generating the SmartDesign Component Non-recursively

In non-recursive generation mode, the<br /> **Generate**command generates the active SmartDesign. If the generation<br /> is successful, SmartDesign is marked as successfully generated even if a sub-component is<br /> un-generated \(either never attempted or unsuccessfully attempted\). An un-generated component<br /> is annotates with an exclamation symbol circled in blue color in the **Design Hierarchy** tab.

To enable non-recursive generation of designs, perform the following steps:

1.  On the menu, click **Project** &gt; **Preferences**. The **Project Preferences** dialog box appears.
2.  In the **Project Preferences** dialog box, select **Design Flow** from the preferences list on the left side. All the design flow related options are displayed on the right side.
3.  In the **SmartDesign generation options** group, select **Generate non-recursively**. Non-recursive generation of the SmartDesign is enabled.

