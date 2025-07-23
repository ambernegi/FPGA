# Memory Controller Training

This training is specific to the FPGA memory controller interface synchronization to the external memory devices. This phase of calibration is specific to optimizing the bandwidth performance between an FPA hosted memory controller and an external DRAM memory. This is separate from the FPGA device I/O calibration. The memory calibration of the memory interface paths is controlled and managed by memory controller IP, which uses the DYNAMIC I/O training elements and the device I/O calibration. The FPGA device completes the device I/O calibration on power-up before moving into the memory calibration phase.

The memory controller IP is responsible for calibration of write-leveling chains and programmable<br /> output delay chain to align the DQS edge with the CK edge at memory to meet the tDQSS,<br /> tDSS, and tDSH specifications. For more information about memory calibration operations,<br /> see the Training Logic chapter of [PolarFire Family Memory Controller User Guide](https://ww1.microchip.com/downloads/aemDocuments/documents/FPGA/ProductDocuments/UserGuides/PolarFire_FPGA_PolarFire_SoC_FPGA_Memory_Controller_User_Guide_VB.pdf).

**Parent topic:**[I/O Initialization](GUID-5ABE88CD-2F50-491C-A28E-F2CE4C4B7AE4.md)

