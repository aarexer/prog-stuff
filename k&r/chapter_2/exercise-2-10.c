#include <stdio.h>

int lower(int c);

int main() {
    char s[] = "Hello";
    
    for(int i = 0; s[i] != '\0'; i++) {
        printf("%c", lower(s[i]));
    }

    printf("\n");
    return 0;
}

int lower(int c) {
    return (c >= 'A' && c <='Z') ? c +'a'-'A' : c;
}