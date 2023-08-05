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

	printf("‘S®”‚Ì˜a‚ğ‹‚ß‚éB\n");
	printf("À”a : "); scanf("%d", &a);

	printf("%d‚Ì‘S®”‚Ì˜a‚Í%d‚Å‚·B\n", a,sumup(a));

	return 0;
}