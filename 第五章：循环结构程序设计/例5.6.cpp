#include <stdio.h>

int main () {
	float score, sum = 0, average;
	int i, n;
	for (i = 1; i < 31; i++) {
		scanf("%f", &score);
		if (score < 0)
			break;
		else
			sum = sum + score;
	}
	n = i - 1;
	average = sum / n;
	printf("n=%d,average=%7.2f\n", n, average);
	return 0;

}