#include <stdio.h>

#define MAXLINE 1000

void reverse(char line[]);
int get_line(char line[]);

int main() {
    char line[MAXLINE];
        
    while(get_line(line) > 0) {
        reverse(line);
    }

    return 0;
}


void reverse(char s[]) {
    int index = 0;

    while(s[index] != '\0' && index < MAXLINE) {
        ++index;
    }

    for (int i = index; i >= 0; --i) {
        printf("%c", s[i]);
    }
    printf("\n");
}

int get_line(char s[]) {
    int c, i;

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    s[i] = '\0';

    return i;
}