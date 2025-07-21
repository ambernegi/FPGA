# Derive Constraints Tcl Commands

The `derive_constraints` utility helps you derive constraints from the RTL<br /> or the configurator outside the Libero SoC design environment. To generate constraints<br /> for your design, you need the User HDL, Component HDL, and Component Constraints files.<br /> The SDC component constraints files are available under<br /> `<project>/component/work/<component name>/<instance_name>/` directory after component configuration<br /> and generation.

Each component constraint file consists of the `set_component tcl` command<br /> \(specifies the component name\) and the list of constraints generated after<br /> configuration. The constraints are generated based on the configuration and are specific<br /> to each component.

## Component Constraint File for the PF\_CCC Core

Here is an example of a component constraint file for the PF\_CCC core:<br />

``` {#CODEBLOCK_FH2_XDX_Z5B}
set_component PF_CCC_C0_PF_CCC_C0_0_PF_CCC
# Microchip Corp.
# Date: 2021-Oct-26 04:36:00
# Base clock for PLL #0
create_clock -period 10 [ get_pins { pll_inst_0/REF_CLK_0 } ]
create_generated_clock -divide_by 1 -source [ get_pins { pll_inst_0/REF_CLK_0 } ] 
-phase 0 [ get_pins { pll_inst_0/OUT0 } ]
```

Here,<br /> `create_clock` and `create_generated_clock` are<br /> reference and output clock constraints respectively, which are generated based on<br /> the configuration.

-   **[Working with derive\_constraints Utility](GUID-37F7D84B-5FF6-4CA1-B26A-CE9F55542F2E.md)**  

-   **[set\_device](GUID-5B1ABEA9-E925-4CCE-8401-659E7EA52591.md)**  

-   **[read\_verilog](GUID-2DB1B3E4-A476-4B00-8F78-4DF2C98809E3.md)**  

-   **[read\_vhdl](GUID-89612E1D-0121-44C9-9725-BEA3DE0AF869.md)**  

-   **[set\_top\_level](GUID-2EB41DA5-0E1E-4423-BBF0-0667DF171C10.md)**  

-   **[read\_sdc](GUID-91163C92-1BD1-463E-9CBC-5DED6CD6B033.md)**  

-   **[read\_ndc](GUID-B8679F08-877B-4B04-B62F-4D1801C1B9CD.md)**  

-   **[derive\_constraints](GUID-FB49084C-3537-4C6D-8F5C-A637BB0B29EE.md)**  

-   **[write\_sdc](GUID-BD942290-2C06-4E78-9903-3AE8664C5847.md)**  

-   **[write\_pdc](GUID-1D594F27-1E15-4C8D-967E-E36C70A0209B.md)**  

-   **[write\_ndc](GUID-FEEB3CD2-E5D9-42A1-A8C6-0583925CB46B.md)**  

-   **[add\_include\_path](GUID-03378706-E4C8-49AF-8F88-9072702C378D.md)**  


**Parent topic:**[Appendix C—Derive Constraints](GUID-05E323D6-53B9-484F-8989-7AB23AB58F56.md)

