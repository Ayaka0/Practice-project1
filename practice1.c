#include<stdio.h>

int main(void)
{
	int no;

	printf("³‚Ì®”‚ð“ü—Í‚¹‚æF");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 2;
		while (i <= no) {
			printf("%d", i);
		i += 2;
	}
		printf("\n");
	}

	return 0;
}