#define ARRAY_SIZE 20

#include <hls/thread.hpp>
#include <stdio.h>

volatile int input[ARRAY_SIZE] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
                         11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

hls::mutex mutex;
hls::barrier barr;

int add(int &final_result, int thread_no) {
    int result = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
        result += input[i];

    // Use mutex so that only 1 thread can write at any time
    mutex.lock();
    final_result += result;
    mutex.unlock();

    // Wait for all threads to reach this point
    barr.wait();
    // Print the result after all threads update final_result
    printf("thread %d: final_result = %d\n", thread_no, final_result);

    return result;
}

int main() {
#pragma HLS function top
    // Initialize the barrier.
    barr.init(2);

    // Start the threads.
    int final_result = 0;
    hls::thread<int> thread1(add, hls::ref<int>(final_result), /*thread_no*/ 1);
    hls::thread<int> thread2(add, hls::ref<int>(final_result), /*thread_no*/ 2);

    // Join the threads.
    int result[2] = {0, 0};
    result[0] = thread1.join();
    result[1] = thread2.join();

    // Check result.
    int result_matches = 0;
    for (int i = 0; i < 2; i++) {
        printf("result[%d] = %d\n", i, result[i]);
        result_matches += (result[i] == 210);
    }
    // Check final_result is correct
    result_matches += (result[0] + result[1]) == final_result;

    printf("MATCHES: %d\n", result_matches);
    if (result_matches == 3) {
        printf("PASS\n");
        return 0;
    }

    printf("FAIL\n");
    return 1;
}
