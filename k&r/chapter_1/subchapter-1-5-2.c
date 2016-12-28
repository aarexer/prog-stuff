#include <stdio.h>

int main() {
    long nc;

    while(getchar() != EOF)
        ++nc;

    printf("Number of chars: %d\n", nc);
    return 0;
}