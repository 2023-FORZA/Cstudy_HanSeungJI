#include <stdio.h>

int main() {
	int N;
	int i5 = 0;	// 5의 배수
	int i25 = 0;	// 25의 배수
	int i125 = 0;	// 125의 배수

	scanf("%d", &N);

	i5 = N / 5;
	i25 = N / 25;
	i125 = N / 125;

	printf("%d", i5 + i25 + i125);

	return 0;
}