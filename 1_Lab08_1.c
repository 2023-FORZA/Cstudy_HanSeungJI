//7568

#include <stdio.h>

int main() {
    int n, i, k, cnt;
    int arr[100][2];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d %d", &arr[i][0], &arr[i][1]);

    for (i = 0; i < n; i++) {
        cnt = 0;
        for (k = 0; k < n; k++)
            if (arr[i][0] < arr[k][0] && arr[i][1] < arr[k][1])
                cnt++;
        printf("%d ", ++cnt);
    }
    return 0;
}