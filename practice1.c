#include<stdio.h>

#define NUMBER 7

int main(void)
{
	int suuji[NUMBER];

	printf("5人の点数を入力せよ\n", NUMBER);

	int i;
	for (i = 0; i < NUMBER ; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &suuji[i]);
	}

	for (i = 0; i < NUMBER / 2; i++)
	{
		int t = suuji[i];
		suuji[i] = suuji[NUMBER - i -1];
		suuji[NUMBER - i - 1] = t;
	}

	puts("反転");
	for (i = 0; i < NUMBER; i++)
		printf("x[%d] = %d\n", i, suuji[i]);

	return 0;

}

