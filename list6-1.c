#include<stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void)
{
	int num;

	printf("値を入力せよ：\n");
	printf("整数:"); scanf("%d", &num);
	

	printf("%dの3乗は%dです\n", num, cube(num));

	return 0;

}