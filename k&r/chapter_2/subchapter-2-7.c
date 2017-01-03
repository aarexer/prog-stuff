#include <stdio.h>

int atoi(char s[]);

int main() {

}

int atoi(char s[]) {
    int n;
    for (int i = 0; s[i] > '0' && s[i] <= '9'; i++) {
        n = 10 * n + s[i] - '0';
    }

    return n;
}