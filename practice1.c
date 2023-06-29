#include<stdio.h>

int main(void)
{
	int a,b;

	printf("２つの整数を入力せよ；");
	printf("整数A：");  scanf("%d", &a);
	printf("整数B：");  scanf("%d", &b);

	if (a == b)
		printf("AとBは等しいです。\n");
	else if (a > b)
		printf("AはBはより大きいです。\n");
	else
		printf("BはAより大きいです。\n");
	

	return 0;
}