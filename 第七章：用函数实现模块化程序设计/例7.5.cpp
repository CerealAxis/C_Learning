#include <stdio.h>

int main() {
	long fac(int n);
	int n;
	long fact = 0;
	printf(" ‰»În£∫\n");
	scanf("%d", &n);
	fact = fac(n);
	printf("%d!=%ld\n", n, fact);
	return 0;
}

long fac(int n) {
	int i;
	long fac = 1;
	for (i = 1; i <= n; i++)
		fac = fac * i;
	return fac;
}