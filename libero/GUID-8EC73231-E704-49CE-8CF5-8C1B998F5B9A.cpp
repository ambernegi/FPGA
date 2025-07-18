#include "hls/ap_fixpt.hpp"
#include "hls/ap_int.hpp"
#include <iostream>
#include <stdio.h>

using namespace hls;

int top_level() {
#pragma HLS function top
    //...
    ap_uint<8> ap_u = 21;
    ap_int<8> ap = -22;

    // prints: 0x15
    std::cout << "ap_u = 0x" << ap_u << std::endl;

    // prints: -22
    std::cout << "ap.to_string(10,true) = " << ap.to_string(10, true)
              << std::endl;

    // prints: 234
    std::cout << "ap.to_string(10) = " << ap.to_string(10) << std::endl;

    // prints 00010101
    printf("ap_u.to_string(2) = %s\n", ap_u.to_string(2).c_str());

    //...
    // Initialized to -7
    ap_int<4> int1 = -7;
    std::cout << "int1 = " << int1 << std::endl;

    // Initialized to 15
    // The bits below the decimal are truncated.
    ap_uint<4> int2 = ap_ufixpt<5, 4, AP_RND, AP_SAT>(15.5);
    std::cout << "int2 = " << int2 << std::endl;

    // Initialized to 132
    // Could also write "0x84"
    // The 0x is optional
    ap_uint<8> int3("84");
    std::cout << "int3 = " << int3 << std::endl;

    // Initialized to 4
    // Bit selections are zero extended to match widths
    ap_int<4> int4 = int3(2, 0);
    std::cout << "int4 = " << int4 << std::endl;

    // Initialized to 128
    // ap_uint types are zero extended to match widths
    // ap_int types are sign extended to match widths
    ap_int<16> int5 = ap_uint<8>("80");
    std::cout << "int5 = " << int5 << std::endl;

    // Initialized to 2
    // The value 4098 (= 4096 + 2) is wrapped to 2
    ap_uint<12> int6 = 4098;
    std::cout << "int6 = " << int6 << std::endl;

    //...
    ap_int<8> a = 7;
    ap_int<12> b = 100;
    ap_uint<7> c = 3;

    // Multiply expands to the sum of a and b's width
    ap_int<20> d = a * b;
    std::cout << "d = " << d << std::endl;

    // Add result in max of widths + 1
    ap_int<13> e = a + b;
    std::cout << "e = " << e << std::endl;

    // Logical bitwise ops result in max of widths
    ap_int<12> f = a & b;
    std::cout << "f = " << f << std::endl;

    // Mixing ap_int and ap_uint results in ap_int
    ap_int<9> g = a + c;
    std::cout << "g = " << g << std::endl;

    // ap_(u)int types can be mixed freely with integral types
    ap_int<33> h = -1 - a;
    std::cout << "h = " << h << std::endl;

    //...
    // zero extend 16 bit -32768 to 64 bit 32768
    unsigned long long A = ap_int<16>(-32768).to_uint64();
    std::cout << "A = " << A << std::endl;

    // wrap from 65 bit 2**64 + 1 to 64 bit 1
    unsigned long long B = ap_uint<65>("10000000000000001").to_uint64();
    std::cout << "B = " << B << std::endl;

    // interpret 8 bit uint as 8 bit ufixpt with four bits above decimal
    // by value 248 becomes 15.5 (== 248 / 2**4)
    ap_ufixpt<8, 4> C = ap_uint<8>(248).to_ufixpt<4>();
    std::cout << "C = " << C << std::endl;

    // interpret 4 bit int as 4 bit fixpt with leading bit 8 bits above decimal
    // by value -8 becomes -128 (== -8 * 2**4)
    ap_fixpt<4, 8> D = ap_int<4>(-8).to_fixpt<8>();
    std::cout << "D = " << D << std::endl;

    // interpret 6 bit int as 6 bit ufixpt with 6 bits above decimal
    // by value 8 becomes 8
    ap_ufixpt<6, 6> E = ap_int<6>(8).to_ufixpt<6>();
    std::cout << "E = " << E << std::endl;

    //...
    ap_uint<8> Aa(0xBC);
    std::cout << "Aa = " << Aa << std::endl;
    ap_int<4> Bb = Aa(7, 4); // Bb initialized as 0xB; "Aa(7, 4)" is equivalent
                             // to "Aa.range(7, 4)"
    std::cout << "Bb = " << Bb << std::endl;
    ap_int<4> Cc = Aa[2]; // Cc initialized as 0x1
                          // Aa[2] is zero extended to match widths
    std::cout << "Cc = " << Cc << std::endl;

    Aa(3, 0) =
        0xA; // Aa becomes 0xBA; "Aa(3, 0) is equivalent to "Aa.range(3, 0)"
    std::cout << "Aa = " << Aa << std::endl;

    Aa.byte(1, 4) = 0xC; // Aa becomes 0xCA;
    std::cout << "Aa = " << Aa << std::endl;

    Aa.bytes(3, 2, 2) = 0xD; // AA becomes 0xDA
    std::cout << "Aa = " << Aa << std::endl;

    //...
    ap_uint<4> AA(0xA);
    std::cout << "AA = " << AA << std::endl;
    ap_uint<8> BB(0xCB);
    std::cout << "BB = " << BB << std::endl;
    ap_uint<8> AB((AA, BB(3, 0))); // AB initialized as 0xAB
    std::cout << "AB = " << AB << std::endl;
    ap_uint<12> ABC(
        (AA, ap_uint<4>(0xB), BB(7, 4))); // ABC initialized as 0xABC
    std::cout << "ABC = " << ABC << std::endl;

    return 0;
}

int main() {

    ap_uint<128> data("0123456789ABCDEF0123456789ABCDEF");
    ap_int<4> res(0);

    for (ap_uint<8> i = 0; i < data.length(); i += 4) {
        // If this four bit range of data is <= 7
        if (data(i + 3, i) <= 7) {
            res -= 1;
        } else {
            res += 1;
        }
    }
// iostream doesn't synthesize to hardware, so only include this
// line in software compilation. Any block surrounded by this ifdef
// will be ignored when compiling to hardware.
#ifndef __SYNTHESIS__
    std::cout << res << std::endl;
#endif

    return top_level();
}
