# Simulation Model Enhancements

The Libero SoC 2025.1 release has the following updates and enhancements to PolarFire<br /> Simulation models and addresses a few bugs in simulations:

-   LSRAM ECC error injection: The PF\_TPSRAM configurator now supports ECC error injection during pre-synthesis simulation by setting a defined mask address, as described in the [PolarFire Family Fabric User Guide](https://ww1.microchip.com/downloads/aemDocuments/documents/FPGA/ProductDocuments/UserGuides/PolarFire_FPGA_PolarFire_SoC_FPGA_Fabric_UG_VD.pdf).
-   PF\_IOD\_GENERIC\_RX: Simulation of L0\_LP\_DATA and L0\_LP\_DATA\_N at high-speed data transition
-   PF\_IOD\_TX\_CCC: Updated 3.5 clock ratio
-   Added post-layout simulation for I/O registers with SDF
-   IOREG BA Simulation Support for inverted clocks with Neg edge register values

**Parent topic:**[PolarFire, PolarFire SoC, RT PolarFire, and RT PolarFire SoC](GUID-C2FC30EF-8572-4D99-89A2-E30EB18E171D.md)

