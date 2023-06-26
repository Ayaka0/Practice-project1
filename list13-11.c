//double型の配列をバイナリファイルい書き込んで読み取る

#include<stdio.h>

#define ARY_SIZE 10

int main(void)
{
	FILE *fp;
	double a[ARY_SIZE] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 };

	//書き込み
	if ((fp = fopen("ARRAY.bin", "wb")) == NULL)
		printf("ファイルをオープンできません\n");
	else {
		fwrite(a, sizeof(double), ARY_SIZE, fp); //配列aを書き込む
		fclose(fp);
	}

	//読み取り
	if ((fp = fopen("ARRAY.bin", "rb")) == NULL)
		printf("ファイルをオープンできません\n");
	else {
		fread(a, sizeof(double), ARY_SIZE, fp); //配列aに読み取る
		int i;
		for (i = 0; i < ARY_SIZE; i++)
			printf("a[%d] = %.1f\n", i, a[i]);
		fclose(fp);
	}
	return 0;
}