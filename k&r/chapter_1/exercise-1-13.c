#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLENGTH 31

int main() {
    int c;
    int STATE = OUT;
    int lengthOfWords[MAXLENGTH];
    int length = 0;

    for (int i = 0; i < MAXLENGTH; ++i) {
        lengthOfWords[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (STATE == IN) {
                ++lengthOfWords[length];
            }
            STATE = OUT;
            length = 0;
        } else {
            STATE = IN;
            ++length;
        }
    }

    for (int i = 0; i < MAXLENGTH; ++i) {
        printf("%d ", i);
        for (int j = 0; j < lengthOfWords[i]; ++j) {
            printf("%s", "=");
        }
        printf("\n");
    }

    return 0;
}