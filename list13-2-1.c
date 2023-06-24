//身長と体重を読み込んで身長順にソートするとともに平均値を求めて表示する

#include<stdio.h>
#include<string.h>

#define NINZU_MAX 50 
#define NAME_LEN 100

//個人データを表す構造体
typedef struct {
	char name[NAME_LEN];
	double height;
	double weight;
} Human;

//xおよびyがさす個人データを交換
void swap_Human(Human* x, Human* y)
{
	Human temp = *x;
	*x = *y;
	*y = temp;
}

//個人データの配列aの先頭n個の要素を身長の昇順にバブルソート
void sort_by_height(Human a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--)
			if (a[j - 1].height > a[j].height)
				swap_Human(&a[j - 1], &a[j]);
	}
}

int main(void)
{
	FILE* fp;

	if ((fp = fopen("hw.txt", "r")) == NULL)
		printf("ファイルをオープンにできません。\n");
	else {
		int ninzu = 0;
		Human data[NINZU_MAX];
		double hsum = 0.0;
		double wsum = 0.0;

		int i;
		for (i = 0; i < NINZU_MAX; i++) {
			if (fscanf(fp, "%s%lf%lf", data[ninzu].name, &data[ninzu].height, &data[ninzu].weight) != 3)
				break;
			hsum += data[ninzu].height;
			wsum += data[ninzu].weight;
			ninzu++;
		}

		sort_by_height(data, ninzu);

		for (i = 0; i < ninzu; i++)
			printf("%-10s %5.1f %5.1f\n", data[i].name, data[i].height, data[i].weight);
		printf("-----------------------\n");
		printf("平均        %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);
	}

	return 0;
}