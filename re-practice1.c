#include<stdio.h>

int main(void)
{
	int no;

	do {
		printf("���̐�������͂���");
		scanf("%d", &no);
		if (no <= 0)
			puts("���ł͂Ȃ�������͂��Ȃ��ł�������");
	} while (no <= 0);
	
	printf("���̐����t����ǂނ�");
	while (no > 0) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts("�ł��B");

	return 0;


}