#include <stdio.h>

int htoi(const char s[]);
int lower(char c);
int is_valid_hex(const char s[]);
int hex_to_int(char c);

int main() {
    printf("0xFF = %d\n", htoi("0xFF"));
    printf("0x12 = %d\n", htoi("0x12"));
    printf("0xA2 = %d\n", htoi("0xA2"));
    printf("0xA12 = %d\n", htoi("0xA12"));
    return 0;
}

int htoi(const char s[]) {
    unsigned int res = 0;
    int c, i = 0;
    if (is_valid_hex(s) == -1) {
        return -1;
    }
    //skip 0x prefix
    i = 2;
    while(s[i] != '\0') {
        c = lower(s[i]);
        res = res * 16;
        if (c >= '0' && c <= '9') {
            res = res + (c - '0');
        } else {
            res = res + hex_to_int(c);
        }
        i++;
    }

    return res;
}

int is_valid_hex(const char s[]) {
    int c, i = 0;
    if (s[0] == '0') {
        i++;
        if (s[1] == 'x' || s[1] == 'X') {
            i++;
        } else {
            return -1;
        }
    } else {
        return -1;
    }

    while(s[i] != '\0') {
        c = lower(s[i]);
        if ((c >= 'a' && c <= 'f') || (c >= '0' && c <= '9')) {
            i++;
        } else {
            return -1;
        }
    }

    return 1;
}

int lower(const char c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 'a';
    } else {
        return c;
    }
}

int hex_to_int(const char c) {
    switch(c) {
        case 'a': return 10;
        case 'b': return 11;
        case 'c': return 12;
        case 'd': return 13;
        case 'e': return 14;
        case 'f': return 15;
    }

    return -1;
}