#include <stdio.h>

void squeeze(char s[], char t[]);
int is_in_str(char s[], int c);

int main() {
    char s[] = "Hello";
    char t[] = "Hl";
    squeeze(s, t);
    printf("%s\n", s);
    return 0;
}

void squeeze(char s[], char t[]) {
    int i, j;
    for(i = 0, j = 0; s[i] != '\0'; i++) {
        if (is_in_str(t, s[i]) == 1) {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}

int is_in_str(char s[], int c) {
    for(int i = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            continue;
        } else {
            return -1;
        }
    }

    return 1;
}