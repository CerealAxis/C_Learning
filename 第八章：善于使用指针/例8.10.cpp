#include <stdio.h>

int main ( ) {
	char *string = "I love China!";
	printf("%s\n", string);
	int i;
	for (i = 1; i < 14; i++) {
		printf("%c\n", * string);
		string++;
	}
	return 0;
}