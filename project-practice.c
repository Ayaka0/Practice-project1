#include<stdio.h>

int sqr(int n)
{
	return n * n;
}

int diff(int a, int b)
{
	return a > b ? a - b : b - a;
}


int main(void)
{
	int x, y;

	puts("2�̐��������");
	printf("����x : "); scanf("%d", &x);
	printf("����y : "); scanf("%d", &y);

	printf("x��2���Y��2��̍���%d�ł��B", diff(sqr(x), sqr(y)));

	return 0;
}