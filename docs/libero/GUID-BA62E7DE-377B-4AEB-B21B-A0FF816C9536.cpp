#include <stdio.h>
#include <cstdint>

// !!! If you modify this file, you also need to modify docs/rtl_interface.inc
// to include the correct lines in the "Axi Initiator" section. !!!

#define NUM_ELEMENTS 1000

void init_array(int *out_array) {
#pragma HLS function top
// In the interface argument, set the max burst length to 64
#pragma HLS interface argument(out_array) type(axi_initiator)                  \
    ptr_addr_interface(axi_target) num_elements(NUM_ELEMENTS)                  \
        max_burst_len(64)

// Not burstable - two writes per iteration
#pragma HLS loop pipeline
    for (unsigned idx = 0; idx < NUM_ELEMENTS / 2; ++idx) {
        out_array[idx] = idx;
        out_array[idx * 2] = idx + 1;
    }

// Not burstable - address is not incrementing by one
#pragma HLS loop pipeline
    for (unsigned idx = 0; idx < NUM_ELEMENTS / 2; ++idx) {
        out_array[idx * 2] = idx + 1;
    }

// Not burstable - write is inside conditional code
#pragma HLS loop pipeline
    for (unsigned idx = 0; idx < NUM_ELEMENTS; ++idx) {
        if (idx % 10)
            out_array[idx] = idx;
    }

// Burstable
#pragma HLS loop pipeline
    for (unsigned idx = 0; idx < NUM_ELEMENTS; ++idx) {
        out_array[idx] = idx;
    }
}

int main() {
    // Init cpu-side memory to 0
    int memory[NUM_ELEMENTS] = {0};

    // Run the accel
    init_array(memory);

    // Check results
    int num_passes = 0;
    for (unsigned idx = 0; idx < NUM_ELEMENTS; idx++) {
        int expected = idx;
        if (memory[idx] == expected)
            num_passes++;
        else
            printf("Error at index %i: expected %i, but got %i.\n", idx, expected, memory[idx]);
    }

    printf("Number of passing tests: %i/%i.\n", num_passes, NUM_ELEMENTS);
    if (num_passes == NUM_ELEMENTS) {
        printf("PASS!\n");
        return 0;
    } else {
        printf("FAIL!\n");
        return 1;
    }
}

