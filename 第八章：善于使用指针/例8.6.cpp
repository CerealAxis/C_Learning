#include <stdio.h>

int main () {
	int a[10] = {19, 17, 20, 18, 16, 22, 24, 15, 23, 25};
	int i, *p = a;

	for ( i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");

	for (i = 0; i < 10; i++)
		printf("%d ", *(a + i));
	printf("\n");

	for (i = 0; i < 10; i++)
		printf("%d ", *(p + i));
	printf("\n");

	for (p; p < (a + 10); p++)
		printf("%d ", *p);
	printf("\n");

	return 0;
}