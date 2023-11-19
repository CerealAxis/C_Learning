//洛谷P1177 【模板】排序
#include <stdio.h>

int main() {
	int num;
	printf("请输入你要排序的数字，输入格式：第一行为一个正整数，第二行包含 N 个空格隔开的正数，为你需要进行排序的数。\n");
	scanf("%d", &num);
	double a[num];

	for (int i = 0; i < num; i++)
		scanf("%lf", &a[i]);

	for (int j = 0; j < num; j++) {
		for (int i = 0; i < num - 1 - j; i++) {
			if (a[i] > a[i + 1]) {
				double t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}

	printf("从小到大：\n");
	for (int i = 0; i < num; i++)
		printf("%lf ", a[i]);

	printf("\n");
	return 0;
}
