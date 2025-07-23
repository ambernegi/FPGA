# Bit Slip

BITSLIP is used to align the de-serialized input data burst into the fabric \(called word or bit alignment\). Serial input data streams require a matching high-frequency clock \(HS\_IO\_CLK\), which is derived from the serial input signals to the FPGA inputs. Using BITSLIP allows for word framing by providing a control signal generated in the FPGA fabric and by parallel word logic running at parallel word clock rates. The Lx\_BIT\_SLIP input control is synchronized to the HS\_IO\_CLK clock allowing word framing by suppressing one HS\_IO\_CLK pulse. Assertion of the Lx\_BITSLIP control signal allows the word framing to change by only one bit position. Slipping the received data by one bit effectively shifts the word boundary by one bit and only occurs once per word. This operation happens once at initial data startup. Slip is initiated by a rising edge of the Lx\_BIT\_SLIP signal from the core fabric. It generates a single high-speed clock pulse in the bank clock \(HS\_IO\_CLK\) domain. This pulse is used for glitch less and synchronous stopping of the clock. Enabling the BITSLIP exposes the Lx\_BIT\_SLIP port that can be used to rotate the 8-bit word from the IOD to match the proper alignment of the data per lane. A typical bit slip sequence is as follows:

-   Allows bit and word alignment of data.
-   Try a slip, evaluate, and iterate until alignment is achieved.

The **Libero SoC Generic I/O Interface** configurators allow optional use of<br /> the BITSLIP function.

The bit slip function is used in one of the four ways. Following are the examples:

**DDRX2 Modes**: \(Incrementing round robin\)

It slips the word 1-bit at a time. By activating the slip function four times using rising edge of Lx\_BIT\_SLIP, every word combination can be analyzed during input training to find the required word alignment.

The first bit in the word changes with each activation of the slip pulse. \(0,1,2,3,0,1,2,….\)

\(Example:1000, 0100, 0010, 0001\)

**DDRX4 Modes**: \(scrambled, round robin\)

It slips the word to different starting positions, one at a time. By activating the slip function eight times using rising edge of Lx\_BIT\_SLIP, every word combination can be analyzed during input training to find the required word alignment.

The first bit in the word changes with each activation of the slip pulse.

As an example, starting from a word with a first bit such as 0, the pattern of slips is 0, 5, 6, 3, 4, 1, 2, 7, 0, 5,… \(-3,+1,-3,+1…\). The next slip \(-3 or +1\) is always a function of the last slip.

After an ARST\_N, the first slip always starts with a -3 slip.

\(Example of words after each slip starting after a reset: 01101000, 01000011, 10100001, 00001101, 10000110, 00110100, 00011010, 11010000\)

**DDRX5 Modes**: \(scrambled, round robin\)

It slips the word to different starting positions, one at a time. By activating the slip function 10 times using rising edge of Lx\_BIT\_SLIP, every word combination can be analyzed during input training to find the required word alignment. The first bit in the word changes with each activation of the slip pulse.

As an example, starting from a word with a first bit such as 0, the pattern of slips is 0, 7, 8, 5, 6, 3, 4, 1, 2, 9, 0, 7,... \(-3,+1,-3,+1…\) The next slip \(-3 or +1\) is always a function of the last slip.

After an IOD reset, the first slip always starts with a -3 slip.

\(example of words after each slip starting after a reset: 0111110000, 1110000011, 1111000001, 100001111, 1100000111, 0000111110, 0000011111, 0011111000, 0001111100, 1111100000\)

**DDRX3.5** does not include the Lx\_BIT\_SLIP capability. Word alignment must be accomplished using FPGA hosted IP.

**Parent topic:**[I/O Clock Networks](GUID-977E0649-932F-443C-867E-A85343F2F11B.md)

