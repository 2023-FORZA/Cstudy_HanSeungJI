#include <stdio.h>

int main() {
    int arr[10] = { 0, };
    int arr2[10] = { 0, };
    int arr3[10] = { 0, };
    int sum = 0;
    int min_idx = 0; //arr3�� ���Ұ� ���� ������ index

    for (int i = 0; i < 10; i++) {  // �Է¹��� 10���� �� ����
        scanf("%d", &arr[i]);
    }

    for (int k = 0; k < 10; k++) {  // arr2�� arr�� ù��° ���Һ��� �����Ͽ� ���ʴ�� ���� �� ����
        sum = sum + arr[k];
        arr2[k] = sum;
    }

    for (int j = 0; j < 10; j++) {  // arr2�� �� ���ҵ��� 100���� �� �� arr3�� ����
        arr3[j] = 100 - arr2[j];
        if (arr3[j] < 0)
            arr3[j] = arr3[j] * (-1);
    }

    // arr3�� ���� �� �� ���� ���� ���� �ε��� ��ȣ ã�� (���� �����鼭 ���� ���� 2����� �ε�����ȣ�� ū �� ����)
    for (int l = 0; l < 10; l++) {
        if (arr3[l] <= arr3[min_idx]) {
            min_idx = l;
        }
    }

    int result = 0;
    // 0���� ������ ã�� �ε��� ��ȣ������ �� ���ϰ� ����ϱ�
    for (int m = 0; m <= min_idx; m++) {
        result += arr[m];
    }

    printf("%d\n", result);

    return 0;
}