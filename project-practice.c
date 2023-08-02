#include<stdio.h>

int main(void)
{
	int a[2][1];
	int b[3][2];
	int c[3][2];

	int i, j;
	puts("aの要素の値入力");
	for(i = 0; i < 2; i++)
	{
		for (j = 0; j < 1; j++)
		{
			printf("a[%d][%d] : ",i, j);
			scanf("%d", &a[i][j]);
		}
	}

	puts("bの要素の値入力");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("a[%d][%d] : ", i, j);
			scanf("%d", &b[i][j]);
		}
	}


	int k;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < 3; k++)
				c[i][j] += a[i][j] * b[i][j];
		}
	}

	puts("cの値");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
	}


	return 0;
}