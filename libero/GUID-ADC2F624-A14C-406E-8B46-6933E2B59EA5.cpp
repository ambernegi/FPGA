#include <stdio.h>
#include <cstdint>

#define NUM_ELEMENTS 10000

// Use AXI initiator to copy data from one cpu-side location to another
void cpy_array(int *in_array, int *out_array) {
#pragma HLS function top
#pragma HLS interface default type(axi_target)
#pragma HLS interface argument(in_array) type(axi_initiator)                   \
    num_elements(NUM_ELEMENTS) max_burst_len(256) max_outstanding_reads(8)
#pragma HLS interface argument(out_array) type(axi_initiator)                  \
    num_elements(NUM_ELEMENTS) max_burst_len(64) max_outstanding_writes(2)
// Burstable
#pragma HLS loop pipeline
    for (unsigned idx = 0; idx < NUM_ELEMENTS; ++idx) {
        out_array[idx] = in_array[idx];
    }
}

int main() {
    // Init cpu-side memory
    int memory_in[NUM_ELEMENTS] = {0};
    int memory_out[NUM_ELEMENTS] = {0};
    for (unsigned idx = 0; idx < NUM_ELEMENTS; idx++) {
        memory_in[idx] = idx+1;
    }

    // Run the accel
    cpy_array(memory_in, memory_out);

    // Check results
    int num_passes = 0;
    for (unsigned idx = 0; idx < NUM_ELEMENTS; idx++) {
        int expected = memory_in[idx];
        if (memory_out[idx] == expected)
            num_passes++;
        else
            printf("Error at index %d: expected %d, but got %d.\n", idx, expected, memory_out[idx]);
    }

    printf("Number of passing tests: %d/%d.\n", num_passes, NUM_ELEMENTS);
    if (num_passes == NUM_ELEMENTS) {
        printf("PASS!\n");
        return 0;
    } else {
        printf("FAIL!\n");
        return 1;
    }
}
