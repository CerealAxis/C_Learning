#include <stdio.h>

int main() {
	char c1, c2;
	scanf("%c", &c1);
	c2 = c1 + 32;
	printf("%c,%d\n", c1, c1);
	printf("%c,%d\n", c2, c2);
	return 0;
}