# Bitstream Initialization

Bitstream initialization allows the user to setup bit stream generation parameters for use<br /> during:

-   HSM job export
-   Non-HSM job export
-   Export of a programming bit stream in non-HSM flow

The bit stream can be initialized for use in the HSM programming flow and non-HSM programming<br /> flow. For use model details about HSM and non-HSM bitstreams, refer to the [Secure Production Programming Solution \(SPPS\) User Guide](https://coredocs.s3.amazonaws.com/Libero/2025_1/Tool/spps_ug.pdf).

Programming Data can have one or more bit stream entries that can be used by the same or<br /> different programing jobs.

Bitstream initialization is done with the `init_bitstream` Tcl command.

**Parent topic:**[Programming Data](GUID-F98BC431-42AB-4FCC-9C8C-004277BF6E90.md)

**Related Links**  


[Create Programming Data from JDC File](GUID-852738E6-4892-4117-AC31-929F16423144.md)

[eNVM and sNVM Update](GUID-8FD59B61-D4B8-44D0-B875-C513C3C59040.md)

[Key Overwrite \(Non-HSM Flow\)](GUID-B2F59F83-912F-4ABB-8F5F-1A5D51968ADD.md)

[Security Overwrite](GUID-2B5A7D4B-567C-41A1-AB23-3D965548F07F.md)

## HSM Flow

The following sections describe how to initialize and use programming bitstreams for various situations in the HSM flow. Because all keys in the HSM flow are protected by the HSM, the U-HSM must generate bitstreams for all cases described below.

**​Initiater Bitstream**

The ​Initiater bit stream in HSM is designed to program initial security and all other<br /> user-selected device features in an untrusted environment. Secure key loading is<br /> achieved using the device-supported Authorization Code protocol. Refer to the [Secure Production Programming Solution \(SPPS\) User Guide](https://coredocs.s3.amazonaws.com/Libero/2025_1/Tool/spps_ug.pdf) for more information.

The ​Initiater bit stream can be generated to program project or per-device UEK1/UPK1/UEK2/UPK2/<br /> UEK3/DPK values.

Project keys are inserted into the bit stream from the keyset file upon bit stream<br /> generation.

Per-device keys are generated and infused into the programming bit stream by the M-HSM during<br /> device programming. Per-device key value is derived from respective base keys in the<br /> keyset file and device device serial number \(DSN\). Per-device protocol and key types are<br /> specified with the `init_bitstream Tcl` command parameters.

The ​Initiater bit stream programs security settings imported into Programming Data from Libero<br /> or according to SPM overwrite, if any.

<br />

**Important:** Due to security policy, after the initial key loading, programming actions such as ERASE and VERIFY require HSM support to unlock device security.

<br />

**Warning:** Security settings programmed into the device can only be changed with the ERASE action. The ERASE action does not erase content of the eNVM or sNVM. eNVM and sNVM memory is fully accessible after security settings have been erased.

**UEK1/UEK2/UEK3 Update Bitstream**

This type of bit stream is used for reprogramming Fabric and/or eNVM/sNVM depending on device<br /> type. The security component cannot be reprogrammed with this file type. This bit stream<br /> can be used if the device already has security programmed.

**UEK1/UEK2/UEK3 Project Keys, No Security Lock**

In this case, all devices in the project have the same UEK1, UEK2, or UEK3 values, and target<br /> device feature programming is allowed without FlashLock/UPK1 match. The Job Manager can<br /> generate a stand-alone programming file or a non-HSM programming job that does not<br /> require the M-HSM during programming.

**UEK1/UEK2/UEK3 Project Keys, Security Locked**

If the target device feature programming is locked, the M-HSM must perform a secured unlock of<br /> the device, because the plain text value of the lock key cannot be used in an untrusted<br /> environment. This type of bit stream can be used in an HSM programming job. UPK1 unlock<br /> is performed securely via the OTPK protocol. For more information, refer to the [Secure Production Programming Solution \(SPPS\) User Guide](https://coredocs.s3.amazonaws.com/Libero/2025_1/Tool/spps_ug.pdf).

**UEK1/UEK2/UEK3 Per-Device Keys, No Security Locks, DSN is Known**

If UEK1, UEK2, or UEK3 are per-device keys, target features are not locked, and DSN for the<br /> target device\(s\) is known, the user has an option to generate a device-specific<br /> programming bit stream that does not require the M-HSM during production. The bit stream<br /> can be exported as a stand-alone bit stream file or a non-HSM programming job. In either<br /> case, DSN must be provided in the `export_bitstream` Tcl command during<br /> bit stream file generation or in the `add_microsemi_device` Tcl command<br /> that adds target devices to the chain inside the programming job.

**UEK1/UEK2/UEK3 Per-Device, All Other Cases**

For all other cases related to per-device UEK1/UEK2/UEK3, the M-HSM and HSM programming job must<br /> be used. If target device features are locked by per-device UPK1, UPK1 unlock is<br /> performed securely via the OTPK protocol. For more information, refer to the [Secure Production Programming Solution \(SPPS\) User Guide](https://coredocs.s3.amazonaws.com/Libero/2025_1/Tool/spps_ug.pdf).

## Non-HSM Flow

In non-HSM flow, the keyset file is not used. All key values are used from the Libero design security setting. There are two mechanisms to overwrite the user-defined design security keys \(UPK1, UPK2, UEK1, UEK2, UEK3, and DPK\):

1.  Security Overwrite—The security setting and key values set supersede the original Libero settings.
2.  Key Overwrite—The key values set supersede both the Libero and Security Overwrite setting.

The following sections describe non-HSM bitstream types that can be generated for production programming in a trusted environment.

**Trusted Facility Bitstream**

This bitstream type can program Fabric, eNVM, and non-authenticated plain text sNVM clients. The entire bitstream is encrypted with the KLK encryption key.

**Master Bitstream**

Similar to Trusted Facility, but also programs security and supports all types of sNVM clients.<br /> After custom security is programmed, all Microchip factory default key modes, including<br /> KLK, DFK, KFP, and KFPE key modes as well as User ECC keys \(KUP and KUPE\), become<br /> disabled.

**Note:** Per security policy, programming of UEK1 or UEK2 will program the UPK1 or UPK2 passkeys, respectively, and lock the security segment. As a result, the ERASE and VERIFY actions in generated bitstream files or programming jobs will contain plain text UPK1/UPK2 values. This is required to unlock security segments for the programming actions when using the non-HSM flow \(the HSM-based flow uses encrypted one-time passcodes\).

**UEK1/UEK2/UEK3 Update Bitstream**

This bitstream type can reprogram Fabric and/or eNVM/sNVM device features. If the target device programming is protected by FlashLock/UPK1, plain text values of UPK1 are included in the exported bitstream file/programming job. when using the non-HSM flow.

## Export Programming Bitstream File

Export of the programming bitstream file is available in non-HSM flow only. Export is handled by<br /> the<br /> `export_bitstream_file`<br /> Tcl command and can be performed in all supported programming file types.

Specifying the optional DSN parameter is applicable only for situations explained in the [Non-HSM Flow](GUID-AC75F06B-DF1E-4A82-B3BF-C36BE474B68A.md#) section. The exported bitstream file is created in a<br /> user-specified location.

**Important:** Job files designed for SmartFusion® 2, IGLOO® 2, and PolarFire® devices, from the latest versions of Libero, are compatible with HSM Server v12.6.

