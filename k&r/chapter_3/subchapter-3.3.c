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

    while (low <= high) {
        mid = (low + high) / 2;
        if (v[mid] < x) {
            low = mid + 1;
        } else if (v[mid] > x) {
            high = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}