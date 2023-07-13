#include<stdio.h>

int main(void) {

	int no;
	
		printf("ê≥ÇÃêÆêîÅF");
		scanf("%d", &no);

		printf("%dÇãtÇ©ÇÁì«ÇﬁÇ∆", no);
		while (no > 0) {
			printf("%d", no % 10);
			no /= 10;
		}
		puts("Ç≈Ç∑ÅB\n");
		
	return 0;
}