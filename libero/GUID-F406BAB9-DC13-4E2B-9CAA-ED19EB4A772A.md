# configure\_design\_initialization\_data

## Description

This Tcl command sets the parameter values needed for generating initialization data.

```
configure_design_initialization_data \
    [-second_stage_start_address {sNVM address for the second initialization client}] \
    [-third_stage_uprom_start_address {uPROM address for the third initialization stage client}] \
    [-third_stage_spi_start_address {SPI address for the third initialization stage client}] \
    [-third_stage_snvm_start_address {sNVM address for the third initialization stage client}] \
    [-third_stage_spi_type {SPIFLASH_NO_BINDING_PLAINTEXT | SPIFLASH_BINDING_DEFAULT | SPIFLASH_BINDING_UEK1 | SPIFLASH_BINDING_UEK2}] \
    [-third_stage_spi_clock_divider {1 | 2 | 4 | 6}] \
    [-init_timeout {int between 1 and 128 seconds}] \
    [-auto_calib_timeout {Auto Calibration timeout value in milliseconds}] \
    [-broadcast_RAMs {0 | 1}] \
    [-custom_cfg_file {Initialization file for custom configuration}]
```

## Arguments

<table id="GUID-707DC1EC-E26B-406C-981C-FB2DA989269D"><thead><tr><th>

Parameter

</th><th>

Type

</th><th>

Description

</th></tr></thead><tbody><tr><td>

second\_stage\_start\_address

</td><td>

string

</td><td>

String parameter for the start address of the second stage initialization client. Specified as a 32-bit hexadecimal string. The first stage client is always placed in sNVM, so it must be a valid sNVM address aligned on a page boundary. There are 221 sNVM pages and each page is 256 bytes long, so the address will be between 0 and DC00. **Note:** Although the actual size of each page is 256 bytes, only 252 bytes are available to the user. The first stage initialization client is always added to SNVM at 0xDC00 \(page 220\). So the valid addresses for the second stage initialization client are 0x0 \(page 0\) to 0xDB00 \(page 219\).

</td></tr><tr><td>

third\_stage\_uprom\_start\_address

</td><td>

string

</td><td>

String parameter for the uPROM start address of the third stage initialization client. This parameter is optional. Specified as a 32-bit hexadecimal string and must be valid uPROM address aligned on a block boundary.

</td></tr><tr><td>

third\_stage\_spi\_start\_address

</td><td>

string

</td><td>

String parameter for the sNVM start address of the third stage initialization client. This parameter is optional. Specified as a 32-bit hexadecimal string and must be valid sNVM address.

</td></tr><tr><td>

third\_stage\_snvm\_start\_address

</td><td>

string

</td><td>

String parameter for the SPIFLASH start address of the third stage initialization client. This parameter is optional. Specified as a32-bit hexadecimal string and must be valid SPIFLASH address.

</td></tr><tr><td>

third\_stage\_spi\_type

</td><td>

string

</td><td>

The value must be one of SPIFLASH\_NO\_BINDING\_PLAINTEXT or SPIFLASH\_BINDING\_DEFAULT or SPIFLASH\_BINDING\_UEK1 or SPIFLASH\_BINDING\_UEK2. This parameter determines the valid value for parameter ‘third\_stage\_start\_address’.

</td></tr><tr><td>

third\_stage\_spi\_clock\_divider

</td><td>

integer

</td><td>

Specifies the clock frequency appropriate for the SPIFLASH memory on board. The value can be 1, 2, 4, or 6. The default value is 1 which is 80 MHz. The other values are 2-40 MHz, 4-20 MHz and 6-13.33 Mhz.

</td></tr><tr><td>

init\_timeout

</td><td>

integer

</td><td>

Timeout value in seconds. Initialization is aborted if it does not complete before timeout expires. The value can be between 1 and 128. The default value is 128.

</td></tr><tr><td>

auto\_calib\_timeout

</td><td>

integer

</td><td>

The Auto Calibration Time Out value specifies the time out before which the IO Calibration instructions must be completed. The default value is 3000 milliseconds. This time out value is applicable only for MPF100T, MPF200T, MPF300T and MPF500T devices.

</td></tr><tr><td>

broadcast\_RAMs

</td><td>

boolean

</td><td>

Specifies broadcast instructions to initialize RAM's to zero's. Value can be either 0 or 1. This parameter is optional.

</td></tr><tr><td>

custom\_cfg\_file

</td><td>

string

</td><td>

Specifies the initialization file for custom configuration. This parameter is optional.

</td></tr></tbody>
</table>|Return Type|Description|
|-----------|-----------|
|None|None|

## Error Codes

