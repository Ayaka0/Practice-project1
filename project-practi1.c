#include<stdio.h>

#define NUMBER 5 //学生の人数
int tensu[NUMBER]; //配列の定義
int top(void); //関数topの関数原型宣言

int top(void)
{
	extern int tensu[]; //配列の宣言
	int max = tensu[0];

	int i;
	for (i = 1; i < NUMBER; i++)
		if (tensu[i] > max)
			max = tensu[i];
	return max;

}

int main(void)
{
	extern int tensu[];

	printf("%d人の点数を入力せよ。\n", NUMBER);
	int i;
	for (i = 0; i < NUMBER; i++)
	{
		printf("%d : ", i + 1);
		scanf("%d", &tensu[i]);
	}
	printf("最高点＝%d\n", top());

	return 0;
}