#include <stdio.h>

int main() {
	int A, B;
	int Aa, Ab, Ac, Ba, Bb, Bc;
	int AA, BB;
	scanf("%d %d", &A, &B);

	Aa = A / 100;
	Ab = (A % 100) / 10;
	Ac = A % 10;
	AA = (100 * Ac) + (10 * Ab) + Aa;

	Ba = B / 100;
	Bb = (B % 100) / 10;
	Bc = B % 10;
	BB = (100 * Bc) + (10 * Bb) + Ba;

	if (AA > BB) {
		printf("%d",AA);
	}
	else {
		printf("%d",BB);
	}
	return 0;
}