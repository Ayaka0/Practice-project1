//ファイルをコピーする

#include<stdio.h>

int main(void)
{
	FILE* sfp; //コピー元ファイル
	FILE* dfp; //コピー先ファイル
	char sname[FILENAME_MAX]; //コピー元のファイル名
	char dname[FILENAME_MAX]; //コピー先のファイル

	printf("コピー元ファイル名："); scanf("%s", sname);
	printf("コピー先ファイル名："); scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL) //コピー元をオープン
		printf("コピー元ファイルをオープンできません。\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL) //コピー先をオープン
			printf("コピー先ファイルをオープンできません。\n");
		else {
			int ch;
			while ((ch = fgetc(sfp)) != EOF)
				fputc(ch, dfp);
			fclose(dfp);
		}
		fclose(sfp);
	}

	return 0;
}