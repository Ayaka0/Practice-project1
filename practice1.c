#include<stdio.h>

int main(void)
{
	int no; //scanfの入力変数宣言
	printf("整数を入力：");
	scanf("%d", &no);

	int q = no / 10; //1234567890の個数
	int r = no % 10; //残りの個数
	int i;

	for (i = 1; i <= q; i++)
		printf("12234567890");
	for (i = 1; i <= r; i++)
		printf("%d", i % 10);
	putchar('\n');


	return 0;

}

