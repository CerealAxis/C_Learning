#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, disc, x1, x2, p, q, r;
	scanf("a=%lf,b=%lf,c=%lf", &a, &b, &c);
	r = b * b - 4.0 * a * c;
	if (r < 0) {

		printf("ÊäÈëÎÞÐ§");
		return 0;
	} else {

		disc = b * b - 4.0 * a * c;
		p = -b / (2 * a);
		q = sqrt(disc) / (2 * a);
		x1 = p + q;
		x2 = p - q;
		printf("x1=%5.2f\nx2=%5.2f", x1, x2);
		return 0;
	}
}