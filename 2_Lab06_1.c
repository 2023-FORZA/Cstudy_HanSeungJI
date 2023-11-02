#include <stdio.h>

int main() {
    int n = 0;
    long long int S = 0, sum = 0;

    scanf("%d", &S);

    while (1) {
        n++;
        sum = sum + n;
        if (sum > S) {
            n--;
            break;
        }
    }
    printf("%d\n", n);
}
