#include<stdio.h>

int main(void) {

	int no;
	
		printf("正の整数：");
		scanf("%d", &no);

		printf("%dを逆から読むと", no);
		while (no > 0) {
			printf("%d", no % 10);
			no /= 10;
		}
		puts("です。\n");
		
	return 0;
}