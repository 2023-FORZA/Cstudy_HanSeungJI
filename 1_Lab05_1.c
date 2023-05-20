//2562
#include <stdio.h>
int main() {
    int max = -1, a[9], id;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
        if (max < a[i]) {
            max = a[i];
            id = i;
        }
    }
    printf("%d\n%d", max, id + 1);

    return 0;
}