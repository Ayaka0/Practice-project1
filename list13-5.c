//ファイル中の改行文字の個数をカウントする

#include<stdio.h>

int main(void)
{
	FILE* fp;
	char fname[FILENAME_MAX]; //ファイル名

	printf("ファイル名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
		printf("ファイルをオープンできません。\n");
	else {
		int ch;
		int n_count = 0; //改行文字の出現回数

		while ((ch = fgetc(fp)) != EOF)
			if (ch == '\n')
				n_count++;
			//putchar(ch);
		fclose(fp);
		printf("そのファイルが%d行です。\n", n_count);
	}

	return 0;
}