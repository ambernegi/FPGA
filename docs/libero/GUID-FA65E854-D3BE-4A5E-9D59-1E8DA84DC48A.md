# Keyset File

The keyset file is used in the HSM flow only. It contains U-HSM<br /> generated keys encrypted with the Master Key of the U-HSM. New keyset files can be<br /> generated randomly by the HSM, derived from the existing keyset files, or created from<br /> the imported plain text values.

Keyset files are stored in the keyset repository, and can be shared among different Job<br /> Manager projects. The repository is configured through HSM parameters \(refer to the [FlashPro Express User Guide](http://coredocs.s3.amazonaws.com/Libero/2025_1/Tool/flashpro_express_ug.pdf)\).

Keyset files contain the following keys:

-   Ticket Key that encrypts all keys in the keyset file.
    -   Ticket Key is protected by the HSM Master Key.
    -   Keyset file contains HSM Master Key UUID to help identify the origin of the file.
-   Encryption keys: UEK1, UEK2, UEK3
-   Pass keys: UPK1, UPK2, DPK
-   Base keys for deriving per-device key values for UEK1/UEK2/UEK3/UPK1/UPK2/DPK

For more information about SPPS key management, refer to the [Secure Production Programming Solution \(SPPS\) User Guide](https://coredocs.s3.amazonaws.com/Libero/2025_1/Tool/spps_ug.pdf).

A keyset file is generated outside the Job Manager project and is associated upon<br /> creation of a new Programming Data entry \(refer to the [User HSM Installation and Setup User Guide](https://coredocs.s3.amazonaws.com/Libero/2025_1/Tool/user_hsm_ug.pdf)\).

The `create_keyset` Tcl command is used to manage keyset files. See [Tcl Interface](GUID-FD8753E1-1846-4C6B-83DC-B3A5FBD3ACFB.md#) for more<br /> information and keyset generation scenarios.

