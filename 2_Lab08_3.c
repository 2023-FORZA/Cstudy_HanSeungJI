#include <stdio.h>

int main() {
    int E, S, M;
    scanf("%d %d %d", &E, &S, &M);
    int year = 1;

    while (1) {

        if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0) {
            break;
        }
        year++;
    }
    printf("%d\n", year);
}
