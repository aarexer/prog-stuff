#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}