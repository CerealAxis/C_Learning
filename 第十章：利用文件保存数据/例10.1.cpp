#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp;
	char ch, filename[10];
	printf("���������õ��ļ�����");
	scanf("%s", filename);

	// ������뻺����
	getchar();

	if ((fp = fopen(filename, "w")) == NULL) {
		printf("�޷��򿪴��ļ���");
		exit(0);
	}
	printf("������һ����Ҫ������ַ�����#������");
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
