#include<stdio.h>

int main(void)
{
	int n1, n2;

	puts("3�̐�������͂���");
	printf("�����P�F"); scanf("%d", &n1);
	printf("�����Q�F"); scanf("%d", &n2);

	if (n1 - n2 >10 || n2 - n1 > 10)
		printf("�����̍���11�ȏ�ł��B\n");
	else 
		printf("�����̍���10�ȉ��ł�\n");
	

	return 0;
}