#include <stdio.h>

int main() {
	int fac(int n);
	int i;
	printf("1-5的阶乘分别为：\n");
	for (i = 1; i <= 5; i++) {
		printf("%d!=%d\n", i, fac(i));
	}
	return 0;
}

int fac(int n) {
	static int f = 1;
	//此处的1指的是f这个静态变量只初始化一次，而不是赋值为1的意思
	//也可以改用全局变量
	f = f * n;
	return (f);
}