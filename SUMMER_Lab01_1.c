//1063
#include <stdio.h>
#include <string.h>

int main() {

    char k[3], s[3], m[51][3];
    int n;

    scanf("%s %s %d", k, s, &n);
    //printf("k=%s, s=%s, n=%d", k, s, n);

    for (int i = 0; i < n; i++) {
        scanf("%s", m[i]);
    }

    for (int i = 0; i < n; i++) {
        //printf("i=%d, m[%d]=%s: \n", i, i, m[i]);
        if (strcmp(m[i], "R") == 0) {
            if ((s[1] == k[1]) && (s[0] == k[0] + 1)) {
                if (k[0] != 'G') {
                    s[0]++; k[0]++;
                }
            }
            else {
                if (k[0] != 'H') {
                    k[0]++;
                }
            }
            //printf("R\n");
        }

        else if (strcmp(m[i], "L") == 0) {
            if ((s[1] == k[1]) && (s[0] == k[0] - 1)) {
                if (k[0] != 'B') {
                    s[0]--; k[0]--;
                }
            }
            else {
                if (k[0] != 'A') {
                    k[0]--;
                }
            }
            //printf("L\n");
        }

        else if (strcmp(m[i], "B") == 0) {
            if ((s[0] == k[0]) && (s[1] == k[1] - 1)) {
                if (k[1] != '2') {
                    s[1]--; k[1]--;
                }
            }
            else {
                if (k[1] != '1') {
                    k[1]--;
                }
            }
            //printf("B\n");
        }

        else if (strcmp(m[i], "T") == 0) {
            if ((s[0] == k[0]) && (s[1] == k[1] + 1)) {
                if (k[1] != '7') {
                    s[1]++; k[1]++;
                }
            }
            else {
                if (k[1] != '8') {
                    k[1]++;
                }
            }
            //printf("T\n");
        }

        else if (strcmp(m[i], "RT") == 0) {
            if ((s[0] == k[0] + 1) && (s[1] == k[1] + 1)) {
                if ((k[0] != 'G') && (k[1] != '7')) {
                    s[0]++; s[1]++; k[0]++; k[1]++;
                }
            }
            else {
                if ((k[0] != 'H') && (k[1] != '8')) {
                    k[0]++; k[1]++;
                }
            }
            //printf("RT\n");
        }

        else if (strcmp(m[i], "LT") == 0) {
            if ((s[0] == k[0] - 1) && (s[1] == k[1] + 1)) {
                if ((k[0] != 'B') && (k[1] != '7')) {
                    s[0]--; s[1]++; k[0]--; k[1]++;
                }
            }
            else {
                if ((k[0] != 'A') && (k[1] != '8')) {
                    k[0]--; k[1]++;
                }
            }
            //printf("LT\n");
        }

        else if (strcmp(m[i], "RB") == 0) {
            if ((s[0] == k[0] + 1) && (s[1] == k[1] - 1)) {
                if ((k[0] != 'G') && (k[1] != '2')) {
                    s[0]++; s[1]--; k[0]++; k[1]--;
                }
            }
            else {
                if ((k[0] != 'H') && (k[1] != '1')) {
                    k[0]++; k[1]--;
                }
            }
            //printf("RT\n");
        }

        else if (strcmp(m[i], "LB") == 0) {
            if ((s[0] == k[0] - 1) && (s[1] == k[1] - 1)) {
                if ((k[0] != 'B') && (k[1] != '2')) {
                    s[0]--; s[1]--; k[0]--; k[1]--;
                }
            }
            else {
                if ((k[0] != 'A') && (k[1] != '1')) {
                    k[0]--; k[1]--;
                }
            }

            //printf("LB\n");
        }
        //printf("k=%s s=%s\n", k, s);
    }

    //printf("k=%s, s=%s, n=%d", k, s, n);
    printf("%s\n%s", k, s);

    /*
    for (int i=0; i<n; i++) {
        printf("%s\n", m[i]);
    }
    */

    return 0;
}