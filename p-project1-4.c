//乱数の生成（その１）

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("この処理系では0～%dの乱数が生成できます。\n", RAND_MAX);

	int retry; //もう一度？

	do {
		printf("\n乱数%dを生成しました。\n", rand()); //0～RAND_MAXの乱数を生成して返却

		printf("もう一度？…1…いいえ 0…はい");
		scanf_s("%d", &retry);
	} while (retry == 0);

	return 0;
}