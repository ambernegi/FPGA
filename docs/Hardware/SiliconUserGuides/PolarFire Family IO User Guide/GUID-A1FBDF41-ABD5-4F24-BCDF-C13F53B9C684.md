# ICB-Based Fine Training Method

The programmable tap delay line is used to modify the delay values by using the fabric interface signals provided in the ICB interface to perform the fine clock training. This training uses the MOV, LOAD, and DIR of the ICB block to move the BCLK in reference to SCLK. This solution uses one spare IOD RX gearbox that uses SCLK as the data pin and BCLK90 as the clock pin. This training is used to control the timing relationships between SCLK and BCLK90 for both RX and TX domains. This is required to reliably and deterministically transfer data across the IO Gearing to the fabric interface. The objective is to set BCLK90 to follow SCLK by 90 degrees to define a known clock domain relationship. The retraining is done based on early late assertion in the IOD. HS\_IO\_CLK\_PAUSE to the IOD is asserted at the end of the clock training routine.

**Parent topic:**[CoreBclkSclkAlign Training IP](GUID-9429F651-4C5C-416C-9BC8-002896701DED.md)

