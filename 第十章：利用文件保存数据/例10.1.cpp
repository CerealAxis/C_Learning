#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp;
	char ch, filename[10];
	printf("请输入所用的文件名：");
	scanf("%s", filename);

	// 清空输入缓冲区
	getchar();

	if ((fp = fopen(filename, "w")) == NULL) {
		printf("无法打开此文件！");
		exit(0);
	}
	printf("请输入一个你要储存的字符（以#结束）");
	ch = getchar();
	while (ch != '#') {
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	printf("\n");
	return 0;
}
