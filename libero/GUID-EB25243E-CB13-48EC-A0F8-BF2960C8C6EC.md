# Handoff Design for Firmware Development \(SmartFusion 2 and IGLOO 2\)

The following sections apply to SmartFusion 2 and IGLOO 2 devices only.

## Software IDE Integration \(SmartFusion 2 and IGLOO 2\)

Libero SoC simplifies the task of transitioning between designing your FPGA to developing your embedded firmware.

Libero SoC manages the firmware for your FPGA hardware design, including:

-   Firmware hardware abstraction layers required for your processor
-   Firmware drivers for the processor peripherals that you use in your FPGA design
-   Sample application projects are available for drivers that illustrate the proper usage of the APIs

To see which firmware drivers Libero SoC has found to be compatible with your design, open the<br /> [Firmware View](GUID-EB25243E-CB13-48EC-A0F8-BF2960C8C6EC.md#). From this view, you can change the configuration<br /> of your firmware, change to a different version, read driver documentation, and generate<br /> any sample projects for each driver.

Libero SoC manages the integration of your firmware with your preferred Software Development<br /> Environment, including SoftConsole, Keil, and IAR Embedded Workbench. The projects and<br /> workspaces for your selected development environment are generated automatically with<br /> the proper settings and flags so you can write your application immediately.

## Viewing/Configuring Firmware Cores \(SmartFusion 2 and IGLOO 2\)

The **Design Firmware** tab allows you to select and configure<br /> firmware cores \(drivers\) for your Software IDE project. The tab lists the compatible<br /> firmware for the hardware you instantiated in your design.

To display the **Design Firmware** tab in the Design Flow tab, expand<br /> **Create Design** and double-click **View/Configure Firmware Cores**.

The **Firmware** table lists the compatible firmware and drivers based<br /> on the hardware peripherals used in your design. Each row represents a firmware core<br /> that is compatible with a hardware peripheral in your design. The following table<br /> describes the columns in the **Firmware** table.

|Column|Description|
|------|-----------|
|Generate|Choose whether you want the files for this firmware core to be<br /> generated on disk and added to your Software IDE project. Click the<br /> checkbox to generate firmware for each peripheral in your<br /> design.|
|Instance Name|Name of the firmware instance. This can help to identify firmware<br /> cores when you have multiple firmware cores with the same<br /> Vendor:Library:Name:Version \(VLNV\) in your design.|
|Core Type|Name from the VLNV ID of the core. This name generally corresponds to<br /> the name of the hardware peripheral with which the firmware core is<br /> compatible.|
|Version|Firmware core version. Use the drop-down menu to upgrade or choose a<br /> different version.|
|Compatible Hardware Instance|Hardware instance in your design that is compatible with this<br /> firmware core.|

### Downloading Firmware

Libero attempts to find compatible firmware located in the IP Vault located on your disk,<br /> as well as firmware in the IP Repository via the Internet.

If compatible firmware is found in the IP repository but not on your disk, the row will<br /> be italicized, indicating that it needs to be downloaded. To download all firmware cores<br /> necessary for your project peripherals, click the **Download All Firmware** icon in the vertical toolbar.

#### Libero IDE Fails to Connect to Default Repositories over the Internet

If Libero IDE fails to connect to the web repositories on a computer connected to the<br /> Internet, it typically means that the connection is being blocked by a network firewall<br /> or that the Internet connection is made via a proxy server. Verify that the URLs shown<br /> in your catalog options window are correct: **Libero** &gt; **Catalog** &gt; **Options** &gt; **Vault Repositories Settings/Repositories**.

If your Internet gateway uses a proxy server:

1.  From the Libero IDE toolbar, go to **Project** &gt; **Preferences** and click the **Proxy** tab.
2.  Check the **Use a Proxy Server** check box.
3.  Enter the Proxy Server name on the network. In most cases, using the proxy server name solves the problem. If the server name does not work, enter the IP address of the proxy server.

### Configuring Firmware

Firmware cores that have configurable options will have a wrench icon in the row. Click the wrench icon to configure the firmware core.

It is important that you check the configuration of your firmware cores if they have configurable<br /> options. They might have options that target your software IDE<br /> \(Keil, IAR, or SoftConsole\), or your processor, that are vital<br /> configuration options for the system to work properly.

### Generating Firmware

Click the UI control icon to export the firmware drivers and software IDE project for your<br /> project. The firmware drivers are generated into<br /> &lt;project&gt;\\firmware and the software workspace is exported<br /> to &lt;project&gt;\\&lt;toolchain&gt;.

&lt;toolchain&gt; could be SoftConsole, IAR, or Keil, depending on your software IDE. The<br /> firmware drivers are also copied into the &lt;toolchain&gt; folder.

### Changing Firmware Core Versions

You can manually change to the latest version by selecting the drop-down in the Version<br /> column.

There will often be multiple versions of a firmware cores available for a particular peripheral. The MSS Configurator selects the latest compatible version for a new design.

However, once the firmware is added to your design, Libero will not automatically change to the<br /> latest version if one becomes available.

**Note:** If a core version is shown in italics, it is available in the Web Repository but not in your Vault. You must download the firmware core version to use it in your design.

### Generating Sample Projects

Firmware cores are packaged with sample projects that demonstrate their usage. They are packaged<br /> for specific tool chains, such as Keil, IAR, and SoftConsole

To generate a sample project,

1.  Right-click the firmware core
2.  Choose **Generate Sample Project**
3.  Select your IDE tool chain \(such as Keil\) and choose from the list of available samples.

You will be prompted to select the destination folder for the sample project.

Once this project is generated you can use it as a starting point in your Software IDE tool or use the example project as a reference on how to use the firmware driver.

### Fabric Peripherals

Libero SoC also attempts to find compatible firmware for soft \(fabric\) peripherals that you have added in your top- level SmartDesign if that top-level is Set as Root.

To set your top-level design as a root, right-click your top-level design in the Design Hierarchy and choose **Set as Root**. The root component appears in bold.

The following figure shows CoreGPIO, CorePWM, and CoreUARTapb soft cores that are added into your<br /> top-level SmartDesign.

![???](GUID-C8A34BF4-5B07-43E9-A802-FFA1D4F876EF-low.jpg "Firmware Cores Tab (DESIGN_FIRMWARE)")

## Exporting Firmware \(SmartFusion 2 and IGLOO 2\)

When your design is completed, you can export the design firmware configuration using the<br /> Export Firmware tool. The firmware configuration contains:

-   Register configuration files for MSS, FDDR, and SERDES blocks instantiated in your design. This information, along with the SmartFusion 2 CMSIS firmware core, must be compiled with your application to have proper Peripheral Initialization when the Cortex-M3 boots.
-   Firmware drivers compatible with the hard and soft peripherals instantiated in your design.

**Note:** If you make any changes to your design, you must re-export firmware.

To export your design firmware configuration:

1.  In the Libero SoC Design Flow window, under **Handoff Design for Firmware Development**, double-click **Export Firmware**. The Export Firmware dialog box appears.
2.  Complete the fields in the dialog box.
3.  Click **OK**.

![???](GUID-171B5BCB-5199-46E8-9C2B-7801906B4902-low.jpg "Export Firmware Dialog Box")

|Field|Description|
|-----|-----------|
|Location|Location where you want the firmware configuration files to be<br /> exported. When you export the firmware, Libero SoC creates a<br /> **Firmware** folder to store all the drivers and<br /> register configuration files.|
|Software IDE: &lt;selected Software Tool Chain&gt;|Libero SoC creates the firmware project for the IDE tool of your<br /> choice and stores the projects in the folder<br /> `SoftConsole/IAR/Keil (*per your choice*)`.|
|Export hardware configuration and firmware drivers|This option is selected by default. This setting exports register<br /> configuration files for MSS, FDDR, and SERDES blocks instantiated in<br /> your design. CMSIS and other firmware drivers must be generated using<br /> the stand-alone Firmware Catalog executable. These options are available<br /> to support SoftConsole 4.0 flow.|
|Create software project including hardware configuration and firmware<br /> drivers|<br /> To enable you to manage your firmware project separately from<br /> Libero’s automatically generated firmware data, the created software<br /> workspace contains two software projects:hardware\_platform contains all the firmware<br /> and hardware abstraction layers that correspond to your<br /> hardware design. This project is configured as a library and<br /> is referenced by your application project. The content of<br /> this folder is overwritten each time you export your<br /> firmware project.application produces a program and results<br /> in the binary file. It links with the<br /> hardware\_platform project. This folder<br /> does not get overwritten when you re-export your firmware.<br /> This is where you can write your own main.c<br /> and other application code, as well as add other user<br /> drivers and files. You can reference header<br /> \(\*.h\) files of any hardware peripherals<br /> in the hardware\_platform project – include<br /> paths are automatically set up for you.<br /> To build your workspace, have the hardware\_platform<br /> and application projects set to the same compile<br /> target \(Release or Debug\) and build both projects.<br /> To open your exported firmware projects, start your third-party<br /> development tool \(SoftConsole, Keil, or IAR\) outside Libero SoC and<br /> point it to the exported firmware workspace.<br />|

### TCL Command

<br />

`export_firmware \`

`-export_dir {D:\Designs\software_drivers} \`

`-create_project 1 \`

`-software_ide {Keil}`

<br />

### Version Supported

Libero SoC v11.7 and later supports the following versions of third-party development tools:

-   SoftConsole v4.0
-   SoftConsole v3.4
-   IAR EWARM
-   Keil

