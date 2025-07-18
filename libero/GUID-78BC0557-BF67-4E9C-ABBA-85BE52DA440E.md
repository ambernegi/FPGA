# Routing

The following table lists the various Block Instantiation options for routing.

|Option|Description|
|------|-----------|
|Error if conflict|The Layout tool errors out if any preserved net routing in a designer block is deleted.|
|Resolve conflict|
|Keep non-conflicting routing|If a nets' routing is removed for any reason, the routing for the non conflicting nets is preserved but not locked \(so that they can be rerouted\). This is the default option.|
|Keep and lock non-conflicting routing|If the routing is removed for any reason, the remaining non- conflicting nets are preserved and locked; they cannot be rerouted. This is the default option.|
|Discard routing from all blocks|Routing information will be discarded from all blocks even if there is no conflict.|

**Parent topic:**[Synthesis Options to Resolve Place and Route Conflicts](GUID-D8FE4107-A31F-4304-9708-B10FFE7D3327.md)

