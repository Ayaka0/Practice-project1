#include<stdio.h>

int main(void) {

	int no;
	
		printf("³‚Ì®”F");
		scanf("%d", &no);

		printf("%d‚Í", no);
		int i = 0;
		while (no > 0) {
			no /= 10;
			i++;
		}
		printf("%dŒ…‚Å‚·B", i);
		
	return 0;
}