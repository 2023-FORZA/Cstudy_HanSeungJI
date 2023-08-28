//5585

#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);

    int a = 1000 - money;
    int coin = 0;

    int coin500 = a / 500;
    coin += coin500;
    a %= 500;

    int coin100 = a / 100;
    coin += coin100;
    a %= 100;

    int coin50 = a / 50;
    coin += coin50;
    a %= 50;

    int coin10 = a / 10;
    coin += coin10;
    a %= 10;

    int coin5 = a / 5;
    coin += coin5;
    a %= 5;

    int coin1 = a;
    coin += coin1;

    printf("%d\n", coin);

    return 0;
}
