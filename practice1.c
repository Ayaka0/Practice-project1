#include<stdio.h>

int main(void) {

	int no;
	
		printf("���̐����F");
		scanf("%d", &no);

		printf("%d��", no);
		int i = 0;
		while (no > 0) {
			no /= 10;
			i++;
		}
		printf("%d���ł��B", i);
		
	return 0;
}