#include <stdio.h>

int main() {
    int height = 0, min = 0, N, max = 0, s[1001] = { 0, };
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &s[i]);
    }

    min = s[0];
    for (int i = 0; i < N; i++) {
        if (s[i] >= s[i + 1]) {
            height = s[i] - min;
            min = s[i + 1];
        }
        if (height > max) {
            max = height;
        }
    }

    printf("%d", max);

}