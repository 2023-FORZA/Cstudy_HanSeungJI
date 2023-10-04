#include <stdio.h>

int reverse(int num) {
    int reversed = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int result = reverse(reverse(X) + reverse(Y));
    printf("%d\n", result);

    return 0;
}
