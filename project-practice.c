#include<stdio.h>

double power(double x, int n)
{
	double tmp = 1.0;

	int i;
	for (i = 1; i <= n; i++)
		tmp *= x;

	return tmp;
}

int main(void)
{
	double a;
	int b;

	printf("a‚Ìbæ‚ð‹‚ß‚éB\n");
	printf("ŽÀ”a : "); scanf("%lf", &a);
	printf("ŽÀ”b : "); scanf("%d", &b);

	printf("%.2f‚Ì%dæ‚Í%.2f‚Å‚·B\n", a, b, power(a, b));

	return 0;
}