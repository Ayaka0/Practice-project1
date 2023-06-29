#include<stdio.h>

int main(void)
{
	int a,b;

	printf("２つの整数を入力せよ；");
	printf("整数A：");  scanf("%d", &a);
	printf("整数B：");  scanf("%d", &b);


	puts("等価式の値");
		printf("a==bの値：%d\n", a==b);
		printf("a!=bの値：%d\n", a != b);
	
	puts("関係式の値");
		printf("a < bの値：%d\n", a < b);
		printf("a <= bの値：%d\n", a <= b);
		printf("a > bの値：%d\n", a > b);
		printf("a >= bの値：%d\n", a >= b);
	

	return 0;
}