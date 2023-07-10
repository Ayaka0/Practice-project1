#include<stdio.h>

int main(void) {

	int no; //intŒ^•Ï”no

	printf("³‚Ì®”‚ğ“ü—Í‚·‚é;");
	scanf("%d", &no);

	if (no >= 0) {
		while (no >= 0) {
			printf("%d ", no);
			no--;	//noƒfƒNƒŠƒƒ“ƒg
		}
		printf("\n");
	}

	return;

}