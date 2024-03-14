#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	clock_t start, stop;
	float duration;
	int result = 0; //소수의 합 저장할 변수선언
	int k = 0; 
	start = clock(); //수행 시간측정 시작
	for (int i = 0; i <= 100; i++) {
		for (k = 2; k < i; k++) {
			if (i % k == 0) break;
		}
		if (k == i)
			result += k;
	}
	stop = clock(); //수행 시간측정 종료
	duration = (float)(stop - start) / CLOCKS_PER_SEC; //측정시간 구하기
	printf("0부터 100까지의 소수의 합 : %d\n", result);
	printf("수행시간은 %f초입니다.\n", duration);
}