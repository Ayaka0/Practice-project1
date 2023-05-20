//数当てゲーム（その３：当てさせる数は-999～999の乱数）

#include<time.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX_STAGE 10

int main(void)
{
	srand(time(NULL)); //乱数の種を設定

	
	int ans = rand() % 1999 - 999; //-999～999の乱数を生成
	int no; //読み込んだ値

	int num[MAX_STAGE];
	int stage = 0;

	printf("-999～999の整数を当てよう！\n\n");

	do {
		printf("残り%d回。いくつかな：", MAX_STAGE - stage);
		scanf_s("%d", &no);
		num[stage++];

		if (no > ans)
			printf("もっと小さいよ。\n");
		else if (no < ans)
			printf("もっと大きいよ。\n");
	} while (no != ans && stage < MAX_STAGE); //当たるまで繰り返す

	printf("正解です。\n");

	return 0;
}