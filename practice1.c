#include<stdio.h>

int main(void)
{
	int no;

	printf("��������͂���G");
	scanf("%d", &no);

	if (no == 0)
		puts("���̐��͂O�ł��B");
	else if (no > 0)
		puts("���̐��͐��ł��B");
	else if (no < 0)
		puts("���̐��͕��ł�");

	return 0;
}