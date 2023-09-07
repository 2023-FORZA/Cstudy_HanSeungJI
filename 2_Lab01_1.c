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

        // ���̰� �ٸ��� ������ �ٸ��ٰ� �Ǵ�
        if (strlen(original) != strlen(collected)) {
            printf("Case %d: different\n", caseNumber);
        }
        else {
            int freq_original[26] = { 0 };
            int freq_collected[26] = { 0 };
            int i, j;

            // ���� �ܾ��� ���ĺ� �󵵼� ���
            for (i = 0; original[i]; i++) {
                freq_original[original[i] - 'a']++;
            }

            // ȸ���� ���ĺ��� �󵵼� ���
            for (i = 0; collected[i]; i++) {
                freq_collected[collected[i] - 'a']++;
            }

            // �󵵼��� �ٸ��� �ٸ��ٰ� �Ǵ�
            for (i = 0; i < 26; i++) {
                if (freq_original[i] != freq_collected[i]) {
                    printf("Case %d: different\n", caseNumber);
                    break;
                }
            }

            // ��� ���ĺ��� �󵵼��� ������ ���ٰ� �Ǵ�
            if (i == 26) {
                printf("Case %d: same\n", caseNumber);
            }
        }
    }

    return 0;
}
