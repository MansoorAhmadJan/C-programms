#include <stdio.h>

/* Euclid's algorithm repeatedly replaces (a, b) with (b, a % b). */
unsigned int gcd(unsigned int a, unsigned int b) {
    while (b != 0) {
        unsigned int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(void) {
    const unsigned int pairs[][2] = {{48, 18}, {17, 13}, {0, 9}, {25, 25}};
    for (size_t i = 0; i < sizeof pairs / sizeof pairs[0]; ++i) {
        printf("GCD(%u, %u) = %u\n", pairs[i][0], pairs[i][1],
               gcd(pairs[i][0], pairs[i][1]));
    }
    return 0;
}
