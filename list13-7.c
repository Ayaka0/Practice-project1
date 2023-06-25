//ファイル中の数字文字の個数をカウントする

#include<stdio.h>

int main(void)
{
	FILE* fp;
	char fname[FILENAME_MAX]; //ファイル名

	printf("ファイル名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL) //オープン
		printf("ファイルをオープンできません。");
	else {
		int ch;
		int cnt[10] = { 0 }; //数字の出現回数

		while ((ch = fgetc(fp)) != EOF)
			if (ch >= '0' && ch <= '9')
				cnt[ch - '0']++;
		fclose(fp); //クローズ

		puts("数字文字の出現回数");
		int i;
		for (i = 0; i < 10; i++)
			printf("'%d': %d\n", i, cnt[i]);
	}

	return 0;
}