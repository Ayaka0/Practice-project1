#include<stdio.h>

int main(void)
{
	int a, b;

	printf("�Q�̐������͂���\n");
	printf("����a�F"); scanf("%d", &a);
	printf("����b�F"); scanf("%d", &b);

	printf("a�̒l��b��%f%%�ł��B", (double)a/b*100.0);


	return 0;
}