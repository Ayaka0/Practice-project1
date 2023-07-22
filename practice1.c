#include<stdio.h>

int main(void)
{
	int no; //入力値の宣言
	int i, j; //縦と横のカウント宣言

	printf("正方形を作ります。\n");
	printf("何段ですか");  scanf("%d", &no);
	
	for (i = 1; i <= no; i++)
	{
		for (j = 1; j <= no; j++)
			putchar('*', i * j);
		putchar('\n');
	}

	return 0;

}

