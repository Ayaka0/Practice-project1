#include<stdio.h>

int main(void)
{
	int a, b;
	int lower, upper;

		printf("2�̐�������͂���B\n");
		printf("����a�G"); scanf("%d", &a);
		printf("����b�G"); scanf("%d", &b);

		if (a > b) {
			lower = b;
			upper = a;
		}
		else {
			lower = a;
			upper = b;
		}

		int sum = 0;
		int no = lower;

		do {
			sum = sum + no;
			no = no + 1;
		} while (no <= upper);

	printf("%d�ȏ�%d�ȉ��̑S�����̘a��%d�ł��B", lower, upper, sum);

	return 0;
}