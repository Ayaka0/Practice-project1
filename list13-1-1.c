//任意のファイルの存在をチェック
#include<stdio.h>

int main(void)
{
	FILE* fp;
	char fname[256];

	printf("ファイル名");
	scanf("%s", fname);

	fp = fopen(fname, "r");

	if (fp == NULL)
		printf("そのファイルは存在しません。\n");
	else {
		printf("そのファイルは存在します。\n");
		fclose(fp); //ファイルをクローズ
	}
	return 0;
}