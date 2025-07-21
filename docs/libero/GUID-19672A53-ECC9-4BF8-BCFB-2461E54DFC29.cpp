// Note the code is referenced by user guide. Make sure to double check user
// guide after changing the code.

#include <hls/data_buffer.hpp>
#include <hls/streaming.hpp>
#include <stdio.h>

#define N 2048

using hls::DoubleBuffer;
using hls::FIFO;
using hls::ref;
using hls::thread;

// Reads input stream into array.
void StreamToBuffer(FIFO<int> &in_fifo, DoubleBuffer<int[N]> &in_buffer) {
    auto &buf_array = in_buffer.producer(); // Obtain the reference to buffer.
    while (1) {
        in_buffer.producer_acquire(); // Acquire buffer to write output data.

#pragma HLS loop pipeline
        for (int i = 0; i < N; i++)
            buf_array[i] = in_fifo.read();

        in_buffer.producer_release(); // Release buffer to downstream.
    }
}

// Forward declare the MergeSortArray function. Implementation is shown below.
void MergeSortArray(int in[N], int out[N]);

// Performs merge sort whenever the input and output buffers become available.
void MergeSort(DoubleBuffer<int[N]> &in_buffer, DoubleBuffer<int[N]> &out_buffer) {
    auto &in = in_buffer.consumer();   // Obtain the reference to input buffer.
    auto &out = out_buffer.producer(); // Obtain the reference to output buffer.

    while (1) {
        in_buffer.consumer_acquire();  // Acquire input buffer from upstream.
        out_buffer.producer_acquire(); // Acquire buffer for output.

        MergeSortArray(in, out);

        out_buffer.producer_release(); // Release output buffer to downstream.
        in_buffer.consumer_release();  // Release input buffer back to upstream.
    }
}

// Writes array into output stream.
void BufferToStream(DoubleBuffer<int[N]> &out_buffer, FIFO<int> &out_fifo) {
    auto &buf_array = out_buffer.consumer(); // Obtain the reference to buffer.
    while (1) {
        out_buffer.consumer_acquire(); // Acquire buffer to read data from upstream.

#pragma HLS loop pipeline
        for (int i = 0; i < N; i++)
            out_fifo.write(buf_array[i]);

        out_buffer.consumer_release(); // Release buffer back to upstream.
    }
}

// Top-level function implementing a pipeline that sorts data stream.
void MergeSortPipeline(FIFO<int> &in_fifo, FIFO<int> &out_fifo) {
    // Create two buffers as the intermediate storage for the three threads/functions.
    DoubleBuffer<int[N]> in_buffer, out_buffer;

    thread<void>(StreamToBuffer, ref(in_fifo), ref(in_buffer));
    thread<void>(MergeSort, ref(in_buffer), ref(out_buffer));
    thread<void>(BufferToStream, ref(out_buffer), ref(out_fifo));
}

// One pass of merge with partition_size -- merging multiple pairs of halves
// across the whole array.
// For each pair, merges the two haves in[l .. m] and in[m + 1 .. r] into out[l
// .. r], where m = l + partition_size - 1, r = l + 2 * partition_size - 1
// Assume the array size is a power of 2.
void MergeOnePass(int in[N], int out[N], int partition_size) {
    for (unsigned left_idx = 0; left_idx < N; left_idx += 2 * partition_size) {
        int m = left_idx + partition_size - 1, r = m + partition_size;
        // Indices in the input and output arrays.
        int i = left_idx, j = m + 1;

#pragma HLS loop pipeline
        for (int k = left_idx; k < left_idx + 2 * partition_size; k++) {
            bool copy_i = (i > m) ? false : (j > r) ? true : in[i] < in[j];
            if (copy_i) {
                out[k] = in[i];
                i++;
            } else {
                out[k] = in[j];
                j++;
            }
        }
    }
}

// Merge sort is done in multiple steps, each step merges on two partitions with
// twice bigger the size of previous step.
void MergeSortArray(int in[N], int out[N]) {
    // Each MergeOnePass merges from halves in array 'in' to 'out', then
    // alternates to merge halves in array 'out' to 'in'.
    // We can reuse the memory by alternating the in and out arrays.
    MergeOnePass(in, out, 1);
    MergeOnePass(out, in, 2);
    MergeOnePass(in, out, 4);
    MergeOnePass(out, in, 8);
    MergeOnePass(in, out, 16);
    MergeOnePass(out, in, 32);
    MergeOnePass(in, out, 64);
    MergeOnePass(out, in, 128);
    MergeOnePass(in, out, 256);
    MergeOnePass(out, in, 512);
    MergeOnePass(in, out, 1024);
}

#define TEST_ITERATIONS 10
int main() {
#pragma HLS function top
    FIFO<int> in_fifo(TEST_ITERATIONS * N), out_fifo(TEST_ITERATIONS * N);
    for (int i = 0; i < TEST_ITERATIONS * N; i++)
        in_fifo.write(TEST_ITERATIONS * N - 1);

    MergeSortPipeline(in_fifo, out_fifo);

    unsigned err_cnt = 0;
    for (int n = 0; n < TEST_ITERATIONS; n++) {
        int last = out_fifo.read();
        for (int i = 1; i < N; i++) {
            int cur = out_fifo.read();
            if (last > cur) {
                printf("i: %d, last (%d) > cur (%d)\n", i, last, cur);
                err_cnt += 1;
            }
            last = cur;
        }
    }

    if (err_cnt)
        printf("FAIL. err_cnt = %d\n", err_cnt);
    else
        printf("PASS. err_cnt = %d\n", err_cnt);
    return err_cnt;
}
