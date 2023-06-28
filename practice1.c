#include<stdio.h>

int main(void)
{

	int n1, n2;

	puts("整数を入力せよ"); 
	printf("整数n1：");  scanf("%d", &n1);
	printf("整数n2：");  scanf("%d", &n2);

	int ave = (n1 + n2) / 2;

	printf("平均値%dの符号を反転した値は%dです。\n",+ave, -ave);

	return 0;
}