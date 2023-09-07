#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int cnt[10001];
    for (int i = 0; i < 10001; i++) {
        cnt[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        int input;
        scanf("%d", &input);
        cnt[input]++;
    }

    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            printf("%d\n", i);
        }
    }
}