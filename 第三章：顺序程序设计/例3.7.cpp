#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, s, area;
	scanf("%lf,%lf,%lf", &a, &b, &c);
	s = (a + b + c) / 2.0;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("a=%f\nb=%f\nc=%f\narea=%f\n", a, b, c, area);
	return 0;
}