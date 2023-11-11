#include <stdio.h>

int map[3][3];

int func(int x);

int main() {
    int num;
    scanf("%d", &num);

    int x, y;
    int value;
    int ans = 0;
    int check = 0;

    // num이 1이면 O표시, 2이면 X표시
    for (int i = 0; i < 9; i++) {
        if (i % 2 == 0)
            value = num;
        else {
            if (num == 2)
                value = 1;
            else
                value = 2;
        }

        scanf("%d %d", &x, &y);
        x--, y--;
        map[x][y] = value;

        if (!check) {
            ans = func(value);
            if (ans != 0)
                check = 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}

int func(int x) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (map[i][j] != x)
                break;
            if (j == 2)
                return x;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (map[j][i] != x)
                break;
            if (j == 2)
                return x;
        }
    }

    for (int i = 0; i < 3; i++) {
        if (map[i][i] != x)
            break;
        if (i == 2)
            return x;
    }

    for (int i = 0; i < 3; i++) {
        if (map[i][2 - i] != x)
            break;
        if (i == 2)
            return x;
    }

    return 0;
}
