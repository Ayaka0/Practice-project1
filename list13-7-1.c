//円周率の値をテキストファイルに書き込んで読み取る

#include<stdio.h>

int main(void)
{
	FILE* fp;
	double pi = 3.14159265358979323846;

	printf("変数piから取り出した円周率は%23.21fです。\n", pi);

	//ファイルへの書き込み
	if ((fp = fopen("PI.txt", "w")) == NULL)
		printf("ファイルをオープンできません。\n");
	else {
		fprintf(fp, "%f", pi); //piを書き込む
		fclose(fp); //クローズ
	}

	//ファイルからの読み取り
	if ((fp = fopen("PI.txt", "r")) == NULL)
		printf("ファイルをオープンできません。\n");
	else {
		fscanf(fp, "%lf", &pi);
		printf("ファイルから読み取った円周率は%23.21fです。\n", pi);
		fclose(fp);
	}
	return 0;
}