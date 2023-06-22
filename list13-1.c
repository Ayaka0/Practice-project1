//ファイルのオープンとクローズ

#include<stdio.h>

int main(void)
{
	FILE* fp;

	fp = fopen("abc", "r"); //ファイルのオープン

	if (fp == NULL)
		printf("\aファイル\"abc\"をオープンできませんでした。\n");
	else {
		printf("ファイル\"abc\"をオープンしました。\n");
		fclose(fp); //ファイルをクローズ
	}
	return 0;
}