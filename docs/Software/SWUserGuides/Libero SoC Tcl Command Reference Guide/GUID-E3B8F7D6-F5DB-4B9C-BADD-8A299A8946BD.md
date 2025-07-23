# Working with the derive\_constraints Utility

Derive constraints traverse through the design and allocate new<br /> constraints for each instance of component based on previously provided component SDC/NDC/PDC<br /> files. For the CCC reference clocks, it propagates back through the design to find the source<br /> of the reference clock. If the source is an I/O, the reference clock constraint will be set on<br /> the I/O. If it is a CCC output or another clock source \(for example, SerDes, oscillator\), it<br /> uses the clock from the other component and reports a warning if the intervals do not match.<br /> Derive constraints will also allocate constraints for some macros like on-chip oscillators if<br /> you have them in your RTL.

To execute the `derive_constraints` utility, you must<br /> supply a `.tcl` file command-line argument<br /> with the following information in the specified order.

1.  Specify device information using the information in section [set\_device](GUID-39C65B3D-C691-4828-B683-6BF6124A3D64.md).
2.  Specify path to the RTL files using the information in section [read\_verilog](GUID-A6B878AC-8A09-4A07-9F0F-8F56A93ACC4B.md) or [read\_vhdl](GUID-5A4AFED5-32F0-457C-B56A-82A66D7E56EB.md).
3.  Set top level module using the information in section [set\_top\_level](GUID-F75EEF2F-7038-4A76-A731-9C5C3E42926E.md).
4.  Specify path to the component SDC/NDC files using the information in section [read\_sdc](GUID-A294DA39-50AC-498B-8247-BBB2D2C3EAAE.md) or [read\_ndc](GUID-65B669F6-2223-4F29-A83C-8C9CD0036EB2.md).
5.  Execute the files using the information in section [derive\_constraints](GUID-D8E94959-76E9-4271-97BF-B64A72DF17C1.md).
6.  Specify path to the SDC/PDC/NDC derived constraints file using the information in section [write\_sdc](GUID-EF3BF9B5-94C1-4645-9554-4393735F9B29.md) or [write\_pdc](GUID-AC49E0C6-E7D0-4500-B3A7-DF56585FD7EE.md) or [write\_ndc](GUID-399EF5CE-68B7-4742-B3E0-DAAF4768D37B.md).

## Execution and Contents of the `derive.tcl` File

The<br /> following is an example command-line argument to<br /> execute the `derive_constraints`<br /> utility.

```
$ <libero_installation_path>/bin{64}/derive_constraints derive.tcl
```

The<br /> contents of the `derive.tcl`<br /> file:

```tcl
# Device information set_device -family PolarFire -die MPF100T -speed -1 # RTL files read_verilog -mode system_verilog project/component/work/txpll0/txpll0_txpll0_0_PF_TX_PLL.v read_verilog -mode system_verilog {project/component/work/txpll0/txpll0.v} read_verilog -mode system_verilog {project/component/work/xcvr0/I_XCVR/xcvr0_I_XCVR_PF_XCVR.v} read_verilog -mode system_verilog {project/component/work/xcvr0/xcvr0.v} read_vhdl -mode vhdl_2008 {project/hdl/xcvr1.vhd} #Component SDC files set_top_level {xcvr1} read_sdc -component {project/component/work/txpll0/txpll0_0/txpll0_txpll0_0_PF_TX_PLL.sdc} read_sdc -component {project/component/work/xcvr0/I_XCVR/xcvr0_I_XCVR_PF_XCVR.sdc} #Use derive_constraint command derive_constraints #SDC/PDC/NDC result files write_sdc {project/constraint/xcvr1_derived_constraints.sdc} write_pdc {project/constraint/fp/xcvr1_derived_constraints.pdc}
```

**Parent topic:**[Derive Constraints Tcl Commands](GUID-EF4215C4-4E60-4551-BFBD-C4A85BEC13C2.md)

**Related Links**  


[set\_device](GUID-39C65B3D-C691-4828-B683-6BF6124A3D64.md)

[read\_verilog](GUID-A6B878AC-8A09-4A07-9F0F-8F56A93ACC4B.md)

[read\_vhdl](GUID-5A4AFED5-32F0-457C-B56A-82A66D7E56EB.md)

[set\_top\_level](GUID-F75EEF2F-7038-4A76-A731-9C5C3E42926E.md)

[read\_sdc](GUID-A294DA39-50AC-498B-8247-BBB2D2C3EAAE.md)

[read\_ndc](GUID-65B669F6-2223-4F29-A83C-8C9CD0036EB2.md)

[derive\_constraints](GUID-D8E94959-76E9-4271-97BF-B64A72DF17C1.md)

[write\_sdc](GUID-EF3BF9B5-94C1-4645-9554-4393735F9B29.md)

[write\_pdc](GUID-AC49E0C6-E7D0-4500-B3A7-DF56585FD7EE.md)

[write\_ndc](GUID-399EF5CE-68B7-4742-B3E0-DAAF4768D37B.md)

[add\_include\_path](GUID-39A8B4B7-B61B-40C6-A32F-BEB54CF08FA8.md)

