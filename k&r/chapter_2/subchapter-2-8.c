#include <stdio.h>

void squeeze(char s[], int c);
void strcat(char s[], char t[]);

int main() {
    char s[] = "Hello";
    squeeze(s, 'l');
    printf("%s\n", s);
    return 0;
}

void squeeze(char s[], int c) {
    int i, j;
    for(i = 0, j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}

void strcat(char s[], char t[]) {
    int i, j;
    i = j = 0;

    while(s[i] != '\0') {
        i++;
    }

    while (t[j] != '\0') {
        s[i++] = t[j++]
    }
}