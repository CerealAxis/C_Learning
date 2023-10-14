#include <stdio.h>

int main() {
	char grade;
	printf("«Î ‰»Îøº ‘µ»º∂£∫");
	scanf("%c", &grade);
	switch (grade) {
		case 'A':
			printf("85~100\n");
			break;
		case 'B':
			printf("70~84\n");
			break;
		case 'C':
			printf("60~69\n");
			break;
		case 'D':
			printf("<50\n");
			break;
		default  :
			printf("ERROR\n");
			break;
	}
	return 0;
}