|Error Code|Description|
|----------|-----------|
|None|Parameter 'broadcast\_RAMs' has illegal value.|
|None|Invalid value for parameter 'Auto Calibration Timeout'.|
|None|Parameter 'auto\_calib\_timeout' has illegal value.|
|None|init\_timeout: Invalid argument value: '85,5' \(expecting integer value\).|
|None|Parameter 'init\_timeout' must be greater than or equal to 1.|
|None|Parameter 'init\_timeout' must be less than or equal to 128.|
|None|Parameter 'init\_timeout' has illegal value.|
|None|third\_stage\_spi\_clock\_divider: Invalid argument value: 'value' \(expecting 1, 2, 4 or 6\).|
|None|Parameter 'third\_stage\_spi\_clock\_divider' has illegal value.|
|None|third\_stage\_spi\_type: Invalid argument value: 'value' \(expecting SPIFLASH\_NO\_BINDING\_PLAINTEXT, SPIFLASH\_BINDING\_DEFAULT, SPIFLASH\_BINDING\_UEK1 or SPIFLASH\_BINDING\_UEK2\).|
|None|Parameter 'third\_stage\_spi\_type' has illegal value.|
|None|Invalid value for parameter 'SPI\_third\_stage\_start\_address'. Address must be a valid 32-bit hexadecimal string.|
|None|Parameter 'third\_stage\_spi\_start\_address' has illegal value.|
|None|Invalid value for parameter 'sNVM\_third\_stage\_start\_address'. Address must be a valid 32-bit hexadecimal string.|
|None|Parameter 'third\_stage\_snvm\_start\_address' has illegal value.|
|None|Invalid value for parameter 'uPROM\_third\_stage\_start\_address'. Address must be a valid 32-bit hexadecimal string.|
|None|Parameter 'third\_stage\_uprom\_start\_address' has illegal value.|
|None|Invalid value for parameter 'second\_stage\_start\_address'. Address must be a valid 32-bit hexadecimal string.|
|None|Parameter 'second\_stage\_start\_address' has illegal value.|
|None|Invalid custom configuration file: value.|
|None|Parameter 'custom\_cfg\_file' has illegal value.|
|None|Parameter 'param\_name' is not defined. Valid command formatting is 'configure\_design\_initialization\_data \\ \[-second\_stage\_start\_address "sNVM address for the second initialization stage client"\] \\ \[-third\_stage\_uprom\_start\_address "uPROM address for the third initialization stage client"\] \\ \[-third\_stage\_snvm\_start\_address "sNVM address for the third initialization stage client"\] \\ \[-third\_stage\_spi\_start\_address "SPI address for the third initialization stage client"\] \\ \[-third\_stage\_spi\_type "SPIFLASH\_NO\_BINDING\_PLAINTEXT \| SPIFLASH\_BINDING\_DEFAULT \| SPIFLASH\_BINDING\_UEK1 \| SPIFLASH\_BINDING\_UEK2"\] \\ \[-third\_stage\_spi\_clock\_divider "1 \| 2 \| 4 \| 6"\] \\ \[-init\_timeout "integer value"\] \\ \[-auto\_calib\_timeout "Auto Calibration timeout value in seconds"\] \\ \[-custom\_cfg\_file "Initialization file for custom configuration"\] \\ \[-broadcast\_RAMs "broadcast option to initialize RAMs to zeros"\]'.|

## Supported Families

<table id="GUID-90BF5296-51AF-425D-9B74-6F7BD2F12832"><tbody><tr><td>

PolarFire®

</td></tr><tr><td>

PolarFire SoC

</td></tr></tbody>
</table>## Example

This example initializes data with sNVM client.

```
configure_design_initialization_data \
            -second_stage_start_address {0x0000aa00} \
            -third_stage_uprom_start_address {0x00000000} \
            -third_stage_snvm_start_address {0x0000aa00} \
            -third_stage_spi_start_address {0x00000400} \
            -third_stage_spi_type {SPIFLASH_NO_BINDING_PLAINTEXT} \
            -third_stage_spi_clock_divider {4} \
            -init_timeout 85 \
            -auto_calib_timeout {1400} \
            -broadcast_RAMs {0}
```

This example initializes data with uPROM client.

```
configure_design_initialization_data \
            -second_stage_start_address {0x00000000} \
            -third_stage_uprom_start_address {0xfffffee2} \
            -third_stage_snvm_start_address {0x00000000} \
            -third_stage_spi_start_address {0x00000400} \
            -third_stage_spi_type {SPIFLASH_NO_BINDING_PLAINTEXT} \
            -third_stage_spi_clock_divider {4} \
            -init_timeout 45 \
            -auto_calib_timeout {2000} \
            -broadcast_RAMs {0}
```

This example initializes data with SPI-FLASH client.

```
configure_design_initialization_data \
            -second_stage_start_address {0x00000000} \
            -third_stage_uprom_start_address {0x00000000} \
            -third_stage_snvm_start_address {0x00000000} \
            -third_stage_spi_start_address {0x000AC120}
            -third_stage_spi_type {SPIFLASH_BINDING_UEK2} \
            -third_stage_spi_clock_divider {2} \
            -init_timeout 20 \
            -auto_calib_timeout {500} \
            -broadcast_RAMs {1}
```

**Parent topic:**[Programming and Configuration Tcl Commands](GUID-B021E93C-650D-42F1-B90A-AE43EE93E641.md)

