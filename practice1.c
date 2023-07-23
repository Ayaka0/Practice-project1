#include<stdio.h>

int main(void)
{
	int len;

	printf("’Z•ÓF");
	scanf("%d", &len);

	int i, j;
	for (i = len; i >= 1; i--)
	{
		for (j = 1; j <= len - i; j++)
			putchar(' ');
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}


	return 0;

}

