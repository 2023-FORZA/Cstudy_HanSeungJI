//5347
#include <stdio.h>
// 최대공약수
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// 최소공배수
long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long result = lcm(a, b);
        printf("%lld\n", result);
    }
    return 0;
}
