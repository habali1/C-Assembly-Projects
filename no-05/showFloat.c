#include <stdio.h> // For printf
#include <stdlib.h> // For atod
#include "bitFields.h" // For bit field library from hw05
#define SIGNBIT 63
#define EXPSTART 62
#define EXPBITS 11
#define FRACSTART 51
#define FRACBITS 52
#define DOUBLEBIAS 1023

unsigned long getConcreteBits(double input) {
    union {
        double fl;
        unsigned long lng;
    } uf;
    uf.fl = input;
    return uf.lng;
}

int getSign(double floatIn) {
    unsigned long bits = getConcreteBits(floatIn);
    return getBit(SIGNBIT, bits);
}

int getBiasedExp(double floatIn) {
    unsigned long bits = getConcreteBits(floatIn);
    return getBitFldU(EXPSTART, EXPBITS, bits);
}

int getUnbiasedExp(double floatIn) {
    return getBiasedExp(floatIn) - DOUBLEBIAS;
}

char *getFrac(double floatIn, char *buf) {
    unsigned long bits = getConcreteBits(floatIn);
    for (int i = 0; i < FRACBITS; ++i) {
        buf[FRACSTART - i] = getBit(i, bits) ? '1' : '0';
    }
    buf[FRACBITS] = '\0';
    return buf;
}

int main(int argc, char **argv) {
    char buf[FRACBITS + 1];

    if (argc < 2) {
        printf("Usage: %s <floating_point_number>...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        double input = atof(argv[i]);
        printf("Float %lg : Sign=%d Unbiased Exp=%d Biased=%d Frac=1.%s\n",
               input, getSign(input), getUnbiasedExp(input), getBiasedExp(input), getFrac(input, buf));
    }

    return 0;
}
