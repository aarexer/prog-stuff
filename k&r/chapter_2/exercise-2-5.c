#include <stdio.h>

int any(char s1[], char s2[]);
int is_in_str(char s[], int c);

int main() {
    char s[] = "Hello";
    char t[] = "Hl";
    printf("%d\n", any(s, t));
    return 0;
}

int any(char s1[], char s2[]) {
    int i, index;
    for(i = 0; s2[i] != '\0'; i++) {
        index = is_in_str(s1, s2[i]);
        if (index >= 0) {
            return index;
        }
    }

    return -1;
}

int is_in_str(char s[], int c) {
    for(int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return i;
        }
    }

    return -1;
}