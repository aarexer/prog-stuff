#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c;
    int STATE = OUT;
    
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (STATE == IN) {
                putchar('\n');
            }
            STATE = OUT;
        } else {
            STATE = IN;
            putchar(c);
        }
    }

    return 0;
}