#include<stdio.h>

int main(void)
{
	int n1, n2, n3;

	puts("3�̐�������͂���");
	printf("�����P�F"); scanf("%d", &n1);
	printf("�����Q�F"); scanf("%d", &n2);
	printf("�����R�F"); scanf("%d", &n3);

	if (n1 == n2 && n2 == n3)
		printf("3�̒l��������");
	else if (n1 == n2 || n2 == n3 || n1 == n3)
		printf("2�̒l��������");
	else 
		printf("3�Ƃ��l�͈قȂ�܂�");
	

	return 0;
}