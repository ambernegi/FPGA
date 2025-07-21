#include <hls/ap_int.hpp>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int array[1000];
int result = 0;

void insert_top() {
    int i;
#pragma HLS loop unroll
    for (i = 0; i < 1000; i++) {
        array[i] = i;
    }
    //...
}

int top() {
#pragma HLS function top
    insert_top();
    int i;
#pragma HLS loop unroll
    for (i = 0; i < 1000; i++) {
        result += array[i];
    }
    return (result != 499500);
}

int main() { return top(); }
