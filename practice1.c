#include<stdio.h>

int main(void)
{

	int a, b;

	puts("�Q�̐�������͂���B\n");
	printf("����a�F");  scanf("%d", &a);
	printf("����b�F");  scanf("%d", &b);

	int wa = a + b;
	int seki = a * b;

	printf("�����̘a��%d�Őς�%d�ł��B\n",wa, seki);

	return 0;
}