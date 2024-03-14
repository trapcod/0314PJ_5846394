#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	clock_t start, stop;
	double duration;
	int result = 0;
	int k = 0;
	start = clock();
	for (int i = 2; i <= 100; i++) {
		for (k = 2; k < i; k++) {
			if (i % k == 0) break;
		}
		if (k == i)
			result += k;
	}
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("0부터 100까지의 소수의 합 : %d\n", result);
	printf("수행시간은 %f초입니다.\n", duration);
}