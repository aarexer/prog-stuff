#include <stdio.h>

int bisearch(int x, int v[], int n);

int main() {
    int a[6] = {1, 2, 3, 4, 5, 6};
    printf("%d\n", bisearch(4, a, 6));
    return 0;
}

int bisearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while (low <= high && v[mid] != x) {
        if (v[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }

    if (v[mid] == x) {
        return mid;
    } else {
        return -1;
    }
}