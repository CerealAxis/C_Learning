#include <stdio.h>
#include <math.h>
#include <windows.h>

double a, b, c;
double x1, x2;
int s, a_is_zero;

CRITICAL_SECTION mutex;

void calculate_quadratic() {
	s = b * b - 4.0 * a * c;

	if (a == 0) {
		a_is_zero = 1;
	} else {
		a_is_zero = 0;
		if (s < 0) {
			// 无解
		} else if (s == 0) {
			x1 = x2 = -b / (2.0 * a);
		} else {
			x1 = (-b + sqrt(s)) / (2.0 * a);
			x2 = (-b - sqrt(s)) / (2.0 * a);
		}
	}
}

DWORD WINAPI get_user_input(LPVOID arg) {
	printf("请输入二次方程的abc的值,输入示例1 2 1\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	EnterCriticalSection(&mutex);
	calculate_quadratic();
	LeaveCriticalSection(&mutex);

	return 0;
}

int main() {
	HANDLE input_thread;
	InitializeCriticalSection(&mutex);

	input_thread = CreateThread(NULL, 0, get_user_input, NULL, 0, NULL);
	if (input_thread == NULL) {
		fprintf(stderr, "Error creating thread\n");
		return 1;
	}

	WaitForSingleObject(input_thread, INFINITE);
	CloseHandle(input_thread);

	DeleteCriticalSection(&mutex);

	if (a_is_zero) {
		printf("这不是二次函数\n");
	} else {
		if (s < 0) {
			printf("此二次函数无解\n");
		} else if (s == 0) {
			printf("函数有两个相等的实数解（保留两位小数）: \nx1=x2=%.2f\n", x1);
		} else {
			printf("函数有俩个不等实数解（保留两位小数）: \nx1=%.2f\nx2=%.2f\n", x1, x2);
		}
	}

	return 0;
}

