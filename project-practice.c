#include<stdio.h>

int sqr(int n)
{
	return n * n;
}

int diff(int a, int b)
{
	return a > b ? a - b : b - a;
}


int main(void)
{
	int x, y;

	puts("2‚Â‚Ì®”‚ğ“ü—Í");
	printf("®”x : "); scanf("%d", &x);
	printf("®”y : "); scanf("%d", &y);

	printf("x‚Ì2æ‚ÆY‚Ì2æ‚Ì·‚Í%d‚Å‚·B", diff(sqr(x), sqr(y)));

	return 0;
}