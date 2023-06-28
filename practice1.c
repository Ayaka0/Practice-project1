#include<stdio.h>

int main(void)
{

	int no;

	printf("整数を入力せよ。\n"); scanf("%d", &no);


	printf("7を加えると%dです。\n", no + 7);
	printf("7を減じると%dです。\n", no - 7);
	printf("7を乗じると%dです。\n", no * 7);
	printf("7を除した商は%dです。\n", no / 7);
	printf("7を除した余剰%dです。\n", no % 7);

	return 0;
}