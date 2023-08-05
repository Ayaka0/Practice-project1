#include<stdio.h>

int sumup(int n)
{
	int sum = 0;


	while (n > 0)
		sum += n--;

	/*
	int i;
	for (i = 1; i <= n; i++)
		sum = i + sum;
	*/

	return sum;
}

int main(void)
{
	int a;

	printf("‘S®”‚Ì˜a‚ð‹‚ß‚éB\n");
	printf("ŽÀ”a : "); scanf("%d", &a);

	printf("%d‚Ì‘S®”‚Ì˜a‚Í%d‚Å‚·B\n", a,sumup(a));

	return 0;
}