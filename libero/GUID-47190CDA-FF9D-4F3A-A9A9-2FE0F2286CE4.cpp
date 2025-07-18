// Declare a 'SlaveLayout' type global variable in C++ source file (.cpp).
// Use HLS interface pragma with axi_slave type to specify an AXI4 slave interface.
#pragma HLS interface variable(global_var) type(axi_slave) concurrent_access(true)
SlaveLayout global_var;
