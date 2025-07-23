# Implementing Emulated Standards for Outputs

External terminations are required to implement SLVSE, BLVDSE, MLVDSE, and LVPECLE output modes. These outputs, referred to as emulated differential outputs, are noted in [Table   1](GUID-F70058C5-84DC-4CC4-970B-ACE6DD487352.md#ID-0000229D).

Emulated differential standards use compensated push-pull drivers in<br /> complementary output mode and require external terminations on the board to match the<br /> common-mode and voltage swing to meet the I/O signal standards. PCB design practices<br /> must account for the effective impedance of the entire connection including the bus<br /> trace characteristic impedance Zo and the capacitive loading. This section provides<br /> example implementations for the emulated standards.

-   **[Scalable Low-Voltage Signaling Emulated \(SLVSE15\) Output Mode](GUID-D8F23F3F-9899-455D-BCEC-B423A3A232E8.md)**  

-   **[Bus-LVDS Emulated \(BLVDSE25\) Output Mode](GUID-0C6DCA5B-07EE-41AE-9CB6-2421990C0215.md)**  

-   **[Multipoint Low-Voltage Emulated \(MLVDSE25\) Output Mode](GUID-9F29F5C6-F007-445B-A938-C7975F9C9A08.md)**  

-   **[LVPECL Emulated \(LVPECLE33\) Output Mode](GUID-5F113C5B-E110-4E85-BB95-0DEACB6E53F3.md)**  


**Parent topic:**[I/O Implementation Considerations](GUID-984E4773-788B-43B2-8E99-D0C476AC29DD.md)

