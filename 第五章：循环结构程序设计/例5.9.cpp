#include <stdio.h>
#include <math.h>

int main() {
	int m, i, k;
	printf("请输入你希望核验的数字：");
	scanf("%d", &m);
	k = (int)sqrt(m);
	for (i = 2; i <= k; i++)
		if (m & i == 0)
			break;

	if (i > k)
		printf("%d是\n", m);
	else
		printf("%d不是\n", m);
	return 0;
}