#include<stdio.h>

int main(void)
{
	int a, b;

	puts("2�̐��������");
	printf("����A�F"); scanf("%d", &a);
	printf("����B�F"); scanf("%d", &b);

	int min = a < b ? a : b;
	int max = a > b ? a : b;

	if (a == b)
		printf("2�̒l�͓������ł��B\n");
	else {
	printf("�傫���ق��̒l��%d�ł��B\n", max);
	printf("�������ق��̒l��%d�ł��B\n", min);
}

	return 0;
}