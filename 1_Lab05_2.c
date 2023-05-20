//10807
#include <stdio.h>
int main() {
    int n, a[100], v, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &v);
    for (int k = 0; k < n; k++) {
        if (a[k] == v)
            count++;
    }

    printf("%d", count);

    return 0;
}