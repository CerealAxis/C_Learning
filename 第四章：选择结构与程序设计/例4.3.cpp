#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, s, area;
	printf("����a b c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a + b > c && b + c > a && c + a > b) {
		s = 0.5 * (a + b + c);
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("%6.2f\n", area);
	} else {
		printf("���Ϸ�");
	}
	return 0;
}