#include<stdio.h>

int min2(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	int n1, n2;

	printf("2�̒l����͂���F\n");
	printf("����a:"); scanf("%d", &n1);
	printf("����b:"); scanf("%d", &n2);

	printf("���������̒l��%d�ł��B\n", min2(n1, n2));

	return 0;

}