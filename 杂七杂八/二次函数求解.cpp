#include <stdio.h>
#include <math.h>

int main() {

	double a, b, c, s, x1, x2;
	printf("��������η��̵�abc��ֵ,����ʾ��1 2 1\n");
	scanf("%f %f %f", &a, &b, &c);
	s = b * b - 4.0 * a * c;

	if (a == 0) {
		printf("�ⲻ�Ƕ��κ���\n");
	} else {
		if (s < 0)
			printf("�˶��κ����޽�\n");

		else if (s == 0) {
			x1 = x2 = -b / (2.0 * a);
			printf("������������ȵ�ʵ���⣨������λС����: \nx1=x2=%.2f", x1);
		}


		else if (s > 0) {
			x1 = (-b + sqrt(s)) / (2.0 * a );
			x2 = (b - sqrt(s)) / (2.0 * a );
			printf("��������������ʵ���⣨������λС����: \nx1=%.2f\nx2=%.2f", x1, x2);
		}
	}
	return 0;
}