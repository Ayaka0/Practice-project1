#include<stdio.h>

int main(void)
{
	int retry;

	do {
		int no;
		printf("®”‚ğ“ü—ÍG");
		scanf("%d", &no);

		if (no % 2)
			puts("‚»‚Ì”‚ÍŠï”‚Å‚·");
		else
			puts("‚»‚Ì”‚Í‹ô”‚Å‚·");

		printf("‚à‚¤ˆê“xHyyes - 0 / No - 1z:");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;


}