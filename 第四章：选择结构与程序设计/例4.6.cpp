#include <stdio.h>

int main() {
	int c, s;
	double p, w, d, f;
	printf("请输入单价、重量、和距离：");
	scanf("%lf %lf %d", &p, &w, &s);
	if (s >= 3000)
		c = 12;
	else
		c = s / 250;
	switch (c) {
		case 0:
			d = 0;
			break;
		case 1:
			d = 2;
			break;
		case 2:
		case 3:
			d = 5;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			d = 8;
			break;
		case 8:
		case 9:
		case 10:
		case 11:
			d = 10;
			break;
		case 12:
			d = 15;
			break;
	}
	f = p * w * s * (1 - d / 100.0);
	printf("运费：%10.2f元\n", f);
	return 0;
}