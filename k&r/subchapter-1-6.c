#include <stdio.h>

int main() {
    int c, nwhite, nother;
    int ndigits[10];

    while((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigits[c - '0'];
        } else if (c == ' ' || c = '\t' || c = '\n') {
            ++nwhite;
        } else {
            ++nother;
        }

        for (int i = 0; i < 10; ++i) {
            printf("%d: %d, ", i, ndigits[i]);
        }

        printf(", spaces: %d, nother: %d", nwhite, nother);
    }
    return 0;
}