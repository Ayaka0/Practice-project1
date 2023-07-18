#include<stdio.h>

int main(void)
{
	int no; //scanfの入力変数宣言
	printf("nの値：");
	scanf("%d", &no);

	int sum = 0; //インクリメントのごとの合計値の宣言
	int i; //カウントの宣言

	for (i = 1; i <= no; i++)
	{
		sum += i;
	}
	printf("1から%dまでの総和は%dです。", no, sum);


	return 0;

}

