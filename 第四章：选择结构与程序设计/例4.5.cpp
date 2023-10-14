#include <stdio.h>

int main() {
	int year, leap;
	printf("ÇëÊäÈëÄê·İ£º");
	scanf("%d", &year);
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
				leap = 1;
			else
				leap = 0;
		} else
			leap = 1;
	} else
		leap = 0;
	if (leap)
		printf("YES");
	else
		printf("NOT");
	return 0;
}