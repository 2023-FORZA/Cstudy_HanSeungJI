#include <stdio.h>
#include <string.h>

int main() {
    char original[1001], collected[1001];
    int caseNumber = 0;

    while (1) {
        scanf("%s", original);
        scanf("%s", collected);

        if (strcmp(original, "END") == 0)
            break;

        caseNumber++;

        // 길이가 다르면 무조건 다르다고 판단
        if (strlen(original) != strlen(collected)) {
            printf("Case %d: different\n", caseNumber);
        }
        else {
            int freq_original[26] = { 0 };
            int freq_collected[26] = { 0 };
            int i, j;

            // 원래 단어의 알파벳 빈도수 계산
            for (i = 0; original[i]; i++) {
                freq_original[original[i] - 'a']++;
            }

            // 회수한 알파벳의 빈도수 계산
            for (i = 0; collected[i]; i++) {
                freq_collected[collected[i] - 'a']++;
            }

            // 빈도수가 다르면 다르다고 판단
            for (i = 0; i < 26; i++) {
                if (freq_original[i] != freq_collected[i]) {
                    printf("Case %d: different\n", caseNumber);
                    break;
                }
            }

            // 모든 알파벳의 빈도수가 같으면 같다고 판단
            if (i == 26) {
                printf("Case %d: same\n", caseNumber);
            }
        }
    }

    return 0;
}
