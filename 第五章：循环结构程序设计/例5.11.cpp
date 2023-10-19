#include <stdio.h>

int main() {
	printf("请输入你选择的方式和数据")
	scanf("%d", &i);
	while (i <= 10) {
		sum = sum + i;
		i++;
	}
	printf("sum=%d\n", sum);
	return 0;
}

int thread1(i) {
	while (i <= 10) {
		sum = sum + i;
		i++;
	}
	printf("sum=%d\n", sum);
	return 0;
}

int thread2(i) {
	do {
		sum = sum + i;
		i++;
	} while (i <= 10);
	printf("sum=%d\n", sum);
	return 0;
}