#include <stdio.h>

int main() {
	float a, b, max;
	printf("Please enter a and b:");
	scanf("%f %f", &a, &b);
	if (a >= b)
		max = a;
	else
		max = b;
	printf("max=%6.2f\n", max);
	return 0;
}