#include <stdio.h>

int main() {
	double p = 141178e4, r = 0.01;
	int year;
	for (year = 2020; p < 2e9; year++) {
		p = p * (1 + r);
	}
	printf("year=%d,p=%e\n", year, p);
	return 0;

}