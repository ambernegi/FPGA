# Introduction

PolarFire® FPGA Block Flow is a bottom-up design methodology that enables<br /> you to use design blocks \(components\) as building blocks for your top-level designs.<br /> These building blocks might have already completed layout, and been optimized for timing<br /> and power performance for a specific Microchip device. Using these blocks in the<br /> top-level designs can reduce design time and improve timing and power performance.

Block offers unique advantages that allow you to:

-   Focus on the timing of primary blocks and ensure that timing requirements are met across these blocks before integrating with top-level blocks.
-   Re-use the block without reoptimizing for timing closure to ensure that changes in other blocks do not impact your block.

-   Re-use a block in multiple designs.
-   Reduce the verification time by re-verifying the updated part of the design only.

## Supported Device Families

The following table lists the family of devices that Libero® SoC supports. This guide covers all these device families. However, some information in this guide might apply to certain device families only. In this case, such information is clearly identified.

<br />

|Device Family|Description|
|-------------|-----------|
|[PolarFire®](https://www.microsemi.com/products/fpga-soc/fpga/polarfire-fpga)|PolarFire FPGAs deliver the industry’s lowest power at mid-range densities<br /> with exceptional security and reliability.|
|[PolarFire SoC](https://www.microsemi.com/product-directory/soc-fpgas/5498-polarfire-soc-fpga)|PolarFire SoC is the first SoC FPGA with a deterministic, coherent RISC-V CPU<br /> cluster, and a deterministic L2 memory subsystem enabling Linux and real-time<br /> applications.|
|[SmartFusion®2](https://www.microsemi.com/product-directory/soc-fpgas/1692-smartfusion2#overview)|SmartFusion2 addresses fundamental requirements for advanced security, high<br /> reliability, and low power in critical industrial, military, aviation,<br /> communications, and medical applications.|
|[IGLOO®2](http://www.microsemi.com/products/fpga-soc/fpga/igloo2-fpga#overview)|IGLOO2 is a low-power mixed-signal programmable solution.|
|[RTG4™](http://www.microsemi.com/products/fpga-soc/radtolerant-fpgas/rtg4#overview)|RTG4 is Microchip's family of radiation-tolerant FPGAs.|

<br />

