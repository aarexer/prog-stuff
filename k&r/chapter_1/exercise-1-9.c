#include <stdio.h>

int main() {
    int c;
    int isPrevCharBlank = 0;

    while((c = getchar()) != EOF) {
        if (!isPrevCharBlank || c != ' ') {
            putchar(c);
            isPrevCharBlank = 1;
        } 
        
        isPrevCharBlank = (c == ' ');
    }
    return 0;
}