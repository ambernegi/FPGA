#ifndef __SLAVE_LAYOUT_H__
#define __SLAVE_LAYOUT_H__

#include <stdint.h>

// Define the AXI slave memory layout as a struct in a header file.
struct SlaveLayout {
    uint16_t array[8];
    uint32_t a, b;
    uint64_t sum_result;
    uint32_t xor_result, or_result;
};

#endif
