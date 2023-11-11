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
    char number[12]; // 10자리 숫자 + 널 종료 문자('\0')

    // 수 입력
    scanf("%s", number);

    // 각 자리수 내림차순 정렬
    sortDigits(number);

    // 정렬된 수 출력
    printf("%s\n", number);

    return 0;
}
