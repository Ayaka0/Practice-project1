#include<stdio.h>

#define NUMBER 5 //学生の人数


int max_of(int v[], int n)
{
	int max = v[0];

	int i;
	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];
	return max;
}

int main(void)
{
	int eng[NUMBER];
	int mat[NUMBER];

	printf("%d人の点数を入力。\n", NUMBER);
	int i;
	for (i = 0; i < NUMBER; i++)
	{
		printf("[%d]英語：", i + 1); scanf("%d", &eng[i]);
		printf("数学："); scanf("%d", &mat[i]);
	}

	int max_e = max_of(eng, NUMBER);
	int max_m = max_of(mat, NUMBER);

	printf("英語の最高点=%d\n", max_e);
	printf("数学の最高点=%d\n", max_m);

	return 0;
}