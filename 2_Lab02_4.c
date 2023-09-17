#include <stdio.h>

int main() {
	int data[10];
	int k, temp;
	scanf("%d", &k);

	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &data[j]);
		}
		for (int h = 0; h < 9; h++) {
			for (int p = 0; p < 9 - h; p++) {
				if (data[p] > data[p + 1]) {
					temp = data[p];
					data[p] = data[p + 1];
					data[p + 1] = temp;
				}
			}
		}
		printf("%d\n", data[7]);


	}
}