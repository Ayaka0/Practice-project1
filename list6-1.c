#include<stdio.h>

//2乗値を返す
int sqr(int a)
{
	return a * a;
}

//4乗値を返す
int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int num;

	printf("値を入力せよ\n");
	printf("整数:"); scanf("%d",&num);
	

	printf("%dの4乗は%dです\n", num, pow4(num));

	return 0;

}