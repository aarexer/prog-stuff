#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

unsigned invert(unsigned x, int p, int n)
{
    return ( ((~x >> (p+1-n)) & ~(~0 << n)) << (p+1-n) ) | \\
              (~( ((~0 >> (p+1-n)) & ~(~0 << n)) << (p+1-n) ) & x);
}