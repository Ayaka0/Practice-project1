#include<stdio.h>

int sqr(int x)
{
	return x * x;
}

int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int n1;

	puts("4��l��������͂���");
	printf("����n1 : "); scanf("%d", &n1);


	printf("�ł��傫���l��%d�ł��B\n", pow4(n1));

	return 0;
}