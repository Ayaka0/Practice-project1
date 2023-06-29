#include<stdio.h>

int main(void)
{
	int no;

	printf("®”‚ğ“ü—Í‚¹‚æG");
	scanf("%d", &no);

	if (no == 0)
		puts("‚»‚Ì”‚Í‚O‚Å‚·B");
	else if (no > 0)
		puts("‚»‚Ì”‚Í³‚Å‚·B");
	else if (no < 0)
		puts("‚»‚Ì”‚Í•‰‚Å‚·");

	return 0;
}