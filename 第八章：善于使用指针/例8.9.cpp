#include <stdio.h>

void sort(int x[], int n);

int main() {
	int *p, i, a[10];
	p = a;

	for (i = 0; i < 10; i++) {
		scanf("%d", p++);
	}

	sort(a, 10);

	for (p = a, i = 0; i < 10; i++) {
		printf("%d ", *p);
		p++;
	}

	printf("\n");
	return 0;
}

void sort(int x[], int n) {
	int i, j, t;

	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (x[j] > x[i]) {
				t = x[i];
				x[i] = x[j];
				x[j] = t;
			}
		}
	}
}
