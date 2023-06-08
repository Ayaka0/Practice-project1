#include<stdio.h>

int main(void)
{
	int sum = 0;
	int cnt = 0;
	int retry;

	do {
		int t;
		printf("®”’l‚ğ“ü—Í‚¹‚æG");
		scanf("%d",&t);

		sum += sum;
		cnt++;
		printf("‚Ü‚¾Hyyes-0 / No-9zG");
		scanf("%d",&retry);
	} while (retry == 0);

		printf("‡Œv‚Í%d‚Å•½‹Ï‚Í%.2f‚Å‚·B\n", sum, (double)sum / cnt);

	return 0;


}