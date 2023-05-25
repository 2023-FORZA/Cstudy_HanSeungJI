//1037
#include<stdio.h>
int main() {
    int n = 0;
    long long max = -1, min = 999999;
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &n);

        if (n > max)
            max = n;
        if (n < min)
            min = n;
    }

    printf("%lld\n", max * min);

    return 0;
}