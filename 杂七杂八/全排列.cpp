#include <stdio.h>
#include <stdbool.h>

int n, a[12];
bool hash[12];

void g(int index) {
	if (index == n + 1) {
		for (int i = 1; i <= n; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		return;
	}

	for (int x = 1; x <= n; x++) {
		if (hash[x] == false) {
			a[index] = x;
			hash[x] = true;

			printf("a[index] = %d\n", a[index]);
			printf("hash[x] = %d\n", hash[x]);
			printf("x = %d\n", x);
			printf("index = %d\n\n", index);

			g(index + 1);
			hash[x] = false;
		}
	}
}

int main() {
	printf("输出1到n的全排列\n请输入n：");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		hash[i] = false;
	}

	g(1);
	return 0;
}
