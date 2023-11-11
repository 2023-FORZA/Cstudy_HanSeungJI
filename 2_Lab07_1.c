#include <stdio.h>

int main() {
    int arr[10] = { 0, };
    int arr2[10] = { 0, };
    int arr3[10] = { 0, };
    int sum = 0;
    int min_idx = 0; //arr3의 원소가 가장 작을때 index

    for (int i = 0; i < 10; i++) {  // 입력받은 10개의 값 저장
        scanf("%d", &arr[i]);
    }

    for (int k = 0; k < 10; k++) {  // arr2에 arr의 첫번째 원소부터 시작하여 차례대로 더한 값 저장
        sum = sum + arr[k];
        arr2[k] = sum;
    }

    for (int j = 0; j < 10; j++) {  // arr2의 각 원소들을 100으로 뺀 후 arr3에 저장
        arr3[j] = 100 - arr2[j];
        if (arr3[j] < 0)
            arr3[j] = arr3[j] * (-1);
    }

    // arr3의 원소 값 중 가장 작은 수의 인덱스 번호 찾기 (가장 작으면서 같은 수가 2개라면 인덱스번호가 큰 값 선택)
    for (int l = 0; l < 10; l++) {
        if (arr3[l] <= arr3[min_idx]) {
            min_idx = l;
        }
    }

    int result = 0;
    // 0부터 위에서 찾은 인덱스 번호까지의 값 더하고 출력하기
    for (int m = 0; m <= min_idx; m++) {
        result += arr[m];
    }

    printf("%d\n", result);

    return 0;
}