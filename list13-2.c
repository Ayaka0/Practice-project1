#include<stdio.h>

int main(void)
{
	FILE* fp;

	if ((fp = fopen("hw.txt", "r")) == NULL)
		printf("\aファイルをオープンにできません。\n");
	else {
		int ninzu = 0; //人数
		char name[100]; //名前
		double height, weight; //身長と体重
		double hsum = 0.0; //身長の合計
		double wsum = 0.0; //体重の合計

		while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
			printf("%-10s %5.1f %5.1f\n", name, height, weight);
			ninzu++;
			hsum += height;
			wsum += weight;
		}
		printf("------------------------------\n");
		printf("平均　　　　%5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);
	}

	return 0;
}