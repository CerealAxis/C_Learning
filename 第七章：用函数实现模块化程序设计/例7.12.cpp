#include <stdio.h>

int main() {
	int fac(int n);
	int i;
	printf("1-5�Ľ׳˷ֱ�Ϊ��\n");
	for (i = 1; i <= 5; i++) {
		printf("%d!=%d\n", i, fac(i));
	}
	return 0;
}

int fac(int n) {
	static int f = 1;
	//�˴���1ָ����f�����̬����ֻ��ʼ��һ�Σ������Ǹ�ֵΪ1����˼
	//Ҳ���Ը���ȫ�ֱ���
	f = f * n;
	return (f);
}