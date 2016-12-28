#include <stdio.h>

int main() {
    int c;
    int nt = 0, nl = 0, ns = 0;

    while((c = getchar()) != EOF) {
        switch(c) {
            case '\n': ++nl; break;
            case '\t': ++nt; break;
            case ' ' : ++ns; break;
            default: continue;
        }
    }

    printf("Number of lines: %d\n", nl);
    printf("Number of tabs: %d\n", nt);
    printf("Number of spaces: %d\n", ns);
    return 0;
}