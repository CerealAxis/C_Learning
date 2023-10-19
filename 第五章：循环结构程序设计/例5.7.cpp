#include <stdio.h>

int main() {
	float score, sum = 0, average;
	int i, n = 0;
	for (i = 1; i < 6; i++) {
		printf("Please enter score£º");
		scanf("%f", &score);
		if (score < 60) {
			printf("Fail:%7.2f\n", score);
			continue;
		} else {
			sum = sum + score;
			n++;
		}
	}
	average = sum / n;
	printf("\nn=%d,average=%7.2f\n", n, average);
	return 0;
}