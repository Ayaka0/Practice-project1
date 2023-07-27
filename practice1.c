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
	
	int j;

	for (i = 0; i <= 9; i++)
	{
		printf("%3d～%3d : ", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}
	printf("      100:");
	for (j = 0; j < bunpu[10]; j++)
		putchar('*');
		putchar('\n');

	return 0;

}

