//数当て判定（その１：試作版）
#include <stdio.h>

int main(void)
{
	printf("0～9の整数を当てよう！\n\n");

	int ans = 7; //当てさせる数
	int no;      //読み込んだ値

	printf("いくつかな：");
	scanf_s("%d", &no);

	if (no > ans)
		printf("もっと小さいよ。\a\n");
	else if (no < ans)
		printf("もっと大きいよ。\a\n");
	else
		printf("正解です。\n");

	return 0;
}