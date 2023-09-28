#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    int a = 1, b = 1, add = 6;
    while (1) {
        if (i <= b) {
            break;
        }
        b += add;
        add += 6;
        ++a;
    }
    printf("%d\n", a);
    return 0;
}