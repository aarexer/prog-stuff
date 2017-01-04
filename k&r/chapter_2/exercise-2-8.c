#include <stdio.h>

unsigned rightrot(unsigned x, int n);

unsigned rightrot(unsigned x, int n)
{
    return ((~(~0 << n) & x) << (8-n)) | x >> n;
}