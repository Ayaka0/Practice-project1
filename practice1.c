#include<stdio.h>

int main(void) {

	int no;
	
		printf("���̐����F");
		scanf("%d", &no);

		printf("%d���t����ǂނ�", no);
		while (no > 0) {
			printf("%d", no % 10);
			no /= 10;
		}
		puts("�ł��B\n");
		
	return 0;
}