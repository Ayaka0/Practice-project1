#include<stdio.h>

int main(void)
{
	int n; //整数値の宣言

	printf("整数値：");
	scanf("%d", &n);

	int i;
	int count = 0;

	for (i = 1; i <= n; i++)
		if (n % i == 0) {
			printf("%d\n", i);
			count++;
		}
	printf("約数は%d個です。", count);

	return 0;

}

