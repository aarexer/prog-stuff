#include <stdio.h>

#define PROGRAM 0
#define SLASH 1
#define COMMENT 2
#define STAR 3
#define QUOTE 4
#define LITERAL 5

int main() {

    int state;
    int quote;
    int c;

    //init
    state = PROGRAM;
    while ((c = getchar()) != EOF) {
        if (state == PROGRAM || state == SLASH) {
            if (state == SLASH) {
                if (c == '*') {
                    state = COMMENT;
                }
                else {
                    putchar('/');
                    state = PROGRAM;
                }
            }

            if (state == PROGRAM) {
                if (c == '\'' || c == '"') {
                    quote = c;
                    state = QUOTE;
                    putchar(c);
                }
                else if (c == '/') {
                    state = SLASH;
                }
                else {
                    putchar(c);
                }
            }
        }
        else if (state == COMMENT) {
            if (c == '*') {
                state = STAR;
            }
        }
        else if (state == QUOTE) {
            putchar(c);
            if (c == '\\') {
                state = LITERAL;
            }
            else if (c == quote) {
                state = PROGRAM;
            }
        }
        else if (state == SLASH) {
        }
        else if (state == STAR) {
            if (c == '/') {
                state = PROGRAM;
            }
            else if (c != '*') {
                state = COMMENT;
            }
        }
        else {
            putchar(c);
            state = QUOTE;
        }
    }

    if (state == SLASH) {
        putchar('/');
    }

    return 0;
}