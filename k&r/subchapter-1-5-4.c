#include <stdio.h>

int main() {
    int c;
    int nl, nw, nc;
    int isInWord = 0;
    
    //init variables
    nl = nc = nw = 0;
    while((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == '\n') {
            isInWord = 0;
        } else if (!isInWord ){
            isInWord = 1;
            ++nw;
        }
    }

    printf("Chars:%s, Words: %s, Lines: %s\n", nc, nw, nl);
    return 0;
}