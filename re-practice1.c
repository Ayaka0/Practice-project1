#include<stdio.h>

int main(void)
{

	int a, b;
	int lower, upper;

	printf("����a;"); scanf("%d", &a);
	printf("����b;"); scanf("%d", &b);

	if (a > b) {
		lower = b;
		upper = a;
	} else {
		lower = a;
		upper = b;
	}
	
	int sum = 0;
	int no = lower;
	do {
		sum += no;
		no++;
	} while (no <= upper);

	printf("%d�ȏ�%d�ȉ��̑S�����̘a��%d�ł��B\n", lower, upper, sum);

	return 0;


}