#include<stdio.h>

int calculateSum(int n)
{
	int sum = 0; //˜a‚ğŠi”[‚·‚é•Ï”

	int i;
	for (i = 1; i <= n; i++) {
		sum += i; //i‚ğsum‚É‰ÁZ
	}
	return sum;
}
int main(void)
{
	int n;
	printf("®”n‚ğ“ü—ÍF");
	scanf("%d", &n);

	int result = calculateSum(n);
	printf("‚P‚©‚ç%d‚Ü‚Å‚Ì‘S®”‚Ì˜a‚Í%d‚Å‚·B\n", n, result);

	return 0;

}