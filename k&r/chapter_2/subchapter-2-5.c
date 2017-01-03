#include <stdio.h>

int isLeapYear(int year);

int main() {
    return 0;
}

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}