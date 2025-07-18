# Conflicting Definitions in top.v and Imported Block File

You can introduce a conflict if you import `top.v` and block files. Libero<br /> does not support HDL definition of low-level blocks inside top-level HDL files and<br /> subsequent importing of block files. For example, the following will cause an error:

1.  Import a `top.v` file \(**File &gt; Import HDL Source Files**\) that contains a definition for`<top>` and a module definition for`<block1>`.
2.  Import the block `<block1>` \(**File &gt; Import &gt; Blocks**\).

Libero passes two duplicate files to the Synthesis tool because the definition for<br /> `<block1>` is duplicated. To continue, you must remove the<br /> `<block1>` definition from the `top.v`<br /> file and then re-import it.

**Parent topic:**[Hierarchical Structure Resolution in Top-Level Projects](GUID-D3B456A7-5EC4-4F0D-84A4-4B478EA51793.md)

