//9012

#include <stdio.h>

int main() {
	int n, left, right, flag;
	char arr[51] = { 0 };
	scanf("%d%*c", &n);
	for (int i = 0; i < n; i++) {
		left = 0;
		right = 0;
		flag = 1;
		scanf("%s", arr);
		for (int j = 0; arr[j] != 0; j++) {
			if (arr[j] == '(') left++;
			else right++;
			if (left < right)
				break;
			arr[j] = 0;
		}
		if (left != right)
			flag = 0;
		if (flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}