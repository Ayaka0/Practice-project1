#include<stdio.h>

int main(void) {

	int no;
	
		printf("正の整数：");
		scanf("%d", &no);

		printf("%dは", no);
		int i = 0;
		while (no > 0) {
			no /= 10;
			i++;
		}
		printf("%d桁です。", i);
		
	return 0;
}