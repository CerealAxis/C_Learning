#include <stdio.h>

int main () {
	int t;
	printf("��ϣ�������1�ۼӵ����ٵĺͣ���������");
	scanf("%d", &t);
	int i, sum = 0;
	i = 1;
	while (i <= t) {
		sum = sum + i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}