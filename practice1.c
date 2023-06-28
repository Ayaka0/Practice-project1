#include<stdio.h>

int main(void)
{

	int a, b;

	puts("２つの整数を入力せよ。\n");
	printf("整数a：");  scanf("%d", &a);
	printf("整数b：");  scanf("%d", &b);

	int wa = a + b;
	int seki = a * b;

	printf("それらの和は%dで積は%dです。\n",wa, seki);

	return 0;
}