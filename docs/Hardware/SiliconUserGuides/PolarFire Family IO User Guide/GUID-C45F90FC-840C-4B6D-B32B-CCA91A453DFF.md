# Cold Sparing

In cold-sparing applications, voltage can be applied to device I/Os before and during power-up. For cold-sparing applications, the device must support the following characteristics:

-   I/Os must be tri-stated before and during power-up
-   Voltage applied to an I/O must not power up any part of the device
-   Device reliability must not be compromised if voltage is applied to I/Os before or during power-up

Cold Sparing is supported with GPIO—any GPIO of an unpowered device can be safely driven with very minimal leakage current. When the device is powered OFF, both VDD and the VDDI are clamped to ground, preventing these supplies from powering up when a voltage is applied to the inputs. It is a good design practice not to rely on the outputs of an unpowered or partially powered device to drive other components in the system.

HSIO are pseudo-cold spare. It requires the spare device to have its HSIO VDDI banks powered-up to prevent I/O leakage through the ESD diodes. This is required to maintain low power and a protected state.

-   **[Hot Swap](GUID-521EF53B-080D-4CAA-9525-42C4B1908C73.md)**  


**Parent topic:**[Cold Sparing and Hot Swap](GUID-AD2B62F0-4034-4F2D-8ECF-293BAAB55E0C.md)

