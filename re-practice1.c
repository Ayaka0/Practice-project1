#include<stdio.h>

int main(void)
{

	int no;

	printf("³‚Ì®”‚ğ“ü—ÍG");
	scanf("%d", &no);

	if (no < 0)
		return (0);

	while (no >= 0) {
		printf("%d", no);
		no--;
	}
	putchar('\n');

	return 0;


}