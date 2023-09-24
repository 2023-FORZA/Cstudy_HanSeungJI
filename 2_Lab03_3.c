#include <stdio.h>

int main() {
	int N, k;
	int a = 0;
	int arr[101] = { 0 };

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d", &k);
		arr[k]++;
		if (arr[k] != 1) {
			a += 1;
		}

	}
	printf("%d", a);
}