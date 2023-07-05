#include<stdio.h>

int main(void)
{
	int no;

	printf("³‚Ì®”‚ð“ü—Í‚¹‚æF");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 1;
		printf("{");
		while (i < no)  //1‚©‚çno-1‚Ü‚Å‚ð•\Ž¦
			printf("%d,", i++);
			printf("%d}\n", no); //no‚ð•\Ž¦
	}

	return 0;
}