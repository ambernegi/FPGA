# Resolving Place and Route Conflicts

To resolve Place and Route conflicts at the top-level:

-   Examine the `<design_block_name>_compile_netlist_resources.xml` report. Identify the cause of the problem and manually place and constrain the placement with Chip Planner or with PDC commands. See [Chip Planner User Guide](http://coredocs.s3.amazonaws.com/Libero/2025_1/Tool/chipplanner_ug.pdf).
-   If you instantiate a block \(published with placement\) multiple times, then placement between multiple block instances will overlap. To remove overlapping, move the block placement of one or more instances to another area using the PDC`move_block` command. Put the `move_block` command inside the NDC file and associate the NDC file with Synthesis \(**Constraint Manager &gt; Netlist Attributes**\).
-   The software enforces Global sharing. If there is a Global driving CLKINT in the block, it will be deleted. Reduce the number of Globals at the top level by sharing Global Clock resources. Globals in the Blocks may also be re-routed \(not preserved\).

-   **[Synthesis Options to Resolve Place and Route Conflicts](GUID-D8FE4107-A31F-4304-9708-B10FFE7D3327.md)**  


