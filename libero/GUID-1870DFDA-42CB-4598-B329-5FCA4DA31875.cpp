#include "hls/ap_int.hpp"
#include "hls/ap_fixpt.hpp"
#include <iostream>
#include <stdio.h>

using namespace hls;

int top_level() {
#pragma HLS function top
    //...
    ap_ufixpt<8, 4> fixed = 12.75;
    ap_fixpt<8, 4> s_fixed("CC");

    // prints: -52 * 2^-4
    // Read -52 * 0.0625 = -3.25
    std::cout << s_fixed << std::endl;

    // prints: 11001100 * 2^-4
    // Read unsigned 11001100 * 2^-4 = 204 * 0.0625
    // = 12.75
    printf("%s\n", fixed.to_fixpt_string(2).c_str());

    // prints: CC * 2^-4
    // Read signed CC * 2^-4 = -52 * 0.0625
    // = -3.25
    std::cout << s_fixed.to_fixpt_string(16, false) << std::endl;

    // prints: -3.25
    printf("%.2f\n", s_fixed.to_double());

    //...
    // Initialized to -13.75
    ap_fixpt<8, 4> fixed1 = -13.75;
    std::cout << "fixed1 = " << fixed1 << std::endl;
    // Initialized to 135
    ap_ufixpt<8, 8> fixed2 = 135;
    std::cout << "fixed2 = " << fixed2 << std::endl;
    // Initialized to -112
    // Could also write "0x9"
    // 0x is optional
    ap_fixpt<4, 8> fixed3("9");
    std::cout << "fixed3 = " << fixed3 << std::endl;
    // Initialized to 14
    ap_ufixpt<10, 4> fixed4 = ap_uint<16>(14);
    std::cout << "fixed4 = " << fixed4 << std::endl;
    // Initialized to -1 (AP_SAT triggered)
    ap_fixpt<4, 1, AP_TRN, AP_SAT> fixed5 = -4;
    std::cout << "fixed5 = " << fixed5 << std::endl;
    // Initialized to 1.5 (AP_RND triggered)
    ap_ufixpt<4, 3, AP_RND> fixed6 = 1.25;
    std::cout << "fixed6 = " << fixed6 << std::endl;
    // Initialized to 15.75 from a logical string of bits
    ap_ufixpt<8, 4> fixed7;
    fixed7(7, 0) = ap_uint<8>("FC");
    std::cout << "fixed7 = " << fixed7 << std::endl;
    // Assign an existing ap_uint variable to an ap_ufixpt variable
    ap_uint<8> ap_uint_var = 15;
    ap_ufixpt<8, 4> fixed8;
    fixed8(7, 0) = ap_uint_var;
    std::cout << "fixed8 = " << fixed8 << std::endl;
    // Initialize to 13 from a logical string of bits
    ap_fixpt<6, 5> fixed9;
    fixed9.from_raw_bits(ap_uint<6>(26));
    std::cout << "fixed9 = " << fixed9 << std::endl;
    // Initialize to -32 from a logical string of bits
    // (First convert ap_uint<4> to ap_fixpt<4, 6> logically,
    // then perform fixed point assignment)
    ap_fixpt<1, 6> fixed10 = ap_uint<4>("8").to_fixpt<6>();
    std::cout << "fixed10 = " << fixed10 << std::endl;
    // Initialize to 32 from a logical string of bits
    // (First convert ap_int<4> to ap_ufixpt<4, 6> logically,
    // then perform fixed point assignment)
    ap_ufixpt<1, 6> fixed11 = ap_int<4>("8").to_ufixpt<6>();
    std::cout << "fixed11 = " << fixed1 << std::endl;

    //...
    ap_ufixpt<65, 14> a = 32.5714285713620483875274658203125;
    ap_ufixpt<15, 15> b = 7;
    ap_fixpt<8, 4> c = -3.125;

    // the resulting type is wide enough to hold all
    // 51 fractional bits of a, and 15 integer bits of b
    // the width, and integer width are increased by 1 to hold
    // all possible results of the addition
    ap_ufixpt<67, 16> d = a + b; // 39.5714285713620483875274658203125
    std::cout << "d = " << d << std::endl;
    // the resulting type is a signed fixed point
    // with width, and integer width that are the sum
    // of the two operands' widths
    ap_fixpt<23, 19> e = b * c; // -21.875
    std::cout << "e = " << e << std::endl;
    // Assignment triggers the AP_TRN_ZERO quantization mode
    ap_fixpt<8, 7, AP_TRN_ZERO> f = e; // -21.5
    std::cout << "f = " << f << std::endl;
    // Mask out bits above the decimal
    f &= 0xFF; // -22
    std::cout << "f = " << f << std::endl;
    // Assignment triggers the AP_SAT overflow mode,
    // and saturates the negative result to 0
    ap_ufixpt<8, 4, AP_TRN, AP_SAT> g = b * d; // 0
    std::cout << "g = " << g << std::endl;

    //...
    ap_fixpt<12, 5> ffixed("898");

    ap_uint<12> logical_fixed = ffixed.raw_bits();
    logical_fixed == 0x898; // true

    double double_fixed = ffixed.to_double();
    double_fixed == -14.8125; // true

    return 0;
}

int main() { return top_level(); }
