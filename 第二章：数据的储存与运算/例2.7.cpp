#define PI 3.1415926
#include <stdio.h>
#include <math.h>

int main() {
	double r = 3.67, c, s, v;
	c = PI * 2 * r;
	s = pow(r, 2) * PI;
	v = 4.0 / 3.0 * PI * pow(r, 3); //使用4.0/3.0确保得到的结果是实数
	printf("%f\n%f\n%f\n", c, s, v);
	return 0;
}