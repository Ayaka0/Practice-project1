#include<stdio.h>

int main(void)
{
	int len;

	printf("ピラミッド：");
	scanf("%d", &len);

	int i, j;

	for (i = 1; i <= len; i++)
	{
		for (j = 1; j <= i - 1; j++)
			putchar(' ');
		for (j = 1; j <= 2 * (len - i) + 1; j++)
			printf("%d", i % 10);
		putchar('\n');
	}


	return 0;

}

