#include <stdio.h>
#include "axi_slave_LinkedByUG.h"
#include "global_var_LinkedByUG.cpp"

void calc_kernel() {
#pragma HLS function top
    global_var.sum_result = global_var.a + global_var.b + //
                            global_var.array[0] + global_var.array[1] +
                            global_var.array[2] + global_var.array[3] +
                            global_var.array[4] + global_var.array[5] +
                            global_var.array[6] + global_var.array[7];

    global_var.xor_result = global_var.a ^ global_var.b ^ //
                            global_var.array[0] ^ global_var.array[1] ^
                            global_var.array[2] ^ global_var.array[3] ^
                            global_var.array[4] ^ global_var.array[5] ^
                            global_var.array[6] ^ global_var.array[7];

    global_var.or_result = global_var.a | global_var.b | //
                           global_var.array[0] | global_var.array[1] |
                           global_var.array[2] | global_var.array[3] |
                           global_var.array[4] | global_var.array[5] |
                           global_var.array[6] | global_var.array[7];
}

int main() {

    for (int i = 0; i < 8; i++)
        global_var.array[i] = 0x1111 * i;
    global_var.a = 0xffffffff;
    global_var.b = 0x0f0f0f0f;

    calc_kernel();

    printf("sum_result = %016lx\n", global_var.sum_result);
    printf("xor_result = %08x\n", global_var.xor_result);
    printf("or_result = %08x\n", global_var.or_result);

    if (global_var.sum_result == 0x0f10ecea &&
        global_var.xor_result == 0xf0f0f0f0 &&
        global_var.or_result == 0xffffffff) {
        printf("PASS\n");
        return 0;
    }

    printf("FAIL\n");
    return 1;
}
