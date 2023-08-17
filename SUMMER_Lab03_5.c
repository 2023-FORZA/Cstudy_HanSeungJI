//9550

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k);

        int data[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &data[j]);
        }

        int result = 0;
        for (int j = 0; j < n; j++) {
            result += data[j] / k;
        }

        printf("%d\n", result);
    }

    return 0;
}
