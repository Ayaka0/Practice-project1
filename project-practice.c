#include<stdio.h>

int sumup(int n)
{
	int sum = 0;

	int i;
	for (i = 1; i <= n; i++)
		sum = i + sum;

	return sum;
}

int main(void)
{
	int a;

	printf("�S�����̘a�����߂�B\n");
	printf("����a : "); scanf("%d", &a);

	printf("%d�̑S�����̘a��%d�ł��B\n", a,sumup(a));

	return 0;
}