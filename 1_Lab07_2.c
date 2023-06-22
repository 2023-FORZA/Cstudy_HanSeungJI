//10809

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int alp[26], len, index;

    for (int i = 0; i < 26; i++) {
        alp[i] = -1;
    }

    scanf("%s", s);

    len = strlen(s);
    for (int i = 0; i < len; i++) {
        index = s[i] - 'a';
        if (alp[index] == -1) {
            alp[index] = i;
        }
        else {
            continue;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", alp[i]);
    }

    return 0;
}