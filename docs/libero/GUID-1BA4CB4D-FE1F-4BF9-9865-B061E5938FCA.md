# Overview

While Libero SoC provides a fully integrated end-to-end design environment to develop SoC<br /> and FPGA designs, it also provides the flexibility to run synthesis and simulation with<br /> third-party tools outside the Libero SoC environment. However, some design steps must<br /> remain within the Libero SoC environment.

The following table lists the major steps in the FPGA design flow and indicates the steps<br /> for which Libero SoC must be used.

|Design Flow Step|Must Use Libero|Description|
|----------------|---------------|-----------|
|Design Entry: HDL|No|Use third-party HDL editor/checker tool outside Libero® SoC if desired.|
|Design Entry: Configurators|Yes|Create first Libero project for IP catalog core<br /> component generation.|
|Automatic PDC/SDC constraint generation|No|<br /> Derived constraints need all HDL files and a derive\_constraints<br /> utility when performed outside of Libero SoC, as described in<br /> Appendix C—Derive Constraints.<br />|
|Simulation|No|Use third-party tool outside Libero SoC,<br /> ifdesired. Requires download of pre-compiled simulation<br /> libraries for target device, target simulator, and target Libero<br /> version used for backend implementation.|
|Synthesis|No|Use third-party tool outside Libero SoC if<br /> desired.|
|Design Implementation: Manage Constraints, Compile<br /> Netlist, Place-and-Route \(see [Overview](GUID-1BA4CB4D-FE1F-4BF9-9865-B061E5938FCA.md#)\)|Yes|Create second Libero project for the backend<br /> implementation.|
|Timing and Power Verification|Yes|Stay in second Libero project.|
|Configure Design Initialization Data and<br /> Memories|Yes|Use this tool to manage different types of memories<br /> and design initialization in the device. Stay in second<br /> project.|
|Programming File Generation|Yes|Stay in second project.|

**Important:** You must download precompiled libraries available at the [Pre-Compiled Simulation Libraries](https://www.microchip.com/en-us/products/fpgas-and-plds/fpga-and-soc-design-tools/pre-compiled-simulation-libraries) page to use a third-party simulator.

In a pure Fabric FPGA flow, enter your design using HDL or schematic entry and pass that<br /> directly to the synthesis tools. The flow is still supported. PolarFire and PolarFire<br /> SoC FPGAs have significant proprietary hard IP blocks requiring the use of configuration<br /> cores \(SgCores\) from the Libero SoC IP catalog. Special handling is required for any<br /> blocks that comprise SoC functionality:

-   PolarFire

    -   PF\_UPROM
    -   PF\_SYSTEM\_SERVICES
    -   PF\_CCC
    -   PF CLK DIV
    -   PF\_CRYPTO
    -   PF\_DRI
    -   PF\_INIT\_MONITOR
    -   PF\_NGMUX
    -   PF\_OSC
    -   RAMs \(TPSRAM, DPSRAM, URAM\)
    -   PF\_SRAM\_AHBL\_AXI
    -   PF\_XCVR\_ERM
    -   PF\_XCVR\_REF\_CLK
    -   PF\_TX\_PLL
    -   PF\_PCIE
    -   PF\_IO
    -   PF\_IOD\_CDR
    -   PF\_IOD\_CDR\_CCC
    -   PF\_IOD\_GENERIC\_RX
    -   PF\_IOD\_GENERIC\_TX
    -   PF\_IOD\_GENERIC\_TX\_CCC
    -   PF\_RGMII\_TO\_GMII
    -   PF\_IOD\_OCTAL\_DDR
    -   PF\_DDR3
    -   PF\_DDR4
    -   PF\_LPDDR3
    -   PF\_QDR
    -   PF\_CORESMARTBERT
    -   PF\_TAMPER
    -   PF\_TVS, and so on.
    In addition to the preceding listed SgCores, there are many DirectCore<br /> soft IPs available for PolarFire and PolarFire SoC device families in the<br /> Libero SoC Catalog that use the FPGA fabric resources.

    For design entry, if you use any one of the preceding components, you must use Libero SoC for part of the design entry \([Component Configuration](GUID-FE19AAE3-578B-4B77-857E-C2796C8240F2.md)\), but you can continue the rest of your Design Entry \(HDL entry, and so on\) outside of Libero. To manage the FPGA design flow outside of Libero, follow the steps provided in the rest of this guide.


-   **[Component Life Cycle](GUID-629C079A-798B-4DCE-A6D0-6DAB11116E13.md)**  

-   **[Libero SoC Project Creation](GUID-718017DD-BDB6-43D9-9F5E-4CE5B16FAAEF.md)**  

-   **[Custom Flow](GUID-63C667EB-C47A-4396-AEF9-E2849595AD73.md)**  


