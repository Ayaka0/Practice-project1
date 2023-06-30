#include<stdio.h>

int main(void)
{
	int a, b;
	int lower, upper;

		printf("2‚Â‚Ì®”‚ð“ü—Í‚¹‚æB\n");
		printf("®”aG"); scanf("%d", &a);
		printf("®”bG"); scanf("%d", &b);

		if (a > b) {
			lower = b;
			upper = a;
		}
		else {
			lower = a;
			upper = b;
		}

		int sum = 0;
		int no = lower;

		do {
			sum = sum + no;
			no = no + 1;
		} while (no <= upper);

	printf("%dˆÈã%dˆÈ‰º‚Ì‘S®”‚Ì˜a‚Í%d‚Å‚·B", lower, upper, sum);

	return 0;
}