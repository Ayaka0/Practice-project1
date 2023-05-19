//乱数を生成（その２：現在の時刻に基づいて乱数の種を設定）

#include <time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	srand(time(NULL)); //現在の時刻に基づいて乱数の種を設定

	printf("この処理系では0〜%dの乱数が生成できます。\n", RAND_MAX);

	int retry; //もう一度？

	do {
		printf("\n乱数%dを生成しました。\n", rand());

		printf("もう一度？…0：いいえ 1；はい\n");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}