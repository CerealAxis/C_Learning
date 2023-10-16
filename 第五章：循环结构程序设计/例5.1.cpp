#include <stdio.h>

int main () {
	int t;
	printf("你希望计算从1累加到多少的和（整数）：");
	scanf("%d", &t);
	int i, sum = 0;
	i = 1;
	while (i <= t) {
		sum = sum + i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}