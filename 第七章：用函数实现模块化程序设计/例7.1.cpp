#include <stdio.h>

int main() {
	void printf_star();
	void printf_message();
	printf_star();
	printf_message();
	printf_star();
	return 0;
}

void printf_star() {
	printf("*****************\n");
}

void printf_message () {
	printf("How do you do?\n");
}