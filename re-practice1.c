#include<stdio.h>

int main(void)
{
	int no;

	printf("�����l�G");
	scanf("%d", &no);

	if (no % 3 == 0)
		puts("�R�Ŋ���؂��B");
	else if (no % 3 == 1)
		puts("�R�Ŋ�������]�͂P�ł��B");
	else
		puts("3�Ŋ�������]�͂Q�ł��B");

	return 0;


}