#include<stdio.h>
#include<string.h>

#define NINZU_MAX 50 //読み込む人数の上限
#define NAME_LEN 100 //名前用文字列の要素数


int main(void)
{
	FILE* fp;

	if ((fp = fopen("hw.txt", "r")) == NULL)
		printf("\aファイルをオープンにできません。\n");
	else {
		int ninzu = 0; //人数
		char name[NAME_LEN][NINZU_MAX]; //名前
		double height[NINZU_MAX];
		double weight[NINZU_MAX]; //身長と体重
		double hsum = 0.0; //身長の合計
		double wsum = 0.0; //体重の合計

		int i;
		for (i = 0; i < NINZU_MAX; i++) {
			if (fscanf(fp, "%s%lf%lf", name[ninzu], &height[ninzu], &weight[ninzu]) != 3)
				break;

			hsum += height[ninzu];
			wsum += weight[ninzu];
			ninzu++;
		}
		int j;
		for (i = 0; i < ninzu - 1; i++) {
			for (j = ninzu - 1; j > i; j--) {
				if (height[j - 1] > height[j]) {
					char tn[NAME_LEN];
					double td;
					strcpy(tn, name[j]);
					strcpy(name[j], name[j - 1]);
					strcpy(name[j - 1], tn);
					td = height[j]; height[j] = height[j - 1]; height[j - 1] = td;
					td = weight[j]; weight[j] = weight[j - 1]; weight[j - 1] = td;
				}
			}
		}

		for(i = 0; i < ninzu; i++)
			printf("%-10s %5.1f %5.1f\n", name[i], height[i], weight[i]);

		
		/*while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
			printf("%-10s %5.1f %5.1f\n", name, height, weight);
			ninzu++;
			hsum += height;
			wsum += weight;
		}
		*/
		printf("------------------------------\n");
		printf("平均　　　　%5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);
	}

	return 0;
}