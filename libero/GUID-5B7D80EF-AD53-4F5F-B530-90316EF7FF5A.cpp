#include <stdio.h>
#include <cstdint>
#include "hls/hls_alloc.h"

#define NUM_ELEMENTS 10000
#define USE_OPTIMIZED 1

// Use AXI initiator to copy from one external memory to another.
void copy_array(unsigned *in_array, unsigned *out_array, unsigned num_elements) {
#ifndef USE_OPTIMIZED
#pragma HLS function top
#pragma HLS interface default type(axi_target)
#pragma HLS interface argument(in_array) type(axi_initiator)                   \
    num_elements(NUM_ELEMENTS)
#pragma HLS interface argument(out_array) type(axi_initiator)                  \
    num_elements(NUM_ELEMENTS)
#endif
    for (unsigned idx = 0; idx < num_elements; ++idx) {
        out_array[idx] = in_array[idx];
    }
}

// An optimized version of the same core.
void copy_array_optimized(unsigned *in_array, unsigned *out_array, unsigned num_elements) {
#ifdef USE_OPTIMIZED
#pragma HLS function top
#pragma HLS interface default type(axi_target)
// (2) Specify maximum burst length in the interface pragma
// (3) Specify maximum number of outstanding transactions via interface pragma
#pragma HLS interface argument(in_array) type(axi_initiator)                   \
    num_elements(NUM_ELEMENTS) max_burst_len(256) max_outstanding_reads(2)
#pragma HLS interface argument(out_array) type(axi_initiator)                  \
    num_elements(NUM_ELEMENTS) max_burst_len(256) max_outstanding_writes(2)
#endif
// (1) Pipeline the loop to infer an AXI burst transfer
#pragma HLS loop pipeline
    for (unsigned idx = 0; idx < num_elements; ++idx) {
        out_array[idx] = in_array[idx];
    }
}

int main() {
    // Allocate/initialize cpu-side memory
    // (4) Choose a cpu-side allocation region that best suits the transfer
    unsigned *memory_in = (unsigned *)hls_malloc(
        sizeof(unsigned) * NUM_ELEMENTS, HLS_ALLOC_CACHED);
    unsigned *memory_out = (unsigned *)hls_malloc(
        sizeof(unsigned) * NUM_ELEMENTS, HLS_ALLOC_CACHED);
    for (unsigned idx = 0; idx < NUM_ELEMENTS; idx++) {
        memory_in[idx] = idx+1;
    }

    // Run the accelerator
#ifndef USE_OPTIMIZED
    copy_array(memory_in, memory_out, NUM_ELEMENTS);
#else
    copy_array_optimized(memory_in, memory_out, NUM_ELEMENTS);
#endif

    // Check results
    int num_passes = 0;
    for (unsigned idx = 0; idx < NUM_ELEMENTS; idx++) {
        unsigned expected = memory_in[idx];
        if (memory_out[idx] == expected)
            num_passes++;
        else
            printf("Error at index %d: expected %u, but got %u.\n", idx, expected, memory_out[idx]);
    }

    hls_free(memory_in);
    hls_free(memory_out);
    printf("Number of passing tests: %d/%d.\n", num_passes, NUM_ELEMENTS);
    if (num_passes == NUM_ELEMENTS) {
        printf("PASS!\n");
        return 0;
    } else {
        printf("FAIL!\n");
        return 1;
    }
}
