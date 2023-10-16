#include <stdio.h>

int main() {
	double p = 1, t = 1, v;
	int i;
	for (i = 1; i < 64; i++) {
		p = p * 2;
		t = t + p;
	}
	v = t / 1.42e8;
	printf("total=%e\n,volume=%e\n", t, v);
	return 0;
}