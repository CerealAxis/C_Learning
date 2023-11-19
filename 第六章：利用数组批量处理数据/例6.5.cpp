#include <stdio.h>

int main () {
	int i, j, max_i;
	float sum, max = 0;
	float s[5][6] = {{78, 82, 93, 74, 65}, {91, 82, 72, 76, 67}, {100, 90, 85, 72, 98}, {67, 89, 90, 65, 78}, {77, 88, 99, 45, 89}};
	for (i = 0; i < 5; i++) {
		sum = 0;
		for (j = 0; j < 5; j++)
			sum = sum + s[i][j];
		s[i][j] = sum / 5;
	}
	for (i = 0; i < 5; i++) {
		if (s[i][5] > max) {
			max = s[i][5];
			max_i = i;
		}
	}
	printf("%d %7.2f\n", max_i, max);
	return 0;
}