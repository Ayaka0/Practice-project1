//任意のファイルの存在をチェック
#include<stdio.h>

int fexist(const char* filename)
{
	FILE* fp;

	if ((fp = fopen(filename, "r")) == NULL)
		return 0;
	fclose(fp);
	return 1;
}


int main(void)
{
	FILE* fp;
	char fname[256];

	printf("ファイル名");
	scanf("%s", fname);

	fp = fopen(fname, "r");

	if (fexist(fname))
		printf("そのファイルは存在します。\n");
	else {
		printf("そのファイルは存在しません。\n");
		//fclose(fp); //ファイルをクローズ
	}
	return 0;
}