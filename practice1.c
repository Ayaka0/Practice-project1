#include<stdio.h>

int main(void)
{
	int n1, n2, n3,n4;

	puts("‚R‚Â‚Ì®”‚ğ“ü—Í‚¹‚æ");
	printf("®”‚PF"); scanf("%d", &n1);
	printf("®”‚QF"); scanf("%d", &n2);
	printf("®”‚RF"); scanf("%d", &n3);
	printf("®”‚SF"); scanf("%d", &n4);

	int max = n1;
	if (n2 > max) max = n2;
	if (n3 > max) max = n3;
	if (n4 > max) max = n4;

	printf("Å¬’l‚Í%d‚Å‚·\n", max);

	return 0;
}