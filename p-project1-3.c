//数当てゲーム（その２：当たるまで繰り返す：while文を利用）

#include<stdio.h>

int main(void)
{
	printf("0～9の整数を当てよう\n\n");

	int ans = 7; //当てさせる数
	int no; //読み込んだ値

	while (1) {       //正解するまで繰り返す
		printf("いくつかな：");
		scanf_s("%d", &no);

		if (no > ans)
			printf("もっと小さいよ。\n");
		else if (no < ans)
			printf("もっと大きいよ。\n");
		else
			break; //強制終了
	}
	printf("正解です。\n");

	return 0;
}