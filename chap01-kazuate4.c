//数当てゲーム（その４：入力回数に制限を設ける）

#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	srand(time(NULL)); //乱数の種を設定

	const int max_stage = 10; //最大入力回数
	int remain = max_stage; //残り何回入力できるか？

	int ans = rand() % 1000; //0から999の乱数を生成
	int no; //読み込んだ値

	printf("0～999の整数を当てよう\n\n");

	do {
		printf("残り%d回。いくつかな：", remain);
		scanf_s("%d", &no);
		remain--; //残り回数デクリメント

		if (no > ans)
			printf("もっと小さいよ\n");
		else if (no < ans)
			printf("もっと大きいよ\n");
	} while (no != ans && remain > 0);

	if (no != ans)
		printf("残念。正解は%dでした。\n", ans);
	else {
		printf("正解です。\n");
		printf("%d回であたりましたね。", max_stage - remain);
	}

	return 0;
}