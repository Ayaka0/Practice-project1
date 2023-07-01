#include<stdio.h>

int main(void)
{
	int no;

	printf("³‚Ì®”‚ğ“ü—Í‚¹‚æF");
	scanf("%d", &no);

	if (1 <= no) {
		while (no >= 1)
			printf("%d", no--);
		printf("\n");
	}
	else {
		printf("‰üs‚µ‚Ü‚¹‚ñ");
	}

	return 0;
}