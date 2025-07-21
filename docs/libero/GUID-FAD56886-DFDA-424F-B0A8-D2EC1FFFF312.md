# TX\_PLL

Stands for Transmit Phase-Locked Loop or Transmit PLL. Two variations of the TxPLLs embedded within the transceiver lanes are available based on protocol requirements. Both TxPLLs use ring VCO-based PLLs. Using a combination of TxPLL ranges and post-dividers produces frequencies across the entire supported range of the device. The TxPLLs includes the following types:

1.  **TXPLL\_SSC**: TxPLL with spread-spectrum generation \(SSCG\) modulation capabilities.
2.  **TXPLL**: TxPLL without SSCG modulation capabilities.

Both varieties of TxPLLs employ the same half-rate fractional-N type \(Frac-N\) architectural design, which reduces the phase detector and frequency dividers' speed requirements. As a result, the VCO tuning range is expanded and phase noise performance is improved, all while having a substantial influence on the total power. The transmit PLL phase detector provides a valid output while driving a full-rate random data stream on both edges using the half-rate clock.

All transmit PLLs support a jitter-attenuator option. The jitter attenuator is used to track the data-rate of any noisy reference clock with a clean input reference clock to provide a 0 ppm offset from the noisy reference clock while providing a jitter-cleaned output. Each transceiver lane can select a transmit clock from the transmit PLLs that are close enough to drive their half rate clock. The PLL uses the input reference clock to generate a serial bit clock \(at half the rate\). The transmit PLL detects and signals a loss of lock in the event that the reference clock stops toggling or when the reference clock transitions to an incorrect frequency. There are also instances that include additional transmit PLLs, which can be used by the local transceiver quad and in a subset of lanes of adjacent quads. The output frequency of each transmit PLL is derived automatically from the reference clock frequency and the settings for the PLL multipliers. Each transmit lane can then divide this base transmit PLL rate per lane using the post-divider by 1, 2, 4, 8, or 11. The resulting frequency is half the bit rate based on the transmit half-rate architecture.

**Example:** A 2.5 GHz clock is used for a 5 Gb/s transmit transceiver line rate. The programmable multipliers are defined and programmed by the Libero transceiver interface configurator as per the desired protocol. In addition, the transmit PLL can also provide the system clock for the FPGA logic.

