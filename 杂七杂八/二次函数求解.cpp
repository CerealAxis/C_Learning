#include <stdio.h>
#include <math.h>

int main() {

	double a, b, c, s, x1, x2;
	printf("请输入二次方程的abc的值,输入示例1 2 1\n");
	scanf("%f %f %f", &a, &b, &c);
	s = b * b - 4.0 * a * c;

	if (a == 0) {
		printf("这不是二次函数\n");
	} else {
		if (s < 0)
			printf("此二次函数无解\n");

		else if (s == 0) {
			x1 = x2 = -b / (2.0 * a);
			printf("函数有两个相等的实数解（保留两位小数）: \nx1=x2=%.2f", x1);
		}


		else if (s > 0) {
			x1 = (-b + sqrt(s)) / (2.0 * a );
			x2 = (b - sqrt(s)) / (2.0 * a );
			printf("函数有俩个不等实数解（保留两位小数）: \nx1=%.2f\nx2=%.2f", x1, x2);
		}
	}
	return 0;
}