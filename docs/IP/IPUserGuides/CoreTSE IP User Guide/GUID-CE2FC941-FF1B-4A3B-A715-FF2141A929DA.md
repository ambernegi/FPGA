# Reset

Following reset is used in the IP core:

## PRESETN

Active-Low reset input. This reset is asserted asynchronously, but de-asserted synchronous<br /> to PCLK.

For all clock domains except PCLK clock domain, PRESETN reset input is synchronized to the<br /> respective clock domain and used within that clock domain.

In SmartFusion2, IGLOO2, PolarFire, and PolarFire SoC device families, reset is used as<br /> asynchronous reset. In RTG4 device family, reset is used as synchronous reset.

In RTG4 device family, all the clock inputs shall be available and stable before reset<br /> assertion. And the reset shall be asserted for atleast three clock cycles of the slowest<br /> clock used in this IP.

**Parent topic:**[Clocks and Reset](GUID-298765A9-55A5-4A53-81AB-27396F45D25E.md)

