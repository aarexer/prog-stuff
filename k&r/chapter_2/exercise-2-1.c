#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Range of unsigned char: [%d; %d]\n", 0, UCHAR_MAX);
    printf("Range of unsigned short: [%d; %hu]\n", 0, USHRT_MAX);
    printf("Range of unsigned int: [%d; %u]\n", 0, UINT_MAX);
    printf("Range of unsigned long: [%d; %lu]\n", 0, ULONG_MAX);
    printf("Range of signed char: [%d; %d]\n", CHAR_MIN, CHAR_MAX);
    printf("Range of signed short: [%hd; %hd]\n", SHRT_MIN, SHRT_MAX);
    printf("Range of signed int: [%d; %d]\n", INT_MIN, INT_MAX);
    printf("Range of signed long: [%ld; %ld]\n", LONG_MIN, LONG_MAX);

    return 0;
}