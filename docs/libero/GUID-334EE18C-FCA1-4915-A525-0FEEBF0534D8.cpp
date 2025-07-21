#include <hls/ap_int.hpp>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#pragma HLS memory partition variable(_array)
int _array[8];
int _result = 0;
//...

int top() {
#pragma HLS function top
    int i;
    //#pragma HLS loop pipeline
    // for (i = 0; i < 8; i++) {
    //    _array[i] = i;
    //}

    for (i = 0; i < 8; i++) {
        _result += _array[i];
    }
    return (_result != 28);
}

int main() {
    for (int i = 0; i < 8; i++) {
        _array[i] = i;
    }
    return top();
}
