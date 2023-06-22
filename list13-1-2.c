//任意のファイルの中身を消去する

#include<stdio.h>

//名前がfilenameであるファイルの中身を消去
int ferase(const char* filename)
{
	FILE* fp;

	if ((fp = fopen(filename, "w")) == NULL)
		return 0;
	fclose(fp);
	return 1;
}

int main(void)
{
	FILE* fp;
	char fname[256];

	printf("中身を消去するファイル名：");
	scanf("%s", fname);

	if (ferase(fname))
		printf("そのファイルの中身を消去しました。\n");
	else
		printf("そのファイルの中身は消去できませんでした。\n");

	return 0;
}