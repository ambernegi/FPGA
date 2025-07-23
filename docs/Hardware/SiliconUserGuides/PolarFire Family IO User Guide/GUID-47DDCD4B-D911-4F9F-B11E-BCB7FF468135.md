# Power-Up and Initialization

The following table lists the I/O states during power-up and initialization modes.

|Device State|I/O State|
|------------|---------|
|Power-up start/powering up|Tristate initially and then a weak pull<br /> up is enabled.I/O buffers are disabled.Output drivers are disabled \(tri-stated\).Receivers are disabled \(input signals are not<br /> passed to the FPGA fabric\).All terminations,<br /> PCI clamp diodes, and weak pull-up/down modes are off.All I/O bank power detectors and PVT controllers<br /> are disabled.|
|User mode|The buffer is programmed based on<br /> Libero SoC I/O settings.Data and output enable<br /> signals are based on user settings.|

See the following references:

-   For more information about I/O states, see respective [PolarFire FPGA and PolarFire SoC FPGA Programming User Guide](https://ww1.microchip.com/downloads/aemDocuments/documents/FPGA/ProductDocuments/UserGuides/PolarFire_FPGA_and_PolarFire_SoC_FPGA_Programming_User_Guide_VB.pdf) or [RT PolarFire FPGA Programming User Guide](https://ww1.microchip.com/downloads/aemDocuments/documents/FPGA/ProductDocuments/UserGuides/RT_PolarFire_FPGA_Programming_User_Guide_VB.pdf).
-   For more information about I/O settings for unused I/O pins, see PPAT spreadsheets.

**Parent topic:**[I/O States During Various Operational Modes](GUID-490841F6-E3F6-4962-90B5-632852B73078.md)

