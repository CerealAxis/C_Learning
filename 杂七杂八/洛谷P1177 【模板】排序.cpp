//���P1177 ��ģ�塿����
#include <stdio.h>

int main() {
	int num;
	printf("��������Ҫ��������֣������ʽ����һ��Ϊһ�����������ڶ��а��� N ���ո������������Ϊ����Ҫ�������������\n");
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

	printf("��С����\n");
	for (int i = 0; i < num; i++)
		printf("%lf ", a[i]);

	printf("\n");
	return 0;
}
