/*a=|��(123@456)| b=|��(14@25@36)|*/

#include <stdio.h>

int main () {
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int b[2][3], i, j;
	printf("a���飺\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	printf("����b��\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}