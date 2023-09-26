#include <stdio.h>

int main() {
	char a = 'C', b = 'H', c = 'I', d = 'N', e = 'A';
	printf("%c%c%c%c%c\n", a, b, c, d, e);
	printf("%c%c%c%c%c\n", e, d, c, a, b);
	return 0;
}