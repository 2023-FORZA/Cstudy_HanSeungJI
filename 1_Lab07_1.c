//2675

#include <stdio.h>

int main() {
	int a, b;
	char str[20];
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d %s", &b, str);

		for (int j = 0; j < strlen(str); j++) {
			for (int k = 0; k < b; k++) {
				printf("%c", str[j]);
			}
		}
		printf("\n");
	}
}