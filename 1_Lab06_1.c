//1547
#include <stdio.h>
int main() {
	int index = 1, n, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (index == a)
			index = b;
		else if (index == b)
			index = a;
	}
	printf("%d\n", index);
	return 0;
}