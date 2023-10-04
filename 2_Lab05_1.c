#include <stdio.h>
#include <string.h>
int main(void) {
    int i, j, max, result = 0, len;
    char arr[1000000];
    int cnt[26] = { 0, };
    int select = 0;
    int number;

    scanf("%s", arr);

    len = strlen(arr);


    for (i = 0; i < len; i++) {


        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            number = arr[i] - 'A';
        }

        else if (arr[i] >= 'a' && arr[i] <= 'z') {
            number = arr[i] - 'a';
        }

        cnt[number]++;

    }

    max = cnt[0];

    for (i = 1; i < 26; i++) {
        if (max < cnt[i]) {
            max = cnt[i]; select = i;
        }
    }

    for (i = 0; i < 26; i++) {
        if (max == cnt[i]) result++;
    }


    if (result > 1) {
        printf("?\n");
    }
    else {
        printf("%c", select + 'A');
    }

    return 0;
}