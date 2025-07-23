# Configuration Settings

The register transfer level \(RTL\) code for CoreTSE has parameters for<br /> configuring the core. While working with the core in the SmartDesign tool, a configuration GUI<br /> is used to set the values of these parameters. CoreTSE parameters are described in the<br /> following table.

<table id="TABLE_FKF_F2K_ZRB"><thead><tr><th>

Name

</th><th>

Valid Range

</th><th>

Default

</th><th>

Description

</th></tr></thead><tbody><tr><td>

GMII\_TBI

</td><td>

0 or 1

</td><td>

0

</td><td>

<br /> -   0: G/MII is Active
-   1: SGMII/TBI is Active

<br />

</td></tr><tr><td>

PACKET\_SIZE

</td><td>

256 Bytes to 32 KB

</td><td>

8KB

</td><td>

PACKET\_SIZE parameter in the design is transmit FIFO address<br /> width and supported PACKET\_SIZE choices are:-   256 Bytes
-   512 Bytes
-   1 KB
-   2 KB
-   4 KB
-   8 KB
-   16 KB
-   32 KB

</td></tr><tr><td>

SAL

</td><td>

0 or 1

</td><td>

1

</td><td>

Include Station Address filtering Logic \(SAL\):-   0: Disable
-   1: Enable

</td></tr><tr><td>

WoL

</td><td>

0 or 1

</td><td>

1

</td><td>

Include Wake on LAN \(WoL\) detection logic [1](#NOTE1):-   0: Disable
-   1: Enable

</td></tr><tr><td>

STATS

</td><td>

0 or 1

</td><td>

1

</td><td>

Include Statistics counters logic:-   0: Disable
-   1: Enable

</td></tr><tr><td>

MDIO\_PHYID

</td><td>

0 to 31

</td><td>

18

</td><td>

MDIO Physical Address, it is an integer value [2](#NOTE2).

</td></tr><tr><td>

SLIP\_ENABLE

</td><td>

0 or 1

</td><td>

0

</td><td>

Include receive slip logic [3](#NOTE3) and [4](#NOTE4):-   0: Disable
-   1: Enable

</td></tr></tbody>
</table>**Important:**

1.  Supports Wake on LAN using AMD’s Magic Packet™ Detection technology.
2.  This parameter is available for configuration only when GMII\_TBI parameter is set to 1 \(TBI mode\).
3.  This parameter is available for configuration only in PolarFire® and PolarFire SoC device families and when GMII\_TBI parameter is set to 1 \(TBI mode\).
4.  This parameter should be enabled only if CDR Bit-Slip port is enabled in Transceiver.

**Parent topic:**[CoreTSE Parameters and Interface Signals](GUID-9AF0BD00-B45D-4AEF-9E8D-6EFB40B95C89.md)

