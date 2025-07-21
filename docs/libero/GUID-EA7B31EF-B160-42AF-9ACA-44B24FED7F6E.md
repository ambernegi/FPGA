# Secure Initial Key Loading

Secure Initial Key Loading allows the programming security settings, such as encryption keys,<br /> pass keys, and security locks, into a blank device under protection of the unique<br /> per-device factory key programmed into every SmartFusion 2, IGLOO 2, PolarFire, and<br /> PolarFire SoC device. This is achieved using the Authorization Code Protocol \(see [Authorization Code Protocol](GUID-809EB1AF-697B-4466-8EE8-D38CDD3EBC10.md#)\) built into Microchip SmartFusion 2, IGLOO 2,<br /> PolarFire, and PolarFire SoC devices. For execution during device programming, the<br /> Authorization Code Protocol requires the support of a Hardware Security Module \(HSM\).<br /> See [HSM Hardware Modules used by SPPS](GUID-9B2AD506-2924-445F-9207-5C672A750DDB.md#) for more information about HSMs.

Secure Initial Key Loading provides strong cryptographic protection of the user design and<br /> security settings programmed into a blank device. Programming of user defined security<br /> settings disables the factory default key modes, allowing users to access the programmed<br /> device. No one, including the Microchip personnel, can gain access to the device without<br /> the proper security credentials, if the factory test mode is protected by user security<br /> settings.

**Note:** The user must select the “Protect factory test mode access using FlashLock/UPK1" or "Permanently protect factory test mode access" in the Security Policy Manager \(SPM\).

