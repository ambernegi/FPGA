#include <iostream>

struct Ty {
    struct SubTy {
        int a;
        int b;
    };
    char x;
    short y[2];
    SubTy z;
};

Ty test_array[8] = {0};

int sum(Ty array[8]) {
#pragma HLS function top
#pragma HLS memory partition argument(array) type(struct_fields)
    int result = 0;
    for (int i = 0; i < 8; i++) {
        result += array[i].x + array[i].y[0] + array[i].z.a;
    }
    return result;
}

int main() {
    for (int i = 0; i < 8; i++) {
        test_array[i].x = 65 + i; // Start from 'A'
        test_array[i].y[0] = i + 1;
        test_array[i].y[1] = i + 2;
        test_array[i].z.a = i + 3;
        test_array[i].z.b = i + 4;
    }

    if (sum(test_array) != 636) {
        std::cout << "FAIL\n";
        return 1;
    }

    std::cout << "PASS\n";

    return 0;
}
