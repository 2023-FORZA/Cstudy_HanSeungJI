//5354
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int k = 0; k < n; k++) {
        int m;
        scanf("%d", &m);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || i == m - 1) {
                    printf("#");
                }
                else if (j == 0 || j == m - 1) {
                    printf("#");
                }
                else {
                    printf("J");
                }
            }
            printf("\n");
        }

        if (k != n - 1) {
            printf("\n");
        }
    }

    return 0;
}
