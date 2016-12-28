#include <stdio.h>

#define MAXLINE 1000

char resultLine[MAXLINE];

void detab(char line[], int spaces);

int main() {
    char line[] = "hello\tworld";
    detab(line, 1);
    printf("%s\n", resultLine);
    return 0;
}

void detab(char line[], int spaces) {
    int index = 0;
    int resultIndex = 0;
    extern char resultLine[];

    while(line[index] != '\0' && index <= MAXLINE && resultIndex <= MAXLINE - 1) {
        if (line[index] == '\t') {
            for (int i = 0; i < spaces; ++i) {
                resultLine[resultIndex++] = ' ';
            }
         } else {
            resultLine[resultIndex++] = line[index];
         }
         index++;
    }

    resultLine[resultIndex] = '\0';
}