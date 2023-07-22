//2776
#include <stdio.h>
#include <stdlib.h>

int compare_values(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;

    return (x > y) - (x < y);
}

int main(void) {
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, m;

        scanf("%d", &n);

        int* values = malloc(n * sizeof(*values));

        for (int j = 0; j < n; j++)
            scanf("%d", &values[j]);

        qsort(values, n, sizeof(*values), compare_values);

        scanf("%d", &m);

        for (int j = 0; j < m; j++) {
            int query;

            scanf("%d", &query);

            int low = 0, high = n, found = 0;

            while (low < high) {
                int mid = low + (high - low) / 2;

                if (values[mid] == query) {
                    found = 1;

                    break;
                }
                else if (values[mid] < query) low = mid + 1;
                else high = mid;
            }

            printf("%d\n", found);
        }

        free(values);
    }

    return 0;
}