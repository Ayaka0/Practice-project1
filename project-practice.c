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

	puts("4乗値整数を入力せよ");
	printf("整数n1 : "); scanf("%d", &n1);


	printf("最も大きい値は%dです。\n", pow4(n1));

	return 0;
}