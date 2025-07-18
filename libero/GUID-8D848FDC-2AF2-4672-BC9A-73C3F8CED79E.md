# Duplicate Block Definition

If you import two versions of your block file, you must choose which one you want to use. For example:

1.  Import `top.v` and `block1.v` files as HDL \(**File &gt; Import HDL Source Files**\) into the top- level project.
2.  Import `<block1>` \(**File &gt; Import &gt; Blocks**\).

Libero recognizes a duplicate definition of `<block1>`. One from the HDL<br /> and another in the imported block file. The Design Hierarchy tab shows a<br /> `<block1>.cxf` and `<block1>.v`<br /> file under Duplicate Modules. Libero uses the HDL &lt;block1&gt; by default.

To overwrite the default behavior and select the Block definition, right-click the `<block1>.cxf` file and choose **Use This File**. When you update, the Block icon appears in the Design Hierarchy.

**Parent topic:**[Hierarchical Structure Resolution in Top-Level Projects](GUID-D3B456A7-5EC4-4F0D-84A4-4B478EA51793.md)

