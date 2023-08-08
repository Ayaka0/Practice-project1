#include<stdio.h>

#define NUMBER 5 //学生の人数


int min_of(int v[], int n)
{
	int min = v[0];

	int i;
	for (i = 1; i < n; i++)
		if (v[i] < min)
			min = v[i];
	return min;
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

	int min_e = min_of(eng, NUMBER);
	int min_m = min_of(mat, NUMBER);

	printf("英語の最低点=%d\n", min_e);
	printf("数学の最低点=%d\n", min_m);

	return 0;
}