#include <stdio.h>
#include <string.h>

void sortDigits(char* number) {
    int len = strlen(number);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (number[j] < number[j + 1]) {
                // Swap
                char temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
}

int main() {
    char number[12]; // 10�ڸ� ���� + �� ���� ����('\0')

    // �� �Է�
    scanf("%s", number);

    // �� �ڸ��� �������� ����
    sortDigits(number);

    // ���ĵ� �� ���
    printf("%s\n", number);

    return 0;
}
