#include<stdio.h>

int sqr(int x)
{
	return x * x;
}

int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int n1;

	puts("4æ’l®”‚ğ“ü—Í‚¹‚æ");
	printf("®”n1 : "); scanf("%d", &n1);


	printf("Å‚à‘å‚«‚¢’l‚Í%d‚Å‚·B\n", pow4(n1));

	return 0;
}