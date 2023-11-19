#include <stdio.h>

int higher(int x, int y) {
	int flag;
	if (x > y) {
		flag = 1;
	} else if (x < y) {
		flag = -1;
	} else {
		flag = 0;
	}
	return flag;
}

int main () {
	int a[10], b[10], i, n = 0, m = 0, k = 0;
	printf("请输入A队的成绩：\n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	printf("\n");
	printf("请输入B队的成绩：\n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &b[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		if (higher(a[i], b[i]) == 1)
			n++;
		else if (higher(a[i], b[i]) == -1)
			m++;
		else
			k++;
	}
	printf("%d %d %d\n", n, m, k);
	if (n > k) {
		printf("A wins！\n");
	} else  if (n < k) {
		printf("B wins！\n");
	} else {
		printf("equal!\n");
	}
	return 0;
}