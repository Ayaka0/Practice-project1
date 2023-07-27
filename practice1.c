#include<stdio.h>

#define NUMBER 120 //配列aの要素数

int main(void)
{
	int num;
	int tensu[NUMBER]; //データ数の宣言
	int bunpu[11] = { 0 };

	printf("人数を入力：");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("1～%dで入力せよ：", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%dの点数を入力せよ\n", num);

	int i;
	for (i = 0; i < num; i++) {
		printf("%2d番：", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("0～100で入力：");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	puts("-----分布グラフ------");
	
	int bunpu_max = 0;
	for (i = 0; i <= 10; i++)
		if (bunpu[i] > bunpu_max)
			bunpu_max = bunpu[i];

	int j;
	for (i = bunpu_max; i >= 1; i--)
	{
		for (j = 0; j <= 10; j++)
		{
			if (bunpu[j] >= i)
				printf(" * ");
			else
				printf("   ");
		}
		putchar('\n');
	}
	for (i = 0; i < 34; i++)
		putchar('-');
	putchar('\n');
	for (i = 0; i <= 10; i++)
		printf("%2d ", i * 10);
	putchar('\n');


	return 0;

}

