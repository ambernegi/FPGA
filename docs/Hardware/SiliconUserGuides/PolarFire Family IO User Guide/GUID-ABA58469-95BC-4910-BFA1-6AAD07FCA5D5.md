# Interface Ports

The following table lists the port names and description of fractional aligned interface mode.

|Port|I/O|Description|
|----|---|-----------|
|RX|Input|Input DDR data. Supports up to 11 bits wide and all bits must fit within a lane.|
|RX\_CLK|Input|Input DDR clock.|
|ARST\_N|Input|Asynchronous reset to IOD and lane<br /> controller. ARST\_N inputs are independent asynchronous resets to both the Rx<br /> and Tx IOD blocks. It holds associated interface PLLs in power-down. Asserting<br /> ARST\_N to the TX/RX IODs also resets any updated delay values set by dynamic<br /> training and reverts to the initial static delays set by the Libero SoC. ARST\_N<br /> does not reset any static clock training values.|
|HS\_IO\_CLK\_PAUSE|Input|Toggling the HS\_IO\_PAUSE:– Resets the IOD RX state machines. This reset re-synchronizes pattern to<br /> HS\_IO\_CLK \(bank clock\) and RXCLK.– Resets any<br /> adjustment done through SLIP operation.– Resets the<br /> IOD Tx state machines. This reset synchronizes HS\_IO\_CLK and TXCLK.–<br /> HS\_IO\_PAUSE does not disrupt delay line value settings.|
|L\#\_RX\_DATA\[m:0\]|Output|DDR output to FPGA fabric. ‘m’ equals the output pins from the geared DDR component to the fabric where the even numbered pin is the rising edge data and the odd numbered pin is the falling edge data of the DDR signal. The number of fabric pins are based on the number of I/Os and the gearing ratio. L\# is associated with the \# of external input pins up to 128 maximum.|
|RX\_CLK\_R/RX\_CLK\_G|Output|Receive clock to FPGA fabric using a global \(G\) or regional \(R\) clock.|
|PLL\_LOCK|Output|Lock status of the included PLL used in clock path.|
|CLK\_TRAIN\_DONE|Output|Indicates HS\_IO\_CLK and system clock training is complete. See [HS\_IO\_CLK and System Clock Training](GUID-189BB03C-9B39-4920-A246-87AA79EAB04F.md).|

**Parent topic:**[RX\_DDR Fractional Aligned/Fractional Dynamic Interfaces](GUID-EA8EA594-6224-417D-BF62-A1120CC5854F.md)

