#include <bits/stdc++.h>

int main() {
	int d = 324500;
	int p = 3245;
	double r = 0.008;
	double m;
	m = (log10(p) - log(p - d * r)) / log10(1 + r);
	printf("������Ҫ������=%f\n", m);
	printf("�ܻ�����=%f\n", m * p);
	return 0;
}