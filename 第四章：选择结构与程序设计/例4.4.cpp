#include <stdio.h>
#include <math.h>

int main() {
	int number;
	double price, cost, total;
	printf("请输入所需的数量和商品单价");
	scanf("%d %lf", &number, &price);
	if (number >= 500)
		cost = 0.15;
	else if (number >= 300)
		cost = 0.10;
	else if (number >= 100)
		cost = 0.75;
	else if (number >= 50)
		cost = 0.05;
	else
		cost = 0;
	total = number * price * (1 - cost);
	printf("Total=%10.2f\n", total);
	return 0;
}