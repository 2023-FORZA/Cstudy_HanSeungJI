//10825

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char name[11];
	int kor;
	int eng;
	int math;
}Stu;

Stu a[100000];
Stu b[100000];

void merge(int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = start;

	while (i <= mid && j <= end) {
		if (a[i].kor > a[j].kor) {
			b[k] = a[i++];
		}
		else if (a[i].kor < a[j].kor) {
			b[k] = a[j++];
		}
		else {
			if (a[i].eng < a[j].eng) {
				b[k] = a[i++];
			}
			else if (a[i].eng > a[j].eng) {
				b[k] = a[j++];
			}
			else {
				if (a[i].math > a[j].math) {
					b[k] = a[i++];
				}
				else if (a[i].math < a[j].math) {
					b[k] = a[j++];
				}
				else {
					if (strcmp(a[i].name, a[j].name) > 0) {
						b[k] = a[j++];
					}
					else {
						b[k] = a[i++];
					}
				}
			}
		}
		k++;
	}
	if (i > mid) {
		for (int m = j; m <= end; m++) {
			b[k++] = a[m];
		}
	}
	else {
		for (int m = i; m <= mid; m++) {
			b[k++] = a[m];
		}
	}
	for (int m = start; m <= end; m++) {
		a[m] = b[m];
	}
}

void merge_sort(int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		merge_sort(start, mid);
		merge_sort(mid + 1, end);
		merge(start, mid, end);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s %d %d %d", &a[i].name, &a[i].kor, &a[i].eng, &a[i].math);
	}
	merge_sort(0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%s\n", a[i].name);
	}

	return 0;
}
