#include <stdio.h>

int main () {
	float amount, sum = 0.00;
	do {
		printf("���������");
		scanf("%f", &amount);
		sum = sum + amount;
	} while (sum < 10000);
	printf("sum=%9.2f\n", sum);
	return 0;
}