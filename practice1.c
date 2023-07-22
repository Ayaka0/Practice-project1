#include<stdio.h>

int main(void)
{
	int no1, no2, height, width;
	printf("横長の長方形を作ります。\n");
	printf("一辺（その１）："); scanf("%d", &no1);
	printf("一辺（その２）："); scanf("%d", &no2);

	int i, j;

	if (no1 < no2)
	{
		height = no1;
		width = no2;
	}
	else
	{
		height = no2;
		width = no1;
	}

	for (i = 1; i <= height; i++)
	{
		for (j = 1; j <= width; j++)
			putchar('*');
		putchar('\n');
	}


	return 0;

}

