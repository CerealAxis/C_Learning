#include <stdio.h>

int main() {
	int a[10];
	int i, j, t;
	printf("输入10个数字\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("\n");
	for (j = 0; j < 9; j++)
		for (i = 0; i < 9 - j; i++)
			if (a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
	printf("从小到大:\n");
	for (i = 0; i <= 9; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
//错误代码
/*#include <stdio.h>

int main() {
	int a[10];
	int i, j, t;
	printf("输入10个数字\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("\n");
	for (j = 0; j < 9; j++)
		for (i = 0; i = 9 - j; i++)这里应该是i< 9- j
			if (a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
	printf("从小到大:\n");
	for (i = 0; i <= 9; i++)
		printf("%d ", a[i]);得有一个空格，不然会连在一起
	printf("\n");
	return 0;
}*/
