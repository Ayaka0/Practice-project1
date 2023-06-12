#include<stdio.h>

int main(void)
{

	int retry;

	do {
		int no;
		printf("®”‚ğ“ü—Í‚¹‚æ");
		scanf("%d", &no);

		if (no == 0)
			puts("‚»‚Ì”‚Í‚O‚Å‚·");
		else if (no > 0)
			puts("‚»‚Ì”‚Í³‚Å‚·");
		else
			puts("‚»‚Ì”‚Í•‰‚Å‚·");

		printf("again? yes: 0 / No: 1");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;


}