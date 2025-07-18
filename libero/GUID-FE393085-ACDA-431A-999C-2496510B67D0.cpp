#include "hls/ap_fixpt.hpp"
#include "hls/streaming.hpp"
#include <iostream>

#define TAPS 8

// A signed fixed point type with 10 integer bits and 6 fractional bits
// It employs convergent rounding for quantization, and saturation for overflow.
typedef hls::ap_fixpt<16, 10, hls::AP_RND_CONV, hls::AP_SAT> fixpt_t;

// A signed fixed point type with 3 integer bits and 1 fractional bit
// It uses the default truncation, and wrapping modes.
typedef hls::ap_fixpt<4, 3> fixpt_s_t;

fixpt_t golden[20] = {0};
bool golden_compare[20] = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
                           1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

void fir(hls::FIFO<fixpt_t> &input_fifo, hls::FIFO<fixpt_t> &output_fifo) {
#pragma HLS function top
#pragma HLS function pipeline
    fixpt_t in = input_fifo.read();

    static fixpt_t previous[TAPS] = {0};
    const fixpt_s_t coefficients[TAPS] = {-2, -1.5, -1, -0.5, 0.5, 1, 1.5, 2};

    for (unsigned i = (TAPS - 1); i > 0; --i) {
        previous[i] = previous[i - 1];
    }

    previous[0] = in;

    fixpt_t accumulate[TAPS];
    for (unsigned i = 0; i < TAPS; ++i) {
        accumulate[i] = previous[i] * coefficients[i];
    }

    // Accumulate results, doing adds and saturation in
    // a binary tree to reduce the number of serial saturation
    // checks. This significantly improves pipelining results
    // over serially adding results together when saturation
    // is required.
    for (unsigned i = TAPS >> 1; i > 0; i >>= 1) {
        for (unsigned j = 0; j < i; ++j) {
            accumulate[j] += accumulate[j + i];
        }
    }

    output_fifo.write(accumulate[0]);
}

int main() {
    // declare input & output fifo
    hls::FIFO<fixpt_t> my_fifo_in;
    hls::FIFO<fixpt_t> my_fifo_out;
    // set the fifo's depth to 20
    my_fifo_in.setDepth(20);
    my_fifo_out.setDepth(20);
    // Write test sample to fifo
    for (fixpt_t i = 0; i < 20; i++)
        if (i % 2 == 0)
            my_fifo_in.write(i);
        else
            my_fifo_in.write(-i);
    while (!my_fifo_in.empty())
        fir(my_fifo_in, my_fifo_out);

    int counter = 0;
    while (!my_fifo_out.empty() && counter < 20) {
        golden[counter] = my_fifo_out.read();
        counter++;
    }

    for (fixpt_t j = 0; j < 20; j++) {
        if (j % 2 == 0)
            my_fifo_in.write(j);
        else
            my_fifo_in.write(-j);
    }

    while (!my_fifo_in.empty())
        fir(my_fifo_in, my_fifo_out);

    counter = 0;
    while (!my_fifo_out.empty() && counter < 20) {
        if (golden_compare[counter] !=
            (golden[counter] == my_fifo_out.read())) {
            std::cout << "FAIL\n";
            return 1;
        }
        counter++;
    }
    std::cout << "PASS\n";
    return 0;
}
