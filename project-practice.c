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

	printf("全整数の和を求める。\n");
	printf("実数a : "); scanf("%d", &a);

	printf("%dの全整数の和は%dです。\n", a,sumup(a));

	return 0;
}