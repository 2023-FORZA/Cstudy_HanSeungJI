//1032

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char filenames[50][51];

    for (int i = 0; i < N; i++) {
        scanf("%s", filenames[i]);
    }

    char pattern[51];
    int length = strlen(filenames[0]);

    for (int i = 0; i < length; i++) {
        char ch = filenames[0][i];
        for (int j = 1; j < N; j++) {
            if (filenames[j][i] != '?' && filenames[j][i] != ch) {
                ch = '?';
                break;
            }
        }
        pattern[i] = ch;
    }

    pattern[length] = '\0';
    printf("%s\n", pattern);

    return 0;
}
