#include <iostream>
#include <stdio.h>

// out1 = in1, out2 = in2
void subfunction_A(int in1[128], int in2[128], int out1[128], int out2[128]) {
#pragma HLS loop pipeline
    for (int i = 0; i < 128; i++) {
        out1[i] = in1[i];
        out2[i] = in2[i];
    }
}

// out1 = in1 + 2
void subfunction_B(int in1[128], int out1[128]) {
#pragma HLS loop pipeline
    for (int i = 0; i < 128; i++) {
        out1[i] = in1[i] + 2;
    }
}

// out2 = in2 + 1
void subfunction_C(int in2[128], int out2[128]) {
#pragma HLS loop pipeline
    for (int i = 0; i < 128; i++) {
        out2[i] = in2[i] + 3;
    }
}

// out = in1 + in2
void subfunction_D(int in1[128], int in2[128], int out[128]) {
#pragma HLS loop pipeline
    for (int i = 0; i < 128; i++) {
        out[i] = in1[i] + in2[i];
    }
}

// Top-level
void diamond(int in1[128], int in2[128], int out[128]) {
#pragma HLS function top
#pragma HLS function dataflow

#pragma HLS dataflow_channel variable(tmp1_0) type(double_buffer)
#pragma HLS dataflow_channel variable(tmp2_0) type(double_buffer)
#pragma HLS dataflow_channel variable(tmp1_1) type(double_buffer)
#pragma HLS dataflow_channel variable(tmp2_1) type(double_buffer)

    int tmp1_0[128], tmp2_0[128], tmp1_1[128], tmp2_1[128];
    subfunction_A(in1, in2, tmp1_0, tmp2_0);
    subfunction_B(tmp1_0, tmp1_1);
    subfunction_C(tmp2_0, tmp2_1);
    subfunction_D(tmp1_1, tmp2_1, out);
}

int main() {

    // Initialize in1 and in2 to have 0...511
    int in1[512], in2[512], out[512];
    for (int i = 0; i < 512; i++) {
        in1[i] = i;
        in2[i] = i;
    }

    // Call diamond 4 times, each time with 1/4 of the input
    for (int p = 0; p < 4; p++) {
        diamond(&in1[p * 128], &in2[p * 128], &out[p * 128]);
    }

    // Check for errors
    int num_errors = 0;
    for (int j = 0; j < 512; j++) {
        if (out[j] != 2 * j + 5) {
            printf("out[%d] = %d\n", j, out[j]);
            num_errors++;
        }
    }
    printf("num_errors = %d\n", num_errors);
    if (num_errors == 0) {
        printf("RESULT: PASS\n");
    } else {
        printf("RESULT: FAIL\n");
    }
    return num_errors;
}
