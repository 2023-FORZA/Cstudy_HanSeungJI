//4673

#include <stdio.h>

int d(int n) {
    int sum = n;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    int arr[10001] = { 0 };

    for (int i = 1; i <= 10000; i++) {
        int idx = d(i);
        if (idx <= 10000) {
            arr[idx] = 1;
        }
    }

    for (int i = 1; i <= 10000; i++) {
        if (arr[i] != 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}