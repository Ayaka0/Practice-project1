//おみくじ

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{
	//おみくじの結果を配列に格納
	const char* omikuji[] = {"大吉", "中吉","小吉","吉","末吉","凶","大凶"};

	//乱数のシード値を設定
	srand(time(NULL));

	int retry;

	do {
		//乱数を生成しておみくじの結果を表示
		int index = rand() % 6;
		printf("おみくじの結果：%s\n", omikuji[index]);
		printf("もう一度：0…いいえ 1…はい：");
			scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;

}

