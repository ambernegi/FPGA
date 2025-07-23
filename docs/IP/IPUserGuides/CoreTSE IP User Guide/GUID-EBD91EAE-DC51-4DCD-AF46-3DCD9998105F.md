# A-MCXFIFRAMAccess2

A-MCXFIFRAMAccess2

A-MCXFIF FIFO RAM Access\* Register 2

Address Offset : 0x068

Size : 32

Access : Read/Write

Reset Value : 0x0

**Parent topic:**[Register Map and Descriptions](GUID-521EA668-4C02-4A74-927B-B4C8D92B9489.md)

## A-MCXFIFRAMAccess2

|Bit |31|30|29|28|27|26|25|24|
|----|---|---|---|---|---|---|---|---|
| |HOST TRANSMIT RAM READ REQUEST. \(HSTTRAMRREQ\)|HOST TRANSMIT RAM READ ACKNOWLEDGE \(HSTTRAMRACK\)| | | | | | |
|Access |R/W|R| | | | | | |
|Reset |0|0| | | | | | |

|Bit |23|22|21|20|19|18|17|16|
|----|---|---|---|---|---|---|---|---|
| |HOST TRANSMIT RAM READ DATA \(HSTTRAMRDAT\[39:32\]\)|
|Access |R|R|R|R|R|R|R|R|
|Reset |0|0|0|0|0|0|0|0|

|Bit |15|14|13|12|11|10|9|8|
|----|---|---|---|---|---|---|---|---|
| | | | |HOST TRANSMIT RAM READ ADDRESS \(HSTTRAMRADX\[12:0\]\)|
|Access | | | |R/W|R/W|R/W|R/W|R/W|
|Reset | | | |0|0|0|0|0|

|Bit |7|6|5|4|3|2|1|0|
|----|---|---|---|---|---|---|---|---|
| |HOST TRANSMIT RAM READ ADDRESS \(HSTTRAMRADX\[12:0\]\)|
|Access |R/W|R/W|R/W|R/W|R/W|R/W|R/W|R/W|
|Reset |0|0|0|0|0|0|0|0|

# HOST TRANSMIT RAM READ REQUEST. \(HSTTRAMRREQ\)

Bit Field Width : 1

Bit Field Offset : 31

Bit Field Access : R/W

# HOST TRANSMIT RAM READ ACKNOWLEDGE \(HSTTRAMRACK\)

Bit Field Width : 1

Bit Field Offset : 30

Bit Field Access : R

# HOST TRANSMIT RAM READ DATA \(HSTTRAMRDAT\[39:32\]\)

ValueDescriptionhsttramrdat\[39\]1/0 - Control Frame/ non control frame.hsttramrdat\[38:37\]FIFO receive Per-Packet PAD Mode.hsttramrdat\[38:37\]FIFO receive Per-Packet PAD Mode.hsttramrdat\[35\]FIFO receive Per-Packet Generate FCS.hsttramrdat\[34\]FIFO receive end of frame.hsttramrdat\[33:32\]Valid byte enables and applicable only for the last word of the frame.hsttramrdat\[33:32\] = 0Indicates all bytes in the word are valid.hsttramrdat\[33:32\] = 1Indicates the LSB 3 bytes are valid \[23:0\] bits.hsttramrdat\[33:32\] = 2Indicates the LSB 2 bytes are valid \[15:0\] bits.hsttramrdat\[33:32\] = 3Indicates the LSB 1 bytes are valid \[7:0\] bits.

Bit Field Width : 8

Bit Field Offset : 16

Bit Field Access : R

# HOST TRANSMIT RAM READ ADDRESS \(HSTTRAMRADX\[12:0\]\)

Bit Field Width : 13

Bit Field Offset : 0

Bit Field Access : R/W

