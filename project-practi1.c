#include<stdio.h>

#define NUMBER 7 //学生人数

int tensu[NUMBER]; //配列の定義

int pass(void); //関数passのプロトタイプ宣言


int pass(void)
{
	extern tensu[NUMBER];

	printf("合格者一覧表\n");
	printf("---------------\n");
	int i;
	for (i = 0; i < NUMBER; i++)
		if (tensu[i] >= 60)
			printf("%d番：%d\n", i+1, tensu[i]);
}


int main(void)
{
	extern int tensu[];

	printf("%d人の点数を入力：\n", NUMBER);
	int i;
	for (i = 0; i < NUMBER; i++)
	{
		printf("%d：", i + 1);
		scanf("%d", &tensu[i]);
	}
	
	pass();
		
		return 0;
}