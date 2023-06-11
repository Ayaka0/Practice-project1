#include<stdio.h>

int main(void)
{
	int no;

	do {
		printf("³‚Ì®”‚ğ“ü—Í‚¹‚æ");
		scanf("%d", &no);
		if (no <= 0)
			puts("³‚Å‚Í‚È‚¢”‚ğ“ü—Í‚µ‚È‚¢‚Å‚­‚¾‚³‚¢");
	} while (no <= 0);
	
	printf("‚»‚Ì”‚ğ‹t‚©‚ç“Ç‚Ş‚Æ");
	while (no > 0) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts("‚Å‚·B");

	return 0;


}