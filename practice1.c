#include<stdio.h>

int main(void)
{
	int a, b;

	puts("2つの整数を入力");
	printf("整数A："); scanf("%d", &a);
	printf("整数B："); scanf("%d", &b);

	int min = a < b ? a : b;
	int max = a > b ? a : b;

	if (a == b)
		printf("2つの値は等しいです。\n");
	else {
	printf("大きいほうの値は%dです。\n", max);
	printf("小さいほうの値は%dです。\n", min);
}

	return 0;
}