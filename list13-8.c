//ファイルの中身を画面に表示しながらコピーする

#include<stdio.h>
int main(void)
{
	FILE* sfp; //コピー元ファイル
	FILE* dfp; //コピー先のファイル
	char sname[FILENAME_MAX]; //コピー元のファイル名
	char dname[FILENAME_MAX]; //コピー先のファイル名

	printf("コピー元ファイル名："); scanf("%s", sname);
	printf("コピー先ファイル名："); scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)
		printf("コピー元ファイルをオープンできません。\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)
			printf("コピー先ファイルをオープンできません。\n");
		else {
			int ch; while ((ch = fgetc(sfp)) != EOF) {
				fputc(touuper(ch), dfp);
				//putchar(ch); //画面に出力
				fputc(ch, dfp);
			}
			fclose(dfp); //コピー先をクローズ
		}
		fclose(sfp); //コピー元をクローズ
	}
	return 0;
}