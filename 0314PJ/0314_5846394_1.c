#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	clock_t start, stop;
	float duration;
	int result = 0; //�Ҽ��� �� ������ ��������
	int k = 0; 
	start = clock(); //���� �ð����� ����
	for (int i = 0; i <= 100; i++) {
		for (k = 2; k < i; k++) {
			if (i % k == 0) break;
		}
		if (k == i)
			result += k;
	}
	stop = clock(); //���� �ð����� ����
	duration = (float)(stop - start) / CLOCKS_PER_SEC; //�����ð� ���ϱ�
	printf("0���� 100������ �Ҽ��� �� : %d\n", result);
	printf("����ð��� %f���Դϴ�.\n", duration);
}