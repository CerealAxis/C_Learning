#include <stdio.h>

int main () {
	char a[ ] = "I am a boy.";
	char b[20];
	int i;
	for (i = 0; * (a + i) != '\0'; i++) {
		*(b + i) = * (a + i);
	}
	*(b + i) = '\0';
	printf("string a is:%s\n");
	printf("String b is:");
	for (i = 0; b[i] != '\0'; i++) {
		printf("%c", b[i]);
	}
	printf("\n");
	return 0;
